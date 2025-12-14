/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36942
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(unsigned char)8] |= ((/* implicit */int) var_8);
                    arr_9 [(signed char)3] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (signed char)-62)), (9223372036854775801LL))) - (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_10 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (((arr_4 [i_2] [i_1] [i_2 - 2]) - (arr_4 [i_2] [i_1] [i_2 + 1]))) : (arr_6 [i_0] [8] [i_2] [i_2]));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 -= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((unsigned short) arr_12 [(short)2] [(short)2] [(short)2]))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-62)) || (((/* implicit */_Bool) 18446744073709551614ULL))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [(signed char)13] [i_2] [i_1] [(unsigned short)19] = ((/* implicit */signed char) ((((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (9223372036854775801LL))) + (9223372036854775807LL))) << (((((arr_3 [i_4]) + (7860998365548995164LL))) - (37LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) arr_1 [5ULL] [i_2])) : (((var_1) ? (((/* implicit */int) (signed char)-48)) : (arr_4 [i_0] [i_1] [i_0]))))))));
                            var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_1] [i_1])))) : ((+(var_8))))), (((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            var_15 = ((/* implicit */short) (-(arr_15 [i_2 - 1] [i_1] [i_2 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = var_7;
                            arr_20 [9LL] [i_1] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((10ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((int) (signed char)13))));
                        }
                        var_17 = max(((+(((/* implicit */int) arr_17 [i_3] [i_1] [i_2 - 1])))), (((/* implicit */int) var_9)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((signed char) (short)-4200));
                            var_19 *= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_19 [22] [i_1] [i_1] [i_1] [i_7]))) != (var_4)))), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) arr_18 [(short)12] [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_5))))))));
                        }
                        arr_26 [i_6] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (short)31)))));
                        var_20 ^= ((/* implicit */short) min(((-(var_11))), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)15)))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((2942693181792668444LL), (((/* implicit */long long int) (signed char)12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (min(((-(var_5))), (var_5)))));
}

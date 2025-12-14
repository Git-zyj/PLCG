/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34496
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
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (var_7) : (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((max((0ULL), (18446744073709551591ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) <= (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */int) arr_1 [i_2 - 1])) << (((((/* implicit */int) arr_1 [i_0])) - (69))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_2 - 2])) : (arr_3 [i_1]))))) ^ ((((!(var_10))) ? (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */int) arr_5 [i_0] [i_2])))) : (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2 + 1]);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))) : (((((/* implicit */int) arr_2 [i_2] [i_1])) | (arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2]))))) : ((+(((((/* implicit */int) arr_2 [i_2] [i_1])) >> (((arr_0 [i_0]) - (526593648))))))))))));
                }
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (+((-(min((((/* implicit */long long int) arr_8 [i_4] [i_3 + 1] [i_1] [i_0])), (var_2)))))));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0] [i_4]))))) || (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3] [i_1] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((signed char) var_17))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_6)))))))));
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (0ULL))))) == (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
}

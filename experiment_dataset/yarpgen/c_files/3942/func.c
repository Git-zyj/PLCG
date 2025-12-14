/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3942
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 |= arr_0 [i_1 + 1] [i_0];
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((arr_7 [i_1 - 2] [i_3] [i_2] [13]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_2] [i_3]))) : (674254359U)));
                                arr_16 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 3620712936U)) ? (arr_4 [i_3 - 2]) : (arr_4 [i_3 - 2])));
                                arr_17 [i_0] [(_Bool)0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */int) ((arr_14 [i_1 - 2] [i_1]) ? (arr_12 [i_1 - 2] [i_3]) : (502480720U)));
                            }
                            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                arr_21 [(unsigned short)4] [i_3] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) min((674254340U), (674254328U)))) && (((/* implicit */_Bool) arr_0 [i_3 - 1] [i_1 - 1])))))));
                                var_18 = ((/* implicit */long long int) (+(min((arr_4 [i_1 - 3]), (arr_4 [i_1 - 3])))));
                                arr_22 [i_5] [i_3] [i_3] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1 + 1] [i_2] [i_3]) ? (((((/* implicit */_Bool) 8573640433135545671ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))) != (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 3] [(short)2] [2LL]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (8573640433135545671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_25 [i_0] [i_6]))));
                                arr_26 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-32)), ((unsigned char)36)))) <= (((((/* implicit */_Bool) 8573640433135545671ULL)) ? (((/* implicit */int) arr_25 [i_1] [i_1 - 1])) : (15926319)))));
                                var_20 = var_15;
                            }
                            arr_27 [i_0] [i_3] [i_2] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_0] [6U] [i_3] [i_0] [(signed char)7] [(unsigned short)2]), (min((var_15), (((/* implicit */unsigned long long int) -1))))))) ? (var_11) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_28 [i_0] [i_0] [i_3] [8] [i_3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))));
}

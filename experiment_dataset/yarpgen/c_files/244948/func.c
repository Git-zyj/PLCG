/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244948
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
    var_11 = ((/* implicit */unsigned char) var_1);
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) & (arr_1 [i_0 - 4]))) / ((-(arr_1 [i_0 - 4]))));
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 401893943)), (0ULL)));
        var_14 = ((/* implicit */signed char) ((short) var_6));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_10 [i_3] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(arr_6 [i_1 + 1] [i_3])))) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_3] [i_3 + 2])) : (((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_2] [i_3])) >> (((-401893948) + (401893960)))))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_7 [i_1 + 1])))) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_3 + 1] [i_3 - 1])))))));
                    var_16 = ((/* implicit */short) arr_6 [i_1 + 1] [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_2)), (((long long int) var_6)))), (((/* implicit */long long int) (signed char)127))));
                        var_18 = ((/* implicit */unsigned long long int) 401893959);
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-116))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_3] [i_2] [(short)8] [i_3] = ((/* implicit */signed char) 401893965);
                            var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >> (((((/* implicit */int) (unsigned char)227)) >> (((arr_6 [i_3] [i_2]) + (1964978903)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_1 + 1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_4))), (((var_5) ? (-401893960) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1]))))));
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (-401893958)));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            var_23 |= ((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (arr_13 [i_1] [i_2] [i_2] [i_4] [i_2] [i_6])))))));
                            var_24 ^= arr_14 [i_1] [i_2] [i_1 + 1] [i_1] [i_1];
                        }
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [(_Bool)1])), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])))) ? (1063938753106976773ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))))));
    }
    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
    {
        var_26 = ((((/* implicit */_Bool) arr_8 [(unsigned short)23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7 - 2]))) : ((+(((((/* implicit */_Bool) arr_4 [i_7])) ? (arr_5 [i_7 - 1] [i_7 - 1]) : (arr_14 [i_7 - 1] [i_7] [i_7] [i_7] [i_7]))))));
        arr_23 [i_7] = ((/* implicit */int) (short)-6086);
    }
}

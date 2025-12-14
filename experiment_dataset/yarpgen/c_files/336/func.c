/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/336
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
    var_18 = var_5;
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((((/* implicit */int) (short)0)), (-2070702151)));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (short)0))));
                        var_22 = ((/* implicit */unsigned char) 2032975123U);
                        var_23 = ((((/* implicit */_Bool) -1)) ? (var_7) : (arr_3 [i_0] [i_1]));
                    }
                    for (short i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4] [i_4] [i_4 + 1])) ? (arr_10 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1]) : (arr_10 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2])));
                            arr_13 [0LL] [i_4 + 1] = ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_2] [i_5]))) ? (((/* implicit */int) (short)-1)) : (arr_11 [i_0] [i_1] [i_4 - 1] [i_1] [i_1]));
                            var_25 |= ((/* implicit */signed char) ((((var_7) + (2147483647))) << (((((arr_6 [i_0] [i_0] [i_4 + 2] [i_4 + 2]) + (3466399075108989689LL))) - (14LL)))));
                            arr_14 [i_2] [i_1] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)120);
                        }
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((_Bool) arr_8 [i_0] [(signed char)8] [(signed char)8] [i_4] [i_0])))));
                        arr_15 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4 + 2])) && (((/* implicit */_Bool) ((signed char) (short)1))))))));
                        var_27 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 4; i_7 < 13; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((int) arr_8 [i_0] [i_1] [i_7] [i_7 + 1] [i_1])))));
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7] [i_7 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7 - 1]))));
                        }
                        arr_21 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_6] [i_1])))) || (((/* implicit */_Bool) ((var_12) << (((arr_7 [i_0] [13LL] [i_1] [13LL] [i_6] [i_6]) - (12051543769634077608ULL))))))));
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206643
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
    var_17 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (3178835438U) : (((/* implicit */unsigned int) ((/* implicit */int) ((3756997640076101357LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_18 += ((/* implicit */unsigned short) 5717486201964293579LL);
                            arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]);
                            var_19 &= ((/* implicit */int) (+(21ULL)));
                        }
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) -3756997640076101358LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (1643082426760959911ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (676267849))))));
                        arr_15 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [(unsigned char)1] [i_1] [i_0] [i_1] [i_1 + 4] [i_1]))));
                    }
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */unsigned char) 1U);
                            arr_23 [i_6] [i_0] [i_2] [i_2] [i_1] [i_0] [(signed char)11] = ((((/* implicit */_Bool) -1726913817607723525LL)) ? ((+(7175053676728603358LL))) : (((/* implicit */long long int) arr_17 [i_0])));
                            arr_24 [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5] [i_1 + 1] [i_2])) > ((~(((/* implicit */int) arr_8 [i_1] [(signed char)7] [(signed char)7]))))));
                            arr_25 [i_0] [(unsigned char)2] [i_2 - 1] [i_0] [i_6] [i_1 + 2] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1116131858U) * (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 + 1] [i_2] [i_5] [i_1 + 1] [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (var_13) : (4294967283U)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_5] [i_0] [i_7] &= ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) arr_0 [i_5] [i_2 - 1])));
                            var_21 = 3756997640076101357LL;
                        }
                        arr_30 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) var_7)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_0] [i_8] [i_0] [(_Bool)1]));
                        arr_35 [(unsigned short)6] [i_1] [i_2] [i_0] [8U] = ((/* implicit */unsigned int) var_1);
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1066022466)) != (var_6)));
                        arr_40 [i_0] [i_0] [i_1 + 4] [6U] [i_0] [10LL] |= ((/* implicit */unsigned char) ((unsigned int) ((1116131862U) << (((3756997640076101357LL) - (3756997640076101335LL))))));
                        var_24 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4159731978U)))))));
                        var_25 &= arr_28 [(unsigned short)4] [(unsigned short)4] [i_1] [i_2] [(unsigned short)4] [0U] [i_9];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_48 [i_0 - 1] [i_2 + 1] [i_0] [i_11] = ((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))) % (15471607802570421783ULL));
                                arr_49 [i_0] [i_1 + 4] [i_0] [i_10] [i_11] = ((/* implicit */signed char) ((long long int) ((arr_0 [i_0] [i_1]) & (((/* implicit */int) arr_27 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) var_15);
}

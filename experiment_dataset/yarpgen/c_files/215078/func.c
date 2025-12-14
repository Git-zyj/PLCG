/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215078
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_4 [18U] [i_1 - 1] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), (((unsigned long long int) var_7))));
            arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (-5570478508877616015LL) : (((/* implicit */long long int) ((((((/* implicit */int) var_6)) % (((/* implicit */int) var_13)))) / (((arr_3 [i_0] [i_0] [(signed char)3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)48076))))))));
            arr_6 [i_0] [16ULL] [i_0] = ((/* implicit */int) 3463076019U);
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 8917279040304760219LL);
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (var_5)))) ? (((/* implicit */int) arr_13 [i_3] [i_0] [i_3 - 1] [i_0] [i_3 - 1])) : (((int) var_10))));
                        var_16 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55091))));
                    }
                    arr_18 [i_0] [i_0] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) var_10);
                    var_17 |= ((/* implicit */unsigned short) var_10);
                }
                for (int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                    var_19 = var_14;
                    arr_21 [i_0] [i_0] [i_3 + 1] [i_0] [i_2] [i_0] = -5570478508877616009LL;
                    var_20 += ((/* implicit */signed char) (+((+(((/* implicit */int) var_3))))));
                }
                for (int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] [(short)10] [(short)10] [i_0] |= ((/* implicit */int) ((long long int) ((unsigned short) arr_22 [i_0 + 1] [i_0 + 1] [i_2] [10ULL] [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                        var_21 *= (+(((/* implicit */int) (signed char)-16)));
                        var_22 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_7] [i_2 - 1] [i_0 + 1])));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3236329094U)));
                    }
                    arr_29 [i_7] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (((~(var_11))) > ((-(((/* implicit */int) arr_14 [i_3] [i_7]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_2] [i_3] [i_0] [i_9 - 1] = var_6;
                        arr_33 [i_0] [(_Bool)1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (signed char)14);
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (3463076019U)))));
                        var_25 = ((/* implicit */signed char) 3463076019U);
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_2 + 1] [i_0]))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)19327)) ? (7063896746755501548LL) : (5570478508877615993LL))) : (((/* implicit */long long int) (~(2000996723))))));
                        var_28 |= (~(((/* implicit */int) (_Bool)0)));
                    }
                    arr_38 [i_0] [(_Bool)1] [i_2] [(unsigned short)19] [i_0] [i_0 + 1] = ((/* implicit */short) arr_7 [i_3 + 1] [i_2 + 1] [i_2]);
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                var_29 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 3831475608556899057LL)) ? (var_11) : (((/* implicit */int) (_Bool)1))))));
                var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_0] [i_0 + 1] [i_2 - 1] [i_2 - 1] [(signed char)7]))));
            }
            arr_42 [17LL] [i_0] [i_0] = ((/* implicit */long long int) var_14);
            var_31 = (!(((/* implicit */_Bool) (unsigned short)46078)));
            arr_43 [i_0] [i_0] = ((/* implicit */_Bool) (-((~(var_5)))));
        }
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_9))));
        arr_44 [i_0] = ((/* implicit */short) arr_9 [i_0]);
        arr_45 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
    }
    var_33 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-1)), (min((((/* implicit */int) ((_Bool) 9223372036854775807LL))), (((int) var_12))))));
}

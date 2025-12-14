/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190130
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
    var_15 = ((/* implicit */short) ((((var_9) << (((var_2) - (823965535124271221LL))))) - (min((min((((/* implicit */unsigned int) var_6)), (var_11))), (var_9)))));
    var_16 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((long long int) arr_1 [(unsigned short)2])) >> (((/* implicit */int) min((arr_2 [i_1 - 1]), (((/* implicit */unsigned short) max(((_Bool)1), (var_1))))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min(((_Bool)0), (((_Bool) arr_0 [(short)12] [i_0]))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [(unsigned short)16] [i_2]) & (arr_7 [i_0] [i_3] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_15 [(unsigned short)14] [0LL] [i_2] [i_2] &= ((/* implicit */short) (unsigned short)37942);
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_5 [i_1] [14U])));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_20 *= arr_5 [(unsigned short)6] [i_5];
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) << (((((/* implicit */int) (unsigned short)27568)) - (27546)))));
                        var_22 = ((/* implicit */long long int) min((((/* implicit */int) (!(((((/* implicit */int) var_6)) < (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0])))))) ? (((/* implicit */int) ((_Bool) (unsigned short)37968))) : (((/* implicit */int) ((short) 3436676833U)))))));
                    }
                    for (int i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        arr_22 [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned short) ((_Bool) (~(arr_11 [i_6 + 1]))));
                        var_23 |= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [(short)14] [(short)14] [i_2]))))), (((arr_21 [i_6] [i_1 - 1]) << (((var_13) - (34347839U))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)37951)) * (((/* implicit */int) arr_2 [11U])))) < (((/* implicit */int) var_6)))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((signed char) arr_7 [i_1] [13] [i_2] [i_0]));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((var_7) & (var_7))))))));
                        arr_27 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37931)) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) (~(arr_25 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_27 |= ((/* implicit */_Bool) ((unsigned int) arr_29 [i_1 - 1] [i_1] [i_1] [i_1 - 1]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_28 = var_10;
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_34 [i_0] [i_1] [(unsigned short)14] [i_8] [i_9]))));
                            var_30 = 9526496419677852031ULL;
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1 - 1]))) ^ (var_13)));
                            arr_39 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37944)) - (((/* implicit */int) (unsigned short)37931))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0] [i_8])) ? (((/* implicit */int) arr_18 [i_0] [i_2] [i_8] [i_0])) : (((/* implicit */int) var_0)))))));
                            arr_40 [i_0] [i_1] [11ULL] [i_0] [i_10] = ((/* implicit */unsigned int) arr_2 [i_0]);
                        }
                    }
                }
                arr_41 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)27568)), (arr_29 [i_0] [i_1] [i_1] [i_1])));
            }
        } 
    } 
}

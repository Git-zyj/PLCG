/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25196
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
    var_18 += ((/* implicit */unsigned short) var_14);
    var_19 = -3126181869820589192LL;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((var_15) << (((((arr_8 [i_2]) + (345440391600383215LL))) - (42LL))))), (arr_8 [i_0]))))));
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -137513661122249381LL))))), (min((((/* implicit */long long int) arr_2 [i_0] [i_2])), (max((((/* implicit */long long int) (_Bool)1)), (3586684727449182668LL)))))));
                    var_22 = ((/* implicit */unsigned short) min((((arr_9 [i_0 - 1] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_2])) : (((/* implicit */int) (unsigned short)65529)))), (((/* implicit */int) arr_1 [i_2]))));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 2]))));
                    var_24 = ((/* implicit */long long int) arr_10 [i_0] [i_0 + 1] [i_0 - 2]);
                    var_25 &= arr_2 [i_1] [i_1];
                    var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((long long int) -8049375784647948417LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18068)))))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) (unsigned short)13426)) ? (arr_14 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
                    var_28 = arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 2];
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_30 |= ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
                        var_31 |= ((/* implicit */long long int) (unsigned short)16852);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [10LL])) : (((/* implicit */int) (unsigned short)65535))));
                        arr_17 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13426)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2]))))) - (((((/* implicit */_Bool) arr_12 [(unsigned short)9] [i_1] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18068)))))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_21 [i_7] [i_7] [i_7] [i_7 + 3] [i_7 - 1] [i_7 + 2]))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [(unsigned short)4]))) : (var_13)));
                        }
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_6] [i_4] [i_4] [i_8] = (~(((((/* implicit */_Bool) (unsigned short)13426)) ? (arr_14 [i_8] [i_4] [i_4] [i_0]) : (arr_20 [i_0]))));
                            var_36 *= ((/* implicit */unsigned short) arr_9 [i_8 + 1] [i_0] [i_0]);
                            var_37 *= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8])) <= (((/* implicit */int) ((unsigned short) var_9)))));
                            var_38 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_8] [i_8 + 1] [i_0]))));
                            var_39 = ((/* implicit */_Bool) var_6);
                        }
                        arr_27 [i_0 + 1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16555)) - (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_40 = 63LL;
                            var_41 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29315))) > (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_42 = ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_0 - 2])) ? (arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (-2595526645961674116LL));
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) (unsigned short)28902))));
                            var_44 = ((/* implicit */_Bool) (unsigned short)38834);
                            var_45 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_6)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_4] = ((unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)27547))));
                            var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                        }
                        var_47 = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2]))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned short) var_5);
                        var_49 = ((/* implicit */long long int) ((_Bool) var_14));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_12 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (arr_8 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51988)) & (((/* implicit */int) (unsigned short)39068)))))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_51 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_0] [i_1] [i_0] [i_4] [i_1] [i_13]))));
                        var_52 ^= arr_7 [i_0] [i_1] [i_13];
                        var_53 = ((/* implicit */long long int) var_12);
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_54 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)13353))));
                            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_0 - 1])) ? ((~(((/* implicit */int) arr_5 [i_0 - 2] [i_14])))) : ((-(((/* implicit */int) (unsigned short)27541)))))))));
                            var_56 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37988))) + ((-(arr_14 [i_0] [i_1] [i_4] [i_13]))));
                            var_57 ^= arr_42 [i_13] [i_1] [i_4] [i_13] [i_1];
                        }
                    }
                }
                var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [(unsigned short)8] [i_1] [i_1] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_0 - 2] [i_1] [i_0] [i_1]))) & (arr_31 [(unsigned short)18] [i_0 + 1] [i_1] [i_1] [i_1] [i_0 + 1] [i_0 - 2]))) : (min((((/* implicit */long long int) arr_36 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_1])), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-2595526645961674114LL)))))));
            }
        } 
    } 
}

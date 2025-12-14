/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210235
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
    var_19 &= ((/* implicit */unsigned int) max((-2244621597442390520LL), (((/* implicit */long long int) 3393874200U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((unsigned short) -3673687690870934682LL));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_11 [i_0] [i_0] [11LL] [i_3 + 1] [i_0] [i_0])), (-3673687690870934692LL))) & (((/* implicit */long long int) max((528482304U), (((/* implicit */unsigned int) arr_11 [i_0] [(unsigned short)11] [(_Bool)1] [i_3 + 2] [i_3 + 2] [i_2]))))))))));
                            arr_13 [i_0] [i_0] [(unsigned short)12] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned short) -3673687690870934692LL);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_4] [i_1] [i_5] = ((/* implicit */_Bool) 3766484989U);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_5] [i_0] [(unsigned short)15] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? (var_9) : (9223372036854775807LL)));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_8 [i_6])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_0] [i_5])))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_14)) << (((/* implicit */int) (_Bool)1))))))));
                            arr_26 [i_0] [i_1] [i_4] [(unsigned short)11] [i_0] = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_4] [(unsigned short)9] [i_7]);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [i_4] [i_7]))) ^ (6673910295521292628LL))))));
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == ((-(((/* implicit */int) arr_25 [3LL] [i_1] [16U] [i_5] [i_7]))))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_33 [i_0] [5LL] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -8461300202698815751LL)) || (((/* implicit */_Bool) arr_27 [i_9] [i_9])));
                            var_25 = ((/* implicit */unsigned int) (((_Bool)1) ? (((3673687690870934691LL) >> (((3766484987U) - (3766484926U))))) : (((/* implicit */long long int) (-(458660921U))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [(unsigned short)9] [i_4] [i_8] [i_9]))) == (2911172140U))))));
                            var_27 = ((/* implicit */unsigned int) (((_Bool)1) ? (var_5) : (-3LL)));
                        }
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_1] [i_8] [i_8] [i_8]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [(unsigned short)15])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_27 [i_4] [i_1]))));
                            var_30 = ((/* implicit */long long int) min((var_30), ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (arr_29 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                        }
                        for (long long int i_11 = 2; i_11 < 18; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((unsigned int) ((var_8) ^ (var_8))));
                            var_32 = ((/* implicit */unsigned int) ((-9223372036854775807LL) % (((-3673687690870934677LL) % (1018001154477160683LL)))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((((((/* implicit */_Bool) 0U)) ? (arr_20 [i_8]) : (((/* implicit */long long int) var_10)))) >> (((/* implicit */int) (!(var_14))))))));
                            var_34 = ((/* implicit */_Bool) (-(arr_32 [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11 - 2])));
                            var_35 = ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
                        }
                        arr_40 [(_Bool)1] [i_0] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_4])) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [8LL])) : (arr_20 [i_0])));
                    }
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)39981))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (-(arr_36 [i_0] [18U] [(_Bool)1] [i_0]))))));
                        arr_44 [i_0] [i_1] [i_0] = arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [i_0];
                        arr_45 [i_0] [i_0] [i_12] [i_0] &= ((/* implicit */_Bool) ((unsigned int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_4] [i_4] [6U]))))));
                    }
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) & (((((/* implicit */_Bool) var_12)) ? (1728890847U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46336)))))));
                }
            }
        } 
    } 
    var_39 *= ((/* implicit */_Bool) min((min((((((/* implicit */long long int) 1366433793U)) / (var_11))), (((((/* implicit */_Bool) var_4)) ? (3673687690870934675LL) : (var_4))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (((((/* implicit */_Bool) var_12)) ? (-3673687690870934688LL) : (((/* implicit */long long int) var_6)))))))));
    /* LoopSeq 1 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_40 += ((/* implicit */unsigned short) arr_47 [1U]);
        arr_49 [i_13] [i_13] = ((/* implicit */long long int) (+((+(((/* implicit */int) ((_Bool) arr_46 [i_13])))))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                arr_54 [i_14] [(unsigned short)6] |= ((/* implicit */long long int) var_3);
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 10; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            arr_59 [i_14] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) var_12);
                            var_41 += max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_14] [i_14] [(unsigned short)17] [i_17])) ? (((/* implicit */long long int) var_12)) : (arr_41 [12U] [i_15] [i_15] [i_15])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_14] [i_15] [i_14]) : (1398776222U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_16] [i_16 + 1] [i_16] [6U] [i_16 - 1] [i_17])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_14] [(unsigned short)17]))) : (((((/* implicit */_Bool) -3673687690870934690LL)) ? (65024LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

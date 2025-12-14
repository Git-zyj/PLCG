/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224811
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        var_19 += ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) && (max((arr_2 [i_0] [(_Bool)1]), ((_Bool)1))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((2553059072977756463ULL), (arr_0 [16ULL] [i_0]))), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) && (arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = min((arr_3 [i_1]), (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (var_9) : (arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [11ULL]))))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((var_13) && (((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (20ULL))))))));
                            var_22 = ((unsigned long long int) (-(arr_14 [i_2] [i_3] [i_4] [i_5])));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_6] [i_1] [i_1] [i_6 + 3] [i_6] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (var_1))))))), ((-(((/* implicit */int) (_Bool)1))))));
                            arr_22 [i_1] [(_Bool)1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_6 + 2] [3ULL] [i_6 - 2] [3ULL] [i_6 - 2])), (((arr_13 [i_6] [i_4] [i_3] [i_2] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (arr_19 [i_4]) : (((unsigned long long int) arr_11 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 3])));
                            var_23 = ((/* implicit */_Bool) (+(max((arr_8 [(_Bool)1] [i_2] [i_3]), (((unsigned long long int) var_9))))));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_6] = max((arr_16 [i_6] [i_4] [i_4] [i_3] [i_2] [i_1]), (((_Bool) (_Bool)1)));
                        }
                        var_24 = 14188650419850469792ULL;
                    }
                } 
            } 
            arr_24 [i_2] |= 18446744073709551609ULL;
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((arr_14 [i_7] [i_7] [i_7] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7]))))))));
            var_25 = ((((/* implicit */_Bool) 13393647139627785063ULL)) || (((/* implicit */_Bool) 2574140121462334168ULL)));
        }
        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            arr_31 [i_1] = ((max((2199600684255745527ULL), (2011848178438641004ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_8] [i_1]))))));
            var_26 = max((arr_1 [i_8 - 2] [i_8 - 2]), (((unsigned long long int) arr_1 [i_8 - 1] [i_8 - 2])));
        }
        arr_32 [i_1] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 2548579639349730168ULL))), (((var_12) ? (arr_8 [6ULL] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_40 [i_10] [i_10] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (min((2011848178438641007ULL), (arr_1 [i_1] [i_9])))))) && (min(((_Bool)0), ((_Bool)1)))));
                    arr_41 [i_10] [i_9] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_1] [i_9] [i_10] [i_10] [i_1] [(_Bool)1]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_27 = ((/* implicit */_Bool) min((var_11), (((((var_3) ? (arr_0 [i_11] [i_11]) : (var_0))) ^ ((-(arr_44 [i_11] [i_11])))))));
        arr_45 [i_11] [i_11] = ((/* implicit */_Bool) (-(max((arr_44 [i_11] [i_11]), (((/* implicit */unsigned long long int) var_14))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            arr_58 [i_16] [(_Bool)1] [i_14] [i_13] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_18 [i_12] [i_12] [i_14] [i_15] [i_16]);
                            var_28 += ((/* implicit */_Bool) max((((unsigned long long int) arr_25 [i_16])), (((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_12])))));
                            var_29 = ((/* implicit */_Bool) (((~(var_16))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)))) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                        {
                            arr_62 [i_12] [i_12] [i_17] [i_15] [i_17] = ((/* implicit */unsigned long long int) min((((arr_56 [i_17] [i_17] [i_15] [i_14] [i_13] [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_56 [i_12] [i_12] [(_Bool)1] [i_12] [3ULL] [i_12])))), (((((/* implicit */int) arr_56 [i_12] [i_12] [i_13] [i_12] [i_15] [i_12])) + (((/* implicit */int) arr_56 [i_17] [i_15] [i_14] [i_12] [i_12] [i_12]))))));
                            var_30 |= ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */_Bool) var_1)) && (arr_39 [i_12] [i_13]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_17] [i_15] [i_14] [(_Bool)1] [i_12])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_8 [4ULL] [i_13] [i_12]))))))));
                            arr_63 [i_17] [i_13] [i_13] [i_13] [i_14] [i_15] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) * (var_1)))) ? (((/* implicit */int) max((var_15), ((_Bool)0)))) : (((/* implicit */int) (_Bool)1))))) ? (((arr_30 [i_13] [i_15] [1ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (18151859746403252557ULL)))));
                            arr_64 [i_12] [(_Bool)1] [i_14] [i_14] [i_17] = ((/* implicit */_Bool) (-(20ULL)));
                        }
                        arr_65 [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_51 [i_15])))));
                        arr_66 [i_13] [i_13] = arr_42 [i_15];
                        var_31 = ((/* implicit */_Bool) (+(max((arr_60 [0ULL] [0ULL] [i_12]), (max((16434895895270910608ULL), (18446744073709551615ULL)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_72 [2ULL] [i_18] [i_12] = ((/* implicit */_Bool) max((5912420427114622381ULL), (16434895895270910611ULL)));
                    arr_73 [i_18] [i_19] = ((/* implicit */_Bool) (+(arr_61 [i_19] [(_Bool)0] [(_Bool)0] [i_18] [(_Bool)0] [i_12] [i_12])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                {
                    var_32 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_12] [i_20] [i_21] [i_12] [i_21])))) ? (((/* implicit */int) arr_42 [i_12])) : (((/* implicit */int) min((((_Bool) arr_51 [i_12])), ((_Bool)1))))));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-(min((5809381502004517006ULL), (arr_44 [1ULL] [i_21]))))))));
                    arr_78 [4ULL] [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) / (max((18446744073709551614ULL), (4620217577255533717ULL)))))));
                    var_34 &= ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_56 [i_12] [i_20] [i_21] [(_Bool)1] [(_Bool)1] [i_12]), (arr_55 [i_12] [(_Bool)1] [i_12] [i_20] [i_20])))) ^ (((/* implicit */int) ((arr_28 [i_21]) || (((/* implicit */_Bool) arr_68 [i_20] [i_12])))))))) || (((/* implicit */_Bool) (((!(var_14))) ? (arr_34 [15ULL] [15ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2305842459457880064ULL)) && ((_Bool)1)))))))));
                    arr_79 [i_12] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_19 [i_20])))))) ? (min((((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (var_17) : (1ULL))), ((((_Bool)1) ? (12386171815896519343ULL) : (4620217577255533717ULL))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12] [i_12]))) <= (arr_26 [i_21]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_21] [i_20] [(_Bool)1] [i_12]))) : ((+(var_11))))));
                }
            } 
        } 
        var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_56 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_43 [i_12]))))), (max((var_0), (var_11))))))));
    }
    var_36 = ((/* implicit */_Bool) var_16);
}

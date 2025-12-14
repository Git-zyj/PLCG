/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227105
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
    var_19 |= ((/* implicit */unsigned int) ((var_0) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))));
        var_21 += (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-110))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_2 [i_1]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_3])) : ((-2147483647 - 1)))), (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0])))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((var_15) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (arr_0 [i_0])));
                        var_24 *= ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        var_25 = ((/* implicit */int) min((var_25), (max(((~(((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0] [i_1])), (arr_6 [i_0] [i_1] [i_3])))))), (((/* implicit */int) ((((int) arr_8 [i_0] [i_0] [i_0] [(signed char)10])) == (((/* implicit */int) min((arr_3 [i_0] [i_0]), (var_5)))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */int) (((!(((/* implicit */_Bool) ((var_6) % (((/* implicit */long long int) var_18))))))) ? (((((/* implicit */_Bool) arr_14 [i_7] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (min((var_15), (((/* implicit */unsigned int) (unsigned char)3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_21 [i_0] [i_4] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */unsigned int) var_4))))) : (((/* implicit */int) ((unsigned char) var_11))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)112))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4194048U)) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_0] [i_4] [i_0])))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_0))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    {
                        arr_36 [i_8] [i_8] [i_10] [i_11] = (~(((int) arr_30 [i_10])));
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            arr_40 [i_12] [i_10] [i_9] = ((signed char) max((min((((/* implicit */unsigned long long int) (signed char)-52)), (var_12))), (((/* implicit */unsigned long long int) ((arr_30 [i_9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            arr_41 [i_8] [i_9] [i_10] [i_10] [i_11] [i_10] |= ((/* implicit */unsigned char) (-2147483647 - 1));
                            var_28 *= ((/* implicit */unsigned int) var_7);
                            arr_42 [i_8] [i_9] [i_10] [20U] = ((/* implicit */unsigned char) ((unsigned int) arr_29 [i_9]));
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
                        {
                            arr_45 [i_8] [i_8] [i_8] [i_8] [i_8] = arr_32 [i_9] [i_10] [i_11];
                            arr_46 [i_8] [i_8] [i_9] [i_10] [i_11] [15] [i_13] &= ((/* implicit */signed char) 2147483647);
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_8] [i_10] [i_9] [i_8])) << (((/* implicit */int) arr_48 [i_8] [i_9] [i_11] [i_8])))))));
                            arr_49 [i_14] [i_11] [i_10] [i_9] [i_9] [i_14] = ((/* implicit */signed char) 1144814107);
                            arr_50 [i_8] [i_8] [i_8] [i_11] |= ((/* implicit */unsigned char) ((int) (-(arr_28 [i_8] [i_8]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (signed char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_15] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_15]))));
                        var_30 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)8))));
                        arr_60 [i_18] [i_16] |= ((/* implicit */signed char) ((int) arr_20 [i_17] [i_15] [i_17] [i_16] [i_16] [i_15] [i_15]));
                        arr_61 [i_15] [i_15] [i_15] [i_18] = ((/* implicit */int) (signed char)64);
                    }
                } 
            } 
        } 
        var_31 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_15))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_15] [i_15])) ? (((/* implicit */int) (signed char)18)) : (2147483647))))));
        var_32 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_14) : (var_6))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-49)) > (((/* implicit */int) arr_26 [i_15]))))))));
        var_33 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_15)) : (var_3)))));
    }
    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
    {
        arr_65 [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
        var_34 &= ((/* implicit */int) min((((unsigned char) -2147483642)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)168))))))))));
        /* LoopSeq 2 */
        for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                var_35 = ((/* implicit */signed char) ((2548534612720114003ULL) | (((/* implicit */unsigned long long int) ((arr_69 [i_21] [i_20] [i_19]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                arr_71 [i_19] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_66 [i_19])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_21] [i_20] [i_20] [i_19]))))), (((/* implicit */unsigned int) (-2147483647 - 1))))) > (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_19] [i_19])) ? (((/* implicit */int) arr_0 [i_19])) : (((/* implicit */int) arr_51 [i_20])))), (arr_64 [i_19]))))));
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((int) ((min((((/* implicit */unsigned int) var_0)), (var_15))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))))))));
                arr_72 [6] [i_19] [i_21] = ((/* implicit */int) arr_69 [i_21] [i_20] [i_19]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((((arr_33 [i_20] [11] [i_22]) >= (((/* implicit */int) arr_7 [i_19])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_19] [i_19])))))));
                    var_38 ^= ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_18 [i_19] [i_20] [i_20] [i_19] [i_22])))) + (2147483647))) << (((((((/* implicit */_Bool) 6170462423622567606ULL)) ? (var_14) : (((/* implicit */long long int) var_18)))) - (7419183173701635470LL)))));
                    var_39 += ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -2147483635)) || ((_Bool)1))));
                    var_40 -= ((/* implicit */unsigned char) arr_7 [i_19]);
                    arr_75 [i_21] [i_21] [i_20] [i_21] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
                for (signed char i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    arr_78 [(signed char)5] [i_19] [(signed char)5] [i_21] [i_23] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((int) arr_28 [i_19] [i_19]))) ? (((/* implicit */int) ((var_15) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_19])))))) : ((~(var_4))))), (((/* implicit */int) ((signed char) (-(var_6)))))));
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(16095278922783426665ULL))))));
                        var_42 += ((/* implicit */unsigned long long int) 8483646683492796570LL);
                    }
                    for (int i_25 = 0; i_25 < 10; i_25 += 3) /* same iter space */
                    {
                        arr_83 [i_25] [i_23] [i_21] [i_19] [i_20] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) <= (((unsigned int) ((((/* implicit */_Bool) (signed char)111)) ? (var_6) : (((/* implicit */long long int) var_15)))))));
                        var_43 += ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_19] [i_20] [i_23] [i_25]) != (((/* implicit */unsigned long long int) arr_33 [i_25] [i_19] [i_21])))))) > (var_17))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_19] [i_19])) <= (((/* implicit */int) arr_80 [i_20] [i_21])))))) : (var_9));
                        arr_84 [i_20] &= (-(((((/* implicit */_Bool) (~(arr_8 [i_19] [i_19] [i_19] [i_19])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [(signed char)12] [i_20])) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_16)) ? (arr_29 [i_19]) : (((/* implicit */unsigned long long int) var_11)))))));
                    }
                    var_44 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(var_11)))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */_Bool) -33211032027411049LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_19]))) : (arr_56 [i_23] [i_19]))) : (((/* implicit */long long int) ((unsigned int) 2030387372)))))));
                    arr_85 [i_19] [i_19] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_8 [i_19] [i_20] [i_21] [i_23]))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_20 [i_19] [i_19] [(unsigned char)14] [i_19] [i_19] [i_19] [i_19])), (var_14)))))));
                }
            }
            for (signed char i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                var_45 *= ((/* implicit */unsigned int) ((var_3) == (var_12)));
                var_46 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-1220059317) : (((/* implicit */int) arr_31 [i_19] [i_19] [(unsigned char)8] [i_26]))))) != (((((/* implicit */_Bool) arr_79 [i_19] [i_20] [3] [i_26])) ? (var_12) : (((/* implicit */unsigned long long int) arr_35 [i_26]))))))), (var_11)));
                var_47 = ((/* implicit */unsigned long long int) arr_63 [i_26]);
            }
            for (signed char i_27 = 0; i_27 < 10; i_27 += 1) 
            {
                arr_92 [i_20] [i_20] [i_20] &= ((/* implicit */long long int) min((((unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((/* implicit */unsigned long long int) ((var_18) & (((/* implicit */int) arr_3 [i_20] [i_27])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    for (signed char i_29 = 0; i_29 < 10; i_29 += 4) 
                    {
                        {
                            var_48 -= ((/* implicit */unsigned int) min(((+(arr_87 [i_20] [i_28] [i_19] [i_20]))), (((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_79 [i_19] [i_28] [i_28] [i_28])) - (61)))))));
                            var_49 = ((/* implicit */int) ((signed char) (((!(((/* implicit */_Bool) arr_81 [i_27] [i_27] [i_27] [i_27])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (arr_67 [i_19] [i_29]))));
                            var_50 *= ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_43 [i_27] [i_20] [i_20] [i_20] [i_29] [i_19]), (arr_91 [i_19] [i_20] [i_20] [i_19]))))));
                            arr_97 [i_29] [i_27] [4ULL] [i_29] |= ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            }
            arr_98 [i_19] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [(_Bool)1] [(_Bool)1] [i_20] [i_20])) & (((/* implicit */int) ((unsigned char) var_15)))))) ? (arr_95 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (arr_64 [i_20]) : (((/* implicit */int) var_5))))))));
            /* LoopNest 2 */
            for (unsigned char i_30 = 0; i_30 < 10; i_30 += 1) 
            {
                for (signed char i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    {
                        arr_105 [i_19] [i_19] [i_31] [i_31] [i_19] = ((/* implicit */signed char) arr_82 [i_19] [i_19] [i_19] [i_19] [i_19]);
                        var_51 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) arr_30 [i_19]))), ((~(var_17)))));
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((signed char) var_1)))))))));
                        var_53 = ((/* implicit */unsigned int) (signed char)64);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_32 = 0; i_32 < 10; i_32 += 1) 
        {
            arr_108 [i_19] = ((/* implicit */long long int) arr_101 [i_19] [i_32]);
            var_54 &= ((/* implicit */signed char) ((8321367603164127024ULL) / (var_3)));
            /* LoopNest 2 */
            for (signed char i_33 = 0; i_33 < 10; i_33 += 1) 
            {
                for (signed char i_34 = 0; i_34 < 10; i_34 += 4) 
                {
                    {
                        arr_114 [i_19] [i_32] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_34] [i_32] [i_34] [i_34])) ? (((/* implicit */int) arr_31 [(signed char)12] [i_33] [i_32] [i_19])) : ((-2147483647 - 1))))) - (((-1206262787834271323LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))));
                        arr_115 [i_32] [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(var_18)))) >= (((((/* implicit */_Bool) (unsigned char)53)) ? (var_6) : (((/* implicit */long long int) var_4))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned char) var_9);
            /* LoopNest 3 */
            for (signed char i_35 = 0; i_35 < 10; i_35 += 4) 
            {
                for (unsigned char i_36 = 0; i_36 < 10; i_36 += 2) 
                {
                    for (unsigned char i_37 = 0; i_37 < 10; i_37 += 1) 
                    {
                        {
                            var_56 += ((/* implicit */unsigned long long int) ((1525626263U) / (var_15)));
                            arr_123 [i_35] [i_32] [i_19] [i_36] [i_32] = ((var_0) ? (((int) arr_14 [i_19] [i_19] [i_19])) : ((+(((/* implicit */int) arr_44 [i_37] [i_37] [i_37] [i_37] [i_37])))));
                            arr_124 [i_19] [i_19] [i_35] = ((/* implicit */unsigned char) ((((int) arr_68 [i_19] [i_32] [0] [i_19])) / (((/* implicit */int) var_16))));
                        }
                    } 
                } 
            } 
        }
        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_24 [i_19]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_19] [1])) ? (((/* implicit */int) arr_37 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_62 [i_19] [i_19]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_24 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_19] [i_19])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            arr_128 [i_38] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) -2147483647)) ? (var_3) : (((/* implicit */unsigned long long int) arr_127 [i_19] [i_38]))));
            /* LoopNest 2 */
            for (unsigned int i_39 = 0; i_39 < 10; i_39 += 4) 
            {
                for (int i_40 = 0; i_40 < 10; i_40 += 3) 
                {
                    {
                        arr_133 [i_19] [i_19] [i_38] [i_39] [i_19] [i_40] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        var_58 = ((/* implicit */unsigned char) (-(-2147483644)));
                    }
                } 
            } 
        }
    }
}

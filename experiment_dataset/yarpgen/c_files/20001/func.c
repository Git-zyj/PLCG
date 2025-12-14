/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20001
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_10 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (arr_1 [(signed char)0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) -6650106835008451444LL)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (4226270038U)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(-2147483637)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0]))))) : (max((((((/* implicit */_Bool) var_7)) ? (757867820U) : (var_4))), ((-(var_7)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_12 ^= ((/* implicit */unsigned int) -6650106835008451444LL);
                var_13 = ((/* implicit */long long int) ((3235363035U) + (3167168984U)));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_14 = ((unsigned int) max((((/* implicit */int) arr_7 [i_0 - 4] [i_0])), (2147483636)));
                var_15 ^= (~(arr_5 [i_1 - 2] [i_1 + 1] [i_0 - 2]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned int) (+(((((((/* implicit */long long int) var_3)) + (var_5))) & (((var_5) - (-6650106835008451444LL)))))));
                            var_17 += min(((+(2895422246752129697LL))), (((/* implicit */long long int) 2130706432)));
                            arr_15 [(signed char)2] [i_4] [i_0 + 1] [i_0 + 1] [(signed char)2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_4 - 1] [i_3] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_14 [i_5] [i_4 + 1] [i_5] [i_4] [i_0 - 3])) : (((/* implicit */int) arr_14 [i_0] [i_4 - 1] [i_5] [i_5] [i_0 - 1]))))) ? (((/* implicit */long long int) (-(-2147483637)))) : (min((((/* implicit */long long int) 4294967295U)), (2895422246752129707LL)))));
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_4 + 1] [i_0])) < (2147483637))) || (((/* implicit */_Bool) arr_10 [i_0] [i_0]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max(((+(1421657225U))), (131472547U)));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    arr_20 [i_0] [i_1 - 3] [i_0] [i_0] = (+(arr_1 [i_0]));
                    arr_21 [i_0] [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 4] = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) arr_9 [(signed char)8])))));
                    arr_22 [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)18))))));
                }
                var_21 = ((/* implicit */int) max((var_21), (((((var_3) >> (((-2147483637) + (2147483643))))) * (((int) (signed char)7))))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    arr_28 [i_0] [i_0] [i_8] [i_1 + 1] = ((/* implicit */signed char) 1248469135U);
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -8342749337406477493LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_8] [i_8] [i_1 - 1] [i_1] [i_0])) ? (1009280964U) : (((/* implicit */unsigned int) 1430853208))))) : (((((/* implicit */_Bool) 2895422246752129675LL)) ? (2895422246752129681LL) : (6217624120225506445LL)))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) - (1329226712U))))));
                        var_24 ^= ((/* implicit */long long int) ((((arr_17 [i_8] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_8] [i_0] [i_1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        arr_33 [i_11] [i_11] [i_11] [i_0] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) == (5094016924180009471LL)));
                        var_25 += ((((unsigned int) arr_9 [0LL])) * ((-(2936979535U))));
                    }
                    var_26 *= ((arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((+(2147483637)))));
                    var_27 -= ((/* implicit */signed char) ((((3718707867572950597LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) ? (((arr_19 [i_0] [i_1] [i_8] [i_9]) | (((/* implicit */long long int) arr_17 [i_0] [i_0 + 1])))) : (((/* implicit */long long int) arr_31 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 2] [i_1 + 1]))));
                }
                for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 3; i_13 < 8; i_13 += 3) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */signed char) arr_11 [i_13 + 2] [i_13 + 2] [(signed char)2] [(signed char)2] [i_13]);
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((long long int) arr_4 [i_0 - 3] [i_13 + 3])))));
                        var_30 = ((/* implicit */int) (~(arr_10 [i_1 - 2] [i_0])));
                    }
                    for (unsigned int i_14 = 3; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        var_31 &= ((/* implicit */int) 4198289598U);
                        var_32 = ((((/* implicit */_Bool) arr_16 [i_14] [i_14] [i_14] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (0U));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 - 4] [i_0] [i_0 - 3] [i_0 - 2]))));
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_12] [i_12] = 134217472U;
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_34 *= var_0;
                        var_35 = ((/* implicit */signed char) 3836795672U);
                    }
                    var_36 = ((/* implicit */int) (+(var_8)));
                    var_37 = ((/* implicit */int) ((long long int) var_1));
                }
                var_38 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_16 = 3; i_16 < 10; i_16 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */long long int) arr_3 [i_16 + 1] [i_16]);
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_0 - 4] [i_0 - 4] [i_16 - 3] [i_0] [i_16 - 1])) || (((/* implicit */_Bool) (-(1631489862U))))));
        }
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                for (unsigned int i_19 = 2; i_19 < 8; i_19 += 3) 
                {
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) min((var_8), ((((+(var_9))) >> (((/* implicit */int) ((((/* implicit */int) arr_7 [i_18] [(signed char)0])) > (((/* implicit */int) arr_14 [i_0] [i_17] [i_17] [i_17] [i_17]))))))))))));
                        var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)25)), (arr_52 [i_0 + 1] [i_0 - 4]))))));
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */signed char) min((-1838978444), (((134054241) + (((int) 1817958172U))))));
    }
    for (int i_20 = 0; i_20 < 15; i_20 += 3) 
    {
        var_44 = ((/* implicit */long long int) ((max((((/* implicit */int) arr_58 [i_20])), (-1838978426))) % (((/* implicit */int) arr_58 [i_20]))));
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (85806342U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110)))))))) ? (1563382497U) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_58 [2U])) && (((/* implicit */_Bool) (signed char)-12))))))))));
    }
    for (unsigned int i_21 = 1; i_21 < 23; i_21 += 3) 
    {
        var_46 += ((/* implicit */int) (signed char)47);
        /* LoopNest 2 */
        for (unsigned int i_22 = 4; i_22 < 22; i_22 += 3) 
        {
            for (int i_23 = 2; i_23 < 22; i_23 += 3) 
            {
                {
                    var_47 *= ((((/* implicit */_Bool) 4209160928U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1162468592)) ? (85806388U) : (2147483648U)))) && (((/* implicit */_Bool) 2727092937U)))))) : (4294967295U));
                    var_48 = ((((((/* implicit */long long int) ((/* implicit */int) arr_66 [i_21] [i_22 - 3] [i_21 - 1]))) == (arr_61 [i_21] [i_22 - 3]))) ? (((((/* implicit */_Bool) arr_66 [i_21 + 1] [i_22 - 3] [i_21 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_23 - 2] [i_22 - 3] [i_21 - 1]))) : (arr_64 [i_21 - 1] [i_22 - 3] [i_21 - 1]))) : ((-(arr_61 [i_21] [i_22 - 3]))));
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */long long int) arr_60 [i_21 - 1])) : (arr_61 [i_21] [i_21 + 1])))) ? (((((/* implicit */_Bool) arr_62 [i_21 + 1])) ? (((/* implicit */long long int) arr_62 [i_21 + 1])) : (-3544530099723998366LL))) : ((((-(arr_64 [i_21] [i_21 + 1] [i_21 + 1]))) >> (((((unsigned int) var_9)) - (1947916215U)))))));
    }
    var_50 = ((/* implicit */unsigned int) var_3);
}

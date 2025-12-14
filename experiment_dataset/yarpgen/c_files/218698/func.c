/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218698
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
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_13 -= (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))) == (var_7))))) : (var_1));
            var_14 += ((/* implicit */unsigned long long int) var_5);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_1] [i_0 + 1] = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0 + 1]));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)104)) ? (var_1) : (var_2))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                var_16 = var_10;
                arr_14 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */int) (unsigned char)129)) >> (((var_8) - (188843497U))))) : (((/* implicit */int) ((((/* implicit */_Bool) 10636731164938055887ULL)) && (((/* implicit */_Bool) 10636731164938055887ULL)))))));
            }
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) 947219539U);
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_1))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((10636731164938055887ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
                        var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                        arr_27 [i_7 + 1] [(unsigned short)0] [i_5 - 1] [(unsigned short)0] [i_0 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (10636731164938055885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))) ? (((((/* implicit */_Bool) var_2)) ? (10636731164938055885ULL) : (988781002244231871ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-18)) ? (arr_20 [i_0 + 1] [i_5 + 2] [i_8 + 1]) : (arr_20 [i_0 + 1] [i_5 - 1] [i_8 + 1])));
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7810012908771495709ULL)) ? (((/* implicit */unsigned int) arr_10 [i_5])) : (arr_22 [i_8] [i_8 + 1])))) ? (((((/* implicit */_Bool) 7810012908771495709ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_6 [i_6] [i_5 - 1] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7810012908771495709ULL))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_23 [i_1] [i_1] [i_0 + 1] [i_6])));
                        arr_34 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */int) ((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_9]) % ((-(7810012908771495732ULL)))));
                        var_24 ^= ((/* implicit */unsigned long long int) var_6);
                        arr_35 [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                    }
                    arr_36 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_5 + 3] [i_6])) ? (10636731164938055899ULL) : (10636731164938055903ULL));
                    var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (7810012908771495712ULL) : (((/* implicit */unsigned long long int) var_4))))));
                }
            }
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (var_4)))) : (((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_10])) ? (arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_23 [i_0] [i_0 + 1] [i_10] [i_0]))))))));
            var_27 ^= min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_0 + 1])), (max((((((/* implicit */_Bool) 16909216874519595453ULL)) ? (7810012908771495732ULL) : (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_2)) ? (988781002244231862ULL) : (10636731164938055879ULL))))));
        }
        arr_39 [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) (+(3168088568U)))) ? (((((/* implicit */_Bool) (+(10636731164938055904ULL)))) ? ((((_Bool)1) ? (7810012908771495723ULL) : (7810012908771495736ULL))) : (((((/* implicit */_Bool) 7810012908771495709ULL)) ? (10636731164938055885ULL) : (7720876865234951016ULL))))) : (((unsigned long long int) var_10)));
        var_28 += ((/* implicit */unsigned char) min(((-(var_3))), (((/* implicit */unsigned long long int) min((arr_8 [i_0 + 1] [i_0] [i_0]), (arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_29 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) (unsigned char)31)))));
        var_30 = ((/* implicit */int) 944463917U);
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 9; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 8; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
                        {
                            {
                                var_31 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10636731164938055894ULL))))));
                                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 2871555269U)) : (7810012908771495709ULL)))) || (((/* implicit */_Bool) 988781002244231871ULL)))) ? (((/* implicit */int) (unsigned short)3059)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(7810012908771495728ULL)))))))));
                                var_33 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_41 [i_12 + 1]))) * (((/* implicit */unsigned long long int) (+(var_0))))));
                                var_34 = ((/* implicit */signed char) ((7810012908771495739ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [i_11] [i_11])))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_41 [i_11]), (var_3)))) ? (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_0)))) * ((-(988781002244231864ULL)))));
                    var_36 = (+(max((((/* implicit */unsigned long long int) var_0)), (arr_23 [i_11] [i_11] [i_11] [i_12 - 1]))));
                }
            } 
        } 
        arr_56 [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((1126878712U), (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) -1601055291)) : (7810012908771495715ULL))) : (10636731164938055890ULL))) <= (((((17457963071465319744ULL) == (((/* implicit */unsigned long long int) -439369463)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11] [i_11]))) : (((((/* implicit */_Bool) 988781002244231864ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (10636731164938055906ULL)))))));
    }
}

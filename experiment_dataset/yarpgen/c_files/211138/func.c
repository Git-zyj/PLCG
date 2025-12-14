/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211138
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
    var_14 *= ((/* implicit */_Bool) (~(((long long int) (+(4241793312U))))));
    var_15 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 2126355910)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */int) (~(((long long int) arr_0 [i_0 + 1]))));
                var_17 = ((/* implicit */unsigned int) (-(1768118509)));
                arr_7 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((min((arr_0 [i_0 + 1]), (arr_2 [i_0]))) ? ((-(((/* implicit */int) arr_0 [i_0 + 3])))) : (((/* implicit */int) ((((arr_3 [(_Bool)1]) ? (6147411013560653433LL) : (6147411013560653459LL))) > (var_11))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_9) + (9223372036854775807LL))) << (((var_10) - (3330497545U)))))) ? (arr_10 [i_3 + 3]) : (((/* implicit */long long int) arr_11 [i_3 + 3] [i_3 - 2]))))) ? (min((arr_10 [i_2]), (((/* implicit */long long int) arr_8 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))));
            var_19 = ((/* implicit */unsigned int) min((var_19), ((-(210122955U)))));
        }
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) (_Bool)1);
            arr_15 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1813693552U)), (var_6)))) ? (arr_5 [(_Bool)1] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (92260424))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [0LL]))))) : (min(((~(9223372036854775807LL))), (((/* implicit */long long int) (-(var_1)))))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_16 [3U] [1LL] [8LL])) ? (arr_1 [i_2] [i_5]) : (((/* implicit */unsigned int) ((int) arr_10 [8U]))))));
            arr_18 [i_2] [i_5] = ((/* implicit */long long int) ((unsigned int) (~(arr_6 [2LL]))));
            arr_19 [(_Bool)1] = ((/* implicit */long long int) ((3665512654U) << (((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_32 [i_2] [i_6] [i_7] [i_8] [5LL] [i_6] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_31 [10] [i_6] [i_2] [i_7] [i_9] [i_2]))) ? (arr_22 [i_6] [i_7] [(_Bool)1]) : (1783662782480030823LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -801799866)) ^ (arr_1 [i_6 - 1] [i_6 + 1])))) : ((-(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) arr_5 [i_6] [i_6])) : (-2502192787675694609LL)))))));
                                arr_33 [i_6] [i_8] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((arr_27 [i_9] [i_9]) ? (arr_6 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_6 + 1] [i_6]))))))))));
                            }
                        } 
                    } 
                    arr_34 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) arr_22 [i_6] [(_Bool)1] [i_7]);
                    var_22 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3665512654U)));
                }
            } 
        } 
        arr_35 [i_2] [i_2] = max((min((max((((/* implicit */long long int) var_2)), (arr_12 [3LL] [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */long long int) ((unsigned int) 3665512645U))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-64034682)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8318204460846120145LL)));
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            arr_41 [i_10] [i_10] = var_10;
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((long long int) -813310585)))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            arr_44 [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) -9034199007667739243LL))) ? (arr_38 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [6U])))));
            var_25 = ((/* implicit */_Bool) (+(arr_30 [i_10] [i_10] [i_10] [i_10])));
            var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) 0)) : (arr_5 [(_Bool)1] [(_Bool)1])));
            arr_45 [10LL] [i_12] |= ((/* implicit */long long int) (~(arr_40 [i_10])));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_14 = 3; i_14 < 11; i_14 += 1) 
        {
            arr_52 [i_14] = ((/* implicit */int) arr_1 [i_14 - 1] [i_14 + 1]);
            /* LoopSeq 3 */
            for (long long int i_15 = 3; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_27 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -528175227)) : (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7954038869480477063LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    var_28 = ((((/* implicit */_Bool) ((((var_9) != (arr_53 [i_14] [i_15 - 2] [12LL]))) ? (((((/* implicit */_Bool) -1430786281948382051LL)) ? (-1430786281948382051LL) : (((/* implicit */long long int) -64034682)))) : (((((/* implicit */_Bool) arr_31 [5U] [i_14] [9] [1LL] [i_16] [i_16])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (max((arr_22 [i_14] [i_14] [i_15]), (((/* implicit */long long int) var_1)))) : ((-(-7112916282020981315LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [12LL] [i_15 - 1] [i_16]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) 1959295729)) : (min((arr_47 [i_13]), (-9223372036854775804LL))))))));
                }
                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 35184371564544LL))) ? ((-(var_12))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [5LL] [i_14 + 2] [5LL]))) : (9223372036854775807LL)))))) ? (((/* implicit */long long int) arr_51 [i_13])) : ((~(((((/* implicit */_Bool) 7916078623210624277LL)) ? (arr_13 [i_13] [i_14]) : (((/* implicit */long long int) arr_24 [12LL] [i_14] [i_13])))))));
            }
            for (long long int i_17 = 3; i_17 < 12; i_17 += 1) /* same iter space */
            {
                arr_62 [i_14] [i_14] [(_Bool)0] = ((long long int) 768348009);
                var_31 ^= ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_29 [i_14 - 2])) ? (arr_9 [i_14 + 1]) : (arr_9 [i_14 - 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_14 + 2])) ? (arr_29 [i_14 + 2]) : (arr_29 [i_14 + 2])))));
                var_32 = (~(min((((/* implicit */long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) 4597236383553351897LL)) ? (var_12) : (((/* implicit */long long int) arr_25 [(_Bool)1] [i_14 + 1] [i_14])))))));
                var_33 = ((/* implicit */long long int) arr_8 [i_14 - 2]);
            }
            for (long long int i_18 = 3; i_18 < 12; i_18 += 1) /* same iter space */
            {
                var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_18 - 2] [2LL])) ? (arr_1 [i_18 - 2] [i_14 + 2]) : (arr_1 [i_18 - 2] [i_14 + 2])))) ? ((-(max((576460752303423488LL), (-8126985702026504743LL))))) : ((-(var_8))));
                arr_66 [8LL] [i_14 + 1] [6U] &= min((((((/* implicit */_Bool) 389309962U)) ? (((/* implicit */long long int) (~(arr_26 [i_13])))) : (((arr_0 [i_18 - 3]) ? (arr_9 [5LL]) : (((/* implicit */long long int) 3205809888U)))))), (((((/* implicit */long long int) ((arr_4 [i_13]) | (arr_25 [i_18 + 1] [i_14] [12LL])))) ^ (((((/* implicit */_Bool) 132747907U)) ? (7112916282020981314LL) : (((/* implicit */long long int) arr_37 [i_18])))))));
                var_35 = ((/* implicit */_Bool) ((var_9) ^ (((5545748212005716247LL) >> (((7057272504173433000LL) - (7057272504173432987LL)))))));
            }
        }
        var_36 = 10;
        arr_67 [0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_42 [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (((long long int) -1055484955))))));
        arr_68 [(_Bool)1] |= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775807LL))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_13])))))))));
        arr_69 [(_Bool)1] [i_13] = ((/* implicit */unsigned int) min(((+(7112916282020981314LL))), (((long long int) arr_12 [i_13] [5LL]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228993
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) var_5)) ? (max((max((((/* implicit */long long int) (unsigned short)10490)), (9LL))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_5 [0U] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)745)), (375107991U)));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_15 -= ((/* implicit */unsigned int) (unsigned char)32);
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)238)) && (((/* implicit */_Bool) 3246468867U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))))) : (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)39364)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 1048576)) ? (3610731937U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_1))));
            }
            /* vectorizable */
            for (short i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((14336) - (14326)))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((var_3) ? (((((/* implicit */_Bool) (signed char)21)) ? (126100789566373888ULL) : (2305843008139952128ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31378)) ? (3596511903U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28244))))))))));
                arr_12 [i_3] [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 720429904))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                for (int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) 4871160950276129544LL)) ? (((/* implicit */int) (unsigned short)34161)) : (((/* implicit */int) var_13)))))))) : (var_5)));
                        arr_20 [i_0] [(signed char)4] [i_5 + 1] = ((/* implicit */short) var_2);
                        var_20 &= ((/* implicit */short) ((((var_14) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(short)6] [i_1] [i_1 + 1] [i_1])) ? (-392982795) : (((/* implicit */int) var_13))))))) > (((/* implicit */long long int) arr_14 [0ULL] [i_4 + 1] [i_5 - 3]))));
                        arr_21 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) (unsigned short)8191))) : (max((1048583), (-14336)))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8207)) ? (1116892707587883008LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24)))));
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (16667922201589863304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1042106504)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57346))) : (9371860940873900934ULL)))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
        {
            arr_28 [i_6] [i_7] = ((/* implicit */_Bool) (+((-(12853041624408261795ULL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_8 = 4; i_8 < 12; i_8 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) arr_13 [i_6] [i_7] [i_8] [i_8]);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            arr_36 [(signed char)6] [i_6] [i_7] [10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2425109949U)) > (9074883132835650693ULL)));
                            arr_37 [i_6] [(_Bool)1] [i_8 - 1] [i_9] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) var_11);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (signed char)-123))) ^ (((/* implicit */int) (unsigned char)3))));
                            arr_38 [i_6] [i_7] [i_8] [i_8] [i_10] &= ((2041496306U) >> (((1869857363U) - (1869857348U))));
                            arr_39 [i_10] [i_6] [i_8 + 3] [i_6] [i_6] = arr_30 [i_6] [i_6];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_44 [i_6] [i_6] [i_8 - 2] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_7 - 1] [i_6])) ? (arr_17 [i_6] [9LL] [i_11] [i_6]) : (((/* implicit */long long int) 2253471011U))));
                            arr_45 [i_6] [i_12] [i_8 - 2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1048584)) ? (11565389028845660347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (1259218549) : (((/* implicit */int) arr_25 [i_6]))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-111)) ? (var_14) : (((/* implicit */long long int) 4294967295U)))))));
                            arr_46 [i_12 - 1] [i_11] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) 2017332220);
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (short)-21824)) ? ((((_Bool)1) ? (968874101833811280ULL) : (((/* implicit */unsigned long long int) -1774474670)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_7 + 1]))))))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                var_27 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_7 - 2] [i_7 + 1] [i_7 - 2]))) : (var_14)));
                var_28 = ((((/* implicit */_Bool) 3246468854U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54742)));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_1))));
            }
        }
        /* vectorizable */
        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_55 [i_14] [i_14 - 1] [i_6] = arr_14 [i_14] [i_14] [i_15];
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-8048035681467611888LL) : (4871160950276129554LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_14]))) : (9315935962484854155ULL))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 3; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (arr_52 [i_14 - 2] [i_14 - 2])));
                            arr_62 [i_6] = ((/* implicit */int) ((unsigned int) arr_29 [i_14 + 1] [(unsigned short)10] [i_14 + 1] [i_17 + 1]));
                            arr_63 [i_6] [i_14 - 2] [i_6] [i_15] [5U] [i_15] = ((/* implicit */unsigned char) arr_3 [i_14] [i_15]);
                            var_32 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            var_33 &= ((/* implicit */short) (+((-(3246468868U)))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (((int) (_Bool)1)))))));
            arr_64 [i_14] &= ((/* implicit */short) var_2);
        }
        arr_65 [i_6] = ((/* implicit */unsigned short) arr_56 [i_6] [i_6] [(signed char)9] [i_6] [i_6]);
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 287741389849321016LL)) ? (18446744004990074880ULL) : (((/* implicit */unsigned long long int) 3948324436U))));
    }
    var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14890137133789980307ULL)) && (((/* implicit */_Bool) 836565212))));
    var_37 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_14) : (((/* implicit */long long int) -431818908))));
    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (var_2) : (((/* implicit */unsigned long long int) -7312337361201434930LL)))))));
}

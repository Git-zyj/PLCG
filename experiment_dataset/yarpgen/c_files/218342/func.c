/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218342
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
    var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned char) (signed char)-31))))), (max((var_12), (((/* implicit */long long int) (signed char)31)))))), (((/* implicit */long long int) min(((signed char)38), ((signed char)36))))));
    var_15 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-31)), (var_8)))), (max((var_0), (var_0))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)12425)), ((unsigned short)127)))), (min((((/* implicit */unsigned int) var_7)), (var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) -1LL))));
        var_17 = ((/* implicit */_Bool) -642056356);
        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */_Bool) min((max((min((((/* implicit */long long int) arr_2 [i_1] [i_2])), (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_1 [(_Bool)1])), (arr_2 [i_2] [i_1])))))), (max((max((((/* implicit */long long int) var_3)), (arr_4 [i_2]))), (((/* implicit */long long int) max(((short)0), (((/* implicit */short) var_1)))))))));
            var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_2 [i_1] [i_1])), ((-2147483647 - 1)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1])), (arr_2 [i_1] [i_1]))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_2])), ((unsigned short)65535)))), (max((var_0), (((/* implicit */unsigned long long int) var_4))))))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_0))), (((/* implicit */unsigned long long int) min((arr_6 [i_1] [(unsigned short)2] [i_2]), (((/* implicit */unsigned char) var_10))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((arr_2 [i_1] [i_2]), (var_3)))), (min(((unsigned short)480), ((unsigned short)38057)))))))))));
            var_22 = ((/* implicit */int) max((((/* implicit */long long int) max((min((((/* implicit */int) (_Bool)0)), (255))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)1)), (arr_3 [i_2]))))))), (max((min((arr_0 [i_1] [i_2]), (((/* implicit */long long int) arr_5 [(unsigned short)18] [i_1] [i_1])))), (max((((/* implicit */long long int) (unsigned short)58701)), (-1LL)))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) arr_2 [i_3] [5U])), (arr_7 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((arr_5 [(short)24] [(short)24] [i_1]), ((_Bool)0)))))), (max((min((var_0), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [(_Bool)1])))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (signed char)31)))))))));
                        var_24 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((signed char)-36), (((/* implicit */signed char) (_Bool)1))))), (max((((/* implicit */long long int) max((arr_3 [i_1]), (((/* implicit */unsigned char) (_Bool)0))))), (min((((/* implicit */long long int) (short)-23256)), (-8355451125092415971LL)))))));
                        var_25 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)))), (max((((/* implicit */unsigned long long int) var_13)), (1235642019121109629ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_6)), (-1968674556))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)30)))))))));
                        arr_16 [i_5] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) min((max((max((var_2), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min(((unsigned short)20314), (((/* implicit */unsigned short) (short)-3141))))))), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1])), (var_8))), (max((((/* implicit */unsigned short) var_5)), (var_11))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) max((min((arr_3 [i_1]), (arr_9 [i_3]))), (min((((/* implicit */unsigned char) var_7)), (var_6)))))), (max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned char) arr_5 [i_1] [(unsigned short)12] [19LL]))))), (min((369602146119361115LL), (8355451125092415959LL)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_27 -= ((/* implicit */long long int) min((max((max((arr_7 [i_1] [i_6] [i_1]), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)350)), (32764U)))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_15 [i_1] [i_1])), (var_11))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_15 [16] [i_6])))))))));
            var_28 = min((min((((/* implicit */long long int) max((((/* implicit */short) (signed char)-10)), (arr_11 [i_1] [i_6] [i_1])))), (min((-8355451125092415964LL), (1LL))))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)36)), (1956331133)))));
            arr_21 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37512))), (min((arr_18 [(_Bool)1]), (((/* implicit */unsigned short) (signed char)36))))))), (max((min((10647502716914669136ULL), (((/* implicit */unsigned long long int) (unsigned short)42564)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_1] [i_6] [i_1] [i_6] [(_Bool)0] [i_1])), (var_9))))))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned short) min(((short)-23), (((/* implicit */short) (signed char)-32))))), (max((max((var_11), (((/* implicit */unsigned short) arr_26 [i_1] [i_7] [i_1])))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_13 [i_8] [19LL] [i_7] [i_7] [(signed char)13] [19LL])), (arr_19 [i_1] [i_7]))))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 24; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_20 [i_7] [i_7] [i_7])), (arr_14 [i_7] [i_8] [i_10] [i_7] [i_10] [i_7]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (var_8))))))), (max((max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_8] [i_8]))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) var_1)))))))));
                            arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) min((arr_17 [i_10]), (((/* implicit */short) arr_13 [i_1] [i_7] [i_7] [16LL] [i_9] [i_10]))))), (max((arr_31 [(_Bool)1] [i_7]), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) arr_1 [i_1])), (arr_2 [i_10] [i_1]))), (((/* implicit */unsigned char) max((var_10), ((_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            arr_39 [i_1] [i_7] [i_8 + 1] [i_12] [i_12] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max((-8355451125092415971LL), (7231143037007015449LL)))), (min((((/* implicit */unsigned long long int) arr_29 [i_1] [17ULL] [i_1] [i_11])), (var_0))))), (((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */short) var_5)))), (min((((/* implicit */short) var_3)), (var_4))))))));
                            arr_40 [i_12] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (short)-10673)), (-8578980081753231549LL))), (max((-8355451125092415967LL), (((/* implicit */long long int) (signed char)-10))))))), (max((min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_11])), (var_0))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) (unsigned short)65535)))))))));
                            arr_41 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [19LL] = ((/* implicit */short) min((max((min((((/* implicit */long long int) arr_14 [23ULL] [i_7] [i_7] [(unsigned char)5] [i_11] [(unsigned char)5])), (8355451125092415970LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_10)), (arr_35 [i_8] [i_8] [i_8 - 1] [i_8])))))), (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_6)))), (min((arr_12 [i_12] [i_8] [i_1]), (((/* implicit */int) (unsigned short)4863)))))))));
                            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((arr_19 [i_1] [i_8 + 1]), (((/* implicit */unsigned char) var_1)))), (max(((unsigned char)228), (var_5)))))), (min((min((((/* implicit */long long int) arr_25 [i_1] [i_7] [i_8] [i_1])), (6823567234485455108LL))), (min((arr_4 [i_1]), (((/* implicit */long long int) var_13))))))));
                        }
                    } 
                } 
                arr_42 [i_8] [i_7] = ((/* implicit */unsigned char) min((max((max((var_0), (((/* implicit */unsigned long long int) arr_17 [(unsigned char)2])))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */short) var_10))))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_15 [i_1] [i_1])), (arr_33 [i_7] [i_8 + 1]))), (max((((/* implicit */unsigned short) (short)-1158)), ((unsigned short)49820))))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((min((max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_13])), (arr_30 [i_13] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) arr_46 [i_14] [i_1] [i_1]))))))), (((/* implicit */unsigned int) min((min((var_8), (((/* implicit */unsigned short) var_13)))), (((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned char) arr_5 [i_1] [i_7] [i_14]))))))))));
                        var_32 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max((-22LL), (((/* implicit */long long int) (unsigned short)60659))))), (max((((/* implicit */unsigned long long int) var_12)), (arr_45 [i_13]))))), (((/* implicit */unsigned long long int) max((min((-1635171820), (((/* implicit */int) (signed char)25)))), (((/* implicit */int) min(((unsigned char)26), ((unsigned char)238)))))))));
                        var_33 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_1])), (1564803534U)))), (min((((/* implicit */long long int) arr_32 [(unsigned short)8] [i_7] [i_1])), (-6LL))))), (max((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_37 [i_1] [i_1] [i_1] [i_13])))), (max((((/* implicit */long long int) var_8)), (8355451125092415970LL)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 23; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        {
                            arr_58 [i_15 - 1] [i_7] [i_15] [i_16] [(unsigned short)14] [i_17] [i_15 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (signed char)-10)), ((unsigned short)60655))), (((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned char) arr_29 [i_1] [(_Bool)1] [i_15] [i_17])))))))), (min((min((((/* implicit */unsigned long long int) (signed char)-36)), (arr_8 [i_1] [i_7]))), (((/* implicit */unsigned long long int) max((var_3), (var_3))))))));
                            var_34 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */short) max((var_5), (((/* implicit */unsigned char) arr_54 [i_1] [i_7] [16] [16] [16] [16] [i_17]))))), (max((arr_17 [i_1]), (((/* implicit */short) var_7))))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-36)), (var_11)))), (min((((/* implicit */long long int) (signed char)-34)), (var_12)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)36)), (-1LL)))), (max((arr_36 [i_1] [i_18] [(short)4] [i_18] [i_1]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) max((min((arr_10 [i_1] [i_18]), ((unsigned char)26))), (((/* implicit */unsigned char) max((arr_29 [24U] [i_18] [i_18] [i_18]), (((/* implicit */signed char) var_10))))))))));
            var_36 = ((/* implicit */unsigned short) max((1381995991U), (((/* implicit */unsigned int) (unsigned char)123))));
        }
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (unsigned short)23806))));
            var_38 = ((/* implicit */unsigned short) (unsigned char)112);
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 3; i_22 < 22; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        {
                            var_39 ^= ((/* implicit */unsigned long long int) (unsigned short)3423);
                            arr_76 [i_23] [i_22 - 2] [i_21] = ((/* implicit */unsigned short) (signed char)4);
                            var_40 *= ((/* implicit */short) (unsigned short)40742);
                            var_41 |= ((/* implicit */unsigned short) (signed char)(-127 - 1));
                            var_42 = (unsigned short)3423;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) (unsigned char)103);
                            var_44 = ((/* implicit */short) (signed char)127);
                            arr_81 [i_25] [i_25] [i_24] [i_21] [i_20] [i_25] [i_1] = ((/* implicit */long long int) (signed char)-56);
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned short) (signed char)-3);
                arr_82 [i_21] = ((/* implicit */_Bool) 4191724951U);
                arr_83 [i_1] [i_20] [i_21] = ((/* implicit */short) (signed char)-122);
            }
            for (short i_26 = 2; i_26 < 24; i_26 += 1) 
            {
                var_46 = ((/* implicit */unsigned long long int) 7621043564655216670LL);
                /* LoopSeq 3 */
                for (unsigned char i_27 = 3; i_27 < 23; i_27 += 1) 
                {
                    var_47 = ((/* implicit */short) (unsigned char)253);
                    var_48 = ((/* implicit */short) (unsigned short)4863);
                    var_49 = ((/* implicit */long long int) (unsigned short)60672);
                    arr_89 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)138);
                    var_50 |= ((/* implicit */_Bool) (signed char)34);
                }
                for (unsigned short i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    var_51 += ((/* implicit */unsigned short) (_Bool)1);
                    var_52 = ((/* implicit */long long int) (signed char)-32);
                }
                for (unsigned int i_29 = 1; i_29 < 24; i_29 += 4) 
                {
                    var_53 *= (_Bool)1;
                    var_54 = ((/* implicit */unsigned int) (unsigned short)37960);
                }
                var_55 = ((/* implicit */unsigned int) (unsigned char)227);
                var_56 += ((/* implicit */unsigned char) (short)32767);
            }
            arr_98 [i_20] = ((/* implicit */unsigned short) -1LL);
            /* LoopSeq 1 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                var_57 = (signed char)44;
                var_58 = ((/* implicit */long long int) 4294967295U);
                var_59 |= (short)4927;
                arr_101 [i_1] [19U] [i_20] &= ((/* implicit */unsigned int) 8177879844253897365LL);
            }
        }
        var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) max((max((min((((/* implicit */long long int) arr_25 [(unsigned short)14] [i_1] [(unsigned short)3] [i_1])), (var_12))), (min((var_12), (((/* implicit */long long int) var_2)))))), (min((min((4382205624060986000LL), (arr_4 [i_1]))), (((/* implicit */long long int) min((arr_14 [i_1] [i_1] [i_1] [i_1] [(short)5] [i_1]), (((/* implicit */unsigned int) arr_35 [i_1] [i_1] [i_1] [i_1]))))))))))));
    }
}

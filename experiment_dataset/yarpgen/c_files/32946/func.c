/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32946
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
    var_20 += ((/* implicit */signed char) 2782289518881522972ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13529883918786211371ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_17))))) ? (arr_1 [i_0]) : (((1609103234558609671ULL) % (((/* implicit */unsigned long long int) arr_3 [(signed char)1])))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (~(var_17)))), (7725843076056695618ULL))) % (((((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (var_0)))));
                            var_22 = ((/* implicit */long long int) ((((min((var_3), (var_1))) + (((((/* implicit */_Bool) 7775465294903065178LL)) ? (4238127250017901064ULL) : (((/* implicit */unsigned long long int) 1368063586256457071LL)))))) != (min((15752931311633415834ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] |= ((/* implicit */signed char) ((long long int) max((10777881176467140227ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)108))))))));
            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((max((3489762405020913341ULL), (((/* implicit */unsigned long long int) var_15)))) >> (((((((/* implicit */_Bool) var_0)) ? (arr_10 [0ULL] [i_0] [i_1]) : (arr_0 [i_0] [i_0]))) + (164020423306932572LL))))) : (((((/* implicit */_Bool) min((12194799366473925769ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0])) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((-(var_0))) >= (((/* implicit */unsigned long long int) var_18))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(var_8))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_21 [(signed char)11] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_6]);
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_10 [i_6] [i_0] [i_6]))))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_26 ^= ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1))) * (((/* implicit */unsigned long long int) var_16)));
                    var_27 = ((/* implicit */unsigned long long int) var_7);
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_32 [i_10] [i_9] [8ULL] [10LL] [10LL] = ((/* implicit */signed char) ((9180296378029867236LL) << (((((-7775465294903065180LL) + (7775465294903065224LL))) - (44LL)))));
                            arr_33 [5LL] [i_9] [i_9] [0ULL] = 7775465294903065178LL;
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_0] [i_0] = arr_13 [1LL] [i_6] [i_6] [i_0] [11LL];
            }
        }
        var_28 |= ((/* implicit */long long int) (+(max((((15752931311633415837ULL) - (15752931311633415837ULL))), (((/* implicit */unsigned long long int) 331113202987566463LL))))));
    }
    /* LoopSeq 4 */
    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((-3754779514718701670LL), (arr_37 [i_11] [5LL])))) ? (((14208616823691650560ULL) / (((/* implicit */unsigned long long int) arr_37 [i_11] [i_11])))) : (((/* implicit */unsigned long long int) ((var_17) + (-7775465294903065185LL)))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_37 [0ULL] [(signed char)5])))) && (((/* implicit */_Bool) var_0))))))))));
        var_30 = (((!(((/* implicit */_Bool) arr_36 [i_11] [i_11])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_11] [i_11]) > (((/* implicit */unsigned long long int) ((-7775465294903065216LL) / (-1422095257810222732LL)))))))));
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            var_31 = ((/* implicit */long long int) max((var_19), (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11]))) : (9644753165856688234ULL))))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(min((min((((/* implicit */unsigned long long int) var_4)), (var_19))), (((12194799366473925785ULL) - (((/* implicit */unsigned long long int) -8971345030836553395LL)))))))))));
        }
        arr_41 [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-7697667307191032360LL) : (arr_37 [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (var_17)))) : (min((((/* implicit */unsigned long long int) var_2)), (arr_36 [i_11] [i_11]))))))));
    }
    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3345384272088803597LL)) && (((/* implicit */_Bool) 6131424278140516068ULL))));
        var_33 *= (+(((((/* implicit */_Bool) 603694964308727224ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (7387028000258225186ULL))));
        arr_45 [i_13] [i_13] = (+(2465451792034984812ULL));
    }
    for (long long int i_14 = 1; i_14 < 10; i_14 += 2) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4216325279517550370ULL)) ? (max((((arr_35 [i_14]) ^ (8294649559617520532LL))), (var_18))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        arr_50 [i_14] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -2195997295607278403LL)), (15422596176746640277ULL)));
        var_35 = ((min((((((/* implicit */unsigned long long int) var_16)) - (arr_46 [i_14] [i_14 - 1]))), (((/* implicit */unsigned long long int) var_11)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
        arr_51 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_48 [i_14 + 1]) : (arr_48 [i_14 + 2])))) ? (-7775465294903065207LL) : (max((arr_48 [i_14 + 1]), (arr_48 [i_14 + 2])))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                {
                    arr_60 [i_17] [i_15] [i_15] [i_15] = ((/* implicit */signed char) arr_53 [i_15] [i_15]);
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            {
                                arr_66 [i_15] [i_15] [i_17] [i_18] [i_19] [i_16] [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)111)), (max((((/* implicit */unsigned long long int) arr_57 [i_18] [i_17] [i_15])), (((((/* implicit */_Bool) (signed char)48)) ? (var_19) : (var_19)))))));
                                arr_67 [i_18] [i_15] [i_17] [20LL] [i_15] [i_17] = ((((/* implicit */_Bool) (-(((unsigned long long int) -7697667307191032341LL))))) ? (((/* implicit */unsigned long long int) arr_53 [i_17] [i_19])) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2135952080459258752ULL))), (((/* implicit */unsigned long long int) min((arr_61 [i_15] [i_15] [i_18] [i_19]), (arr_61 [i_18] [i_15] [i_17] [i_18])))))));
                                var_36 -= ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 2) 
                        {
                            {
                                arr_73 [15ULL] [i_16] [i_17] [i_20] [i_15] = ((((/* implicit */_Bool) ((12425184322544115074ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_15])))))) ? (((/* implicit */unsigned long long int) var_7)) : ((~(min((((/* implicit */unsigned long long int) var_4)), (var_8))))));
                                var_37 = ((/* implicit */signed char) arr_55 [i_16] [i_17]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_74 [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-6535436389123624232LL), (var_18)))) ? (((((/* implicit */_Bool) 1327777358124199823ULL)) ? (var_11) : (1652177513633488433LL))) : (arr_68 [i_15] [i_15] [i_15] [i_15])))), ((+(var_8)))));
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_58 [i_15] [i_15] [i_15]))));
        var_39 = ((/* implicit */long long int) max(((~(12194799366473925769ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -7697667307191032331LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (-1652177513633488406LL))), (((long long int) arr_56 [24ULL] [i_15] [24ULL])))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190833
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
    var_10 &= var_0;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]))), (max((16695801561971016338ULL), (1750942511738535277ULL)))))));
            arr_6 [13ULL] = ((/* implicit */int) ((unsigned long long int) min((1750942511738535277ULL), (1750942511738535277ULL))));
            arr_7 [i_0] [i_1] = ((unsigned long long int) (~(max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_0])))));
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((int) 16695801561971016327ULL)))));
            var_13 = min((((min((((/* implicit */unsigned long long int) var_0)), (16695801561971016338ULL))) * (((var_9) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))), (min((var_6), ((-(1750942511738535275ULL))))));
        }
        arr_8 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) -1099288481)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_6)))));
        arr_9 [17] = ((/* implicit */int) min((min((arr_5 [i_0] [i_0]), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) min((min((9308883018501409864ULL), (1750942511738535268ULL))), (((/* implicit */unsigned long long int) ((7761668999123980846ULL) < (7094363571413068021ULL))))))) ? (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 2])) ? (arr_5 [i_2 - 2] [i_2 + 2]) : (var_2))) : (((/* implicit */unsigned long long int) arr_4 [i_2 + 2])));
        arr_12 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]))))))) ? (((((arr_5 [i_2] [i_2]) < (((/* implicit */unsigned long long int) arr_4 [5ULL])))) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (17818014548357754056ULL))) : (((((/* implicit */_Bool) ((var_9) + (arr_5 [i_2 - 2] [i_2 - 2])))) ? (min((((/* implicit */unsigned long long int) var_3)), (var_1))) : ((+(arr_10 [i_2 + 2]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_15 += ((/* implicit */int) ((((((/* implicit */_Bool) ((int) arr_15 [i_3] [i_3] [i_4]))) ? (arr_14 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1750942511738535277ULL) < (((/* implicit */unsigned long long int) var_0)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 911663935))))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) max((max((arr_16 [i_3]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_0))))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1497035047)) : (arr_14 [i_3]))), (var_6))) : (min((min((11265838448655505660ULL), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) < (var_1))))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                arr_19 [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))) ? (5140197881569045757ULL) : (((/* implicit */unsigned long long int) ((int) var_4)))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5140197881569045757ULL))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                arr_23 [i_3] [i_3] = ((/* implicit */int) arr_20 [i_3] [i_4] [i_6]);
                var_18 = min((max((arr_14 [i_3]), (((/* implicit */unsigned long long int) -1309970830)))), ((+(17818014548357754056ULL))));
                var_19 = ((/* implicit */int) min((5876459705823636963ULL), (((/* implicit */unsigned long long int) -468617654))));
                var_20 |= ((/* implicit */unsigned long long int) ((12570284367885914650ULL) < (((/* implicit */unsigned long long int) 906479726))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_21 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (var_7) : (arr_20 [i_4] [i_4] [i_4])))) ? (var_1) : (((16802309165241652039ULL) << (((17601771067915962766ULL) - (17601771067915962720ULL)))))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_15 [i_6 + 2] [i_6] [i_7 - 1]) : (var_9))) : (((/* implicit */unsigned long long int) ((int) 9308883018501409864ULL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        arr_29 [i_3] [i_4] [i_4] [i_4] [i_8] [i_8] = ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3])) ? (min((5876459705823636979ULL), (12570284367885914635ULL))) : (max(((-(var_2))), ((~(15567803042725050734ULL))))));
                        var_22 = ((((/* implicit */_Bool) 18032775508530990504ULL)) ? (18283331840882401701ULL) : (277180111795820075ULL));
                    }
                    for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_3]) < (arr_20 [i_4] [i_4] [i_7 - 2]))))) < (arr_14 [i_4])))) < (((int) ((var_1) < (((/* implicit */unsigned long long int) 708511368)))))));
                        var_24 += ((/* implicit */int) ((7738376729531475168ULL) < (((/* implicit */unsigned long long int) (~((~(-1051124105))))))));
                        var_25 = ((/* implicit */unsigned long long int) (((~((~(arr_27 [i_7] [i_7] [i_4] [i_7] [i_7] [i_7] [i_7]))))) < (((/* implicit */unsigned long long int) ((int) 16695801561971016338ULL)))));
                    }
                }
                for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    var_26 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1530590425)) ? (-648222172) : (1813724050)))) ? ((+(((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))))) : (min((((/* implicit */unsigned long long int) ((arr_14 [i_3]) < (var_6)))), (arr_35 [i_3] [i_4] [i_6] [i_4]))));
                    var_27 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) max((arr_34 [i_10] [i_6] [i_6] [i_4] [i_4] [i_3]), (var_3)))) + (((((/* implicit */_Bool) 1472030810678594501ULL)) ? (var_7) : (var_2))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    arr_40 [i_11] [i_11] [i_6] [i_6] [i_4] [i_3] = (+(7738376729531475168ULL));
                    var_28 = max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_14 [i_6]))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((int) arr_20 [i_4] [i_6 - 1] [i_6 - 1]))));
                }
                for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        var_29 -= ((unsigned long long int) ((((/* implicit */_Bool) 6954402131184522515ULL)) && (((/* implicit */_Bool) 6954402131184522515ULL))));
                        var_30 = ((((/* implicit */_Bool) (~(arr_17 [i_3] [i_4] [i_6] [19ULL])))) ? ((-(var_9))) : (((unsigned long long int) 16206267982476606137ULL)));
                        arr_45 [i_13] = (-(var_9));
                        arr_46 [i_13] = ((/* implicit */int) ((-1997138277) < (-570440492)));
                        var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) 7094363571413068006ULL)) ? (18169563961913731541ULL) : (12635771409599550077ULL)))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 3) /* same iter space */
                    {
                        arr_49 [i_14] [i_14] [i_14] [i_12] [i_3] [i_14] [i_12] = ((/* implicit */unsigned long long int) ((4881388405185628708ULL) < (((/* implicit */unsigned long long int) -1168908408))));
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_6 + 1] [i_14 + 4] [i_14 + 4] [i_14]))) ? (((arr_38 [i_6 + 1] [i_14 + 4] [i_6 + 1] [i_14]) >> (((arr_38 [i_6 + 1] [i_14 + 4] [i_14] [i_14 + 3]) - (986785834))))) : (((arr_38 [i_6 + 1] [i_14 + 4] [i_14] [i_14]) << (((var_6) - (16199433404676834535ULL)))))))));
                    }
                    var_33 = min((17200927886951828234ULL), (18169563961913731540ULL));
                }
            }
            for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                arr_52 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((2282724357835446770ULL) < (((/* implicit */unsigned long long int) 408762359))));
                var_34 = ((/* implicit */int) ((((277053279) < (-2034341212))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1029199550)) : (5468514471771215765ULL))) : ((~(arr_25 [i_3] [i_3] [12ULL] [i_3] [i_3] [i_3])))));
                arr_53 [24ULL] [17ULL] [17ULL] = ((/* implicit */int) var_6);
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((6954402131184522515ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 4; i_17 < 23; i_17 += 4) 
                {
                    var_36 = 7864339617392829105ULL;
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */int) 17031951013102343827ULL);
                        var_39 += ((/* implicit */int) (((+(534982431))) < (((((/* implicit */_Bool) var_4)) ? (-1270361513) : (2055162539)))));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_4)))) < (16437976542798677992ULL)));
                        arr_66 [i_19] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_17 - 1] [i_19 + 3] [i_19 + 3] [i_17 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(arr_13 [6])))));
                        arr_67 [i_19] [i_19] [i_19] [i_19 - 1] [21ULL] = ((/* implicit */unsigned long long int) ((arr_63 [i_16] [i_17 - 2] [i_16] [i_17 - 4] [i_17] [i_19 + 2]) < (-1374459710)));
                        arr_68 [i_3] [i_4] [i_16] [i_4] [i_19] = (+(arr_63 [i_19] [i_19 + 3] [i_19] [i_19 + 2] [i_19] [i_17 - 1]));
                    }
                    var_41 ^= ((((/* implicit */_Bool) 5876459705823636955ULL)) ? (470281948542240565ULL) : (5876459705823636946ULL));
                    arr_69 [i_4] [i_4] [24ULL] = (~(arr_16 [i_16]));
                }
                for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_42 += (-(((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) arr_13 [i_3]))))));
                    var_43 = ((/* implicit */int) var_1);
                    var_44 = ((/* implicit */unsigned long long int) arr_13 [i_20]);
                    arr_72 [i_3] [i_4] [i_16] [16ULL] [i_3] |= (~(18169563961913731565ULL));
                    var_45 ^= ((/* implicit */int) (-(arr_20 [i_3] [i_4] [i_16])));
                }
            }
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 3) 
        {
            var_46 += ((unsigned long long int) max((arr_18 [i_3] [i_21] [i_21] [i_21]), (arr_18 [i_21] [i_21] [i_21] [i_21])));
            var_47 *= ((/* implicit */unsigned long long int) (((+(arr_61 [i_21] [i_21] [i_21] [18ULL] [i_21] [0] [i_3]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_7) < (var_7)))) < (((/* implicit */int) ((arr_55 [i_3] [i_21] [i_21] [i_21]) < (((/* implicit */unsigned long long int) arr_33 [i_3] [i_3] [i_21] [i_3])))))))))));
        }
        for (unsigned long long int i_22 = 2; i_22 < 23; i_22 += 4) 
        {
            arr_78 [i_22] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_34 [i_22 + 1] [i_22] [i_22] [i_3] [i_22 - 1] [i_3])))) < (((unsigned long long int) arr_63 [i_3] [i_3] [i_3] [i_3] [i_22] [i_3]))));
            var_48 = var_2;
            arr_79 [20ULL] [i_22] [i_3] = (+((+(((15023227215551731806ULL) * (var_6))))));
        }
        var_49 = ((/* implicit */unsigned long long int) (-(-1270361513)));
        arr_80 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [12ULL] [i_3] [4] [i_3]))));
    }
    for (unsigned long long int i_23 = 3; i_23 < 12; i_23 += 1) 
    {
        var_50 *= ((/* implicit */int) ((14827435902200073884ULL) < (10573810934246629912ULL)));
        var_51 -= (-(14069271531754731970ULL));
    }
    var_52 ^= ((((/* implicit */_Bool) 332731155012804474ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_8)))));
    var_53 = ((/* implicit */unsigned long long int) ((6469327546654581983ULL) < (((/* implicit */unsigned long long int) 1270361512))));
}

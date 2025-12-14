/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33842
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
    var_13 = min((max((var_6), ((-(5075139507528673492LL))))), (((/* implicit */long long int) var_1)));
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3])) || (((/* implicit */_Bool) 4294967293U)))));
                        arr_12 [i_0] [i_1] [i_0] [(short)2] [i_2] = ((/* implicit */short) (~(arr_5 [i_0 - 2] [i_0 - 2])));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_0 - 1] [i_4] [i_0 + 2] = arr_3 [i_0 - 2] [i_0 - 2];
                            arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) (unsigned short)11438);
                            arr_17 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) var_3);
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))) || (((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) var_9)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0])) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [5ULL] [i_0] = ((/* implicit */unsigned int) (short)14018);
                            var_17 = ((/* implicit */unsigned short) ((((max((arr_9 [i_0 - 3] [i_1]), (arr_9 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) * (arr_10 [i_0] [2] [i_2] [i_3 - 4])));
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) && (((((/* implicit */_Bool) (signed char)-125)) && (((/* implicit */_Bool) 2253178519U))))))), (((unsigned char) ((arr_6 [i_1] [i_1] [i_3] [i_5]) | (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [(unsigned short)3] [i_3 - 3] [i_5] [i_5])))))));
                            arr_21 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */int) min((arr_11 [i_0 + 2]), ((~(arr_11 [i_0 + 3])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 5617961967284020801ULL))) || (((((/* implicit */_Bool) (unsigned char)67)) || (((/* implicit */_Bool) (unsigned char)207))))));
                            var_20 = arr_5 [i_0 + 1] [i_1];
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)213), ((unsigned char)48))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((min((11563334187043002953ULL), (((/* implicit */unsigned long long int) arr_19 [i_3 - 3] [i_3] [i_3] [i_3 + 1] [i_3 - 3] [i_3] [i_3])))), (((/* implicit */unsigned long long int) max((arr_19 [i_3 - 3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_19 [i_3 - 3] [i_3 - 3] [13ULL] [i_3] [i_3] [(signed char)8] [i_3]))))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) | (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) max((4294967294U), (((/* implicit */unsigned int) (short)22080)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) 
    {
        var_22 = ((129991649966273599ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7 - 1]))));
        var_23 = ((/* implicit */unsigned long long int) ((long long int) -20LL));
    }
    for (long long int i_8 = 3; i_8 < 12; i_8 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7954819609741140718ULL)) && (((/* implicit */_Bool) -75062323)))))) : (min((arr_8 [i_8 - 1] [i_8] [i_8] [i_8 - 1]), (arr_8 [i_8] [i_8] [2] [i_8 + 2])))));
        arr_31 [i_8] [i_8] = ((/* implicit */int) ((9LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((5101054695153911984ULL), (8506750238363900326ULL)))) ? (((/* implicit */unsigned int) arr_5 [i_8] [i_8])) : (max((((/* implicit */unsigned int) -423974747)), (2041788773U)))));
        arr_32 [i_8] = (+(((((/* implicit */_Bool) 18U)) ? (arr_11 [i_8 - 2]) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)0))))));
        /* LoopSeq 3 */
        for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
        {
            var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))), (var_8)));
            var_27 = ((/* implicit */long long int) arr_28 [i_8]);
            arr_37 [i_8] [12U] = ((/* implicit */unsigned long long int) arr_14 [i_9 - 3]);
            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_8] [i_9] [i_9] [i_9 + 1])))) || (((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8 - 2] [i_8]))))), (arr_4 [i_8])));
        }
        for (signed char i_10 = 2; i_10 < 13; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 10; i_11 += 3) 
            {
                var_29 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_8] [i_8 - 1])) || (((/* implicit */_Bool) arr_7 [i_11 - 1] [i_10 - 2] [i_8 - 1] [i_8 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 3) 
                {
                    var_30 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_26 [(unsigned short)9]) | (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8] [i_10] [10ULL] [i_12] [i_10])))))) || (((/* implicit */_Bool) arr_26 [i_11 + 2]))))), (max((min((18287326651917939568ULL), (((/* implicit */unsigned long long int) (unsigned char)182)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_12])) || (((/* implicit */_Bool) arr_30 [i_8] [i_8]))))))));
                    arr_44 [i_8] [i_8] [i_8] [i_12] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (-(611494092U)))), (((4240954424311290293ULL) + (9939993835345651289ULL))))) - (9939993835345651290ULL)));
                }
                for (unsigned int i_13 = 1; i_13 < 13; i_13 += 3) 
                {
                    var_31 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((7831169693456304765ULL) / (arr_46 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [(unsigned short)6])))) || (((/* implicit */_Bool) max((-6539689031031007294LL), (((/* implicit */long long int) (unsigned short)15354))))))));
                    var_32 = ((/* implicit */long long int) arr_36 [i_13] [i_13]);
                    arr_47 [i_10] [i_8] [i_10] [i_10] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_33 [i_8] [i_10 + 1])), (((18316752423743278017ULL) / (12709610489444367207ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_13 - 1] [i_11 - 1] [i_8 - 2] [i_10 + 1])))))))));
                }
                arr_48 [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_13 [i_8 - 2] [i_8] [i_8] [1LL] [i_8]), (arr_13 [i_11 + 2] [i_11] [i_8] [i_8] [i_8])))) % (((/* implicit */int) max((arr_13 [(short)5] [i_10 + 1] [i_8] [i_11 + 1] [i_11 - 1]), (arr_13 [i_8 - 3] [i_10 - 2] [i_8] [i_10 - 1] [i_10 - 2]))))));
                var_33 = ((/* implicit */signed char) ((((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -6LL))))));
            }
            var_34 = ((/* implicit */signed char) ((((129991649966273600ULL) | (((/* implicit */unsigned long long int) 3404559293U)))) == (((/* implicit */unsigned long long int) var_5))));
        }
        for (signed char i_14 = 2; i_14 < 13; i_14 += 4) /* same iter space */
        {
            arr_51 [i_8] = ((/* implicit */signed char) (-(6217832507444206119LL)));
            var_35 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) 6539689031031007299LL)), (9939993835345651288ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14 - 2])))));
        }
    }
    for (unsigned short i_15 = 3; i_15 < 12; i_15 += 3) 
    {
        arr_55 [i_15] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-4028971394778077676LL)))) ? (arr_29 [i_15] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) 10)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_15 - 3])) ? (((/* implicit */int) arr_28 [i_15 - 2])) : (((/* implicit */int) arr_28 [i_15 - 2])))))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6539689031031007285LL)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 7228012361659059281LL)) ? (3317158037U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15])))))))) : (max((((/* implicit */long long int) arr_3 [i_15] [i_15])), (((((/* implicit */long long int) arr_35 [2LL] [2LL])) % (21LL)))))));
    }
    /* LoopNest 2 */
    for (signed char i_16 = 1; i_16 < 20; i_16 += 3) 
    {
        for (unsigned int i_17 = 4; i_17 < 18; i_17 += 2) 
        {
            {
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 18316752423743278036ULL)) || (((/* implicit */_Bool) (signed char)-7))));
                arr_61 [i_17] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-79))));
                arr_62 [i_17] = max((max((min((var_6), (((/* implicit */long long int) arr_60 [17U] [17U])))), (((/* implicit */long long int) arr_56 [i_16 + 1])))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) (unsigned char)46))))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_56 [i_16 + 1])) && (((/* implicit */_Bool) arr_57 [i_16 + 1]))));
            }
        } 
    } 
}

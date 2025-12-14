/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204332
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)245)))) << (((min((var_4), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)252))))))) - (2367483346U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)-61))));
                                arr_14 [i_0] [14] [i_0] = min((((((((/* implicit */_Bool) -1436577361)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-3428592133426978736LL))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_2] [i_1] [i_2] [(signed char)4] [10U] [i_3] [(unsigned short)7])))))), (((/* implicit */long long int) var_12)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) min((max(((short)16582), (((/* implicit */short) var_8)))), (((/* implicit */short) ((_Bool) var_5)))))), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)0))))));
    }
    for (short i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= ((/* implicit */short) arr_12 [i_5 - 1] [i_5] [i_5] [i_5] [(_Bool)0] [i_5 - 2]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_21 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [(unsigned short)9] [7] [(unsigned short)9] [17U])) ? (arr_19 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5] [i_5])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)11))))) : (arr_19 [i_5] [i_5])));
            arr_22 [i_5] [i_6] = ((/* implicit */_Bool) var_1);
        }
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_18 [4U] [i_7] [4U])))))), (arr_16 [i_7])));
                        var_22 = ((/* implicit */long long int) min((((_Bool) min((910237371), (((/* implicit */int) arr_13 [i_5] [9LL] [i_9] [i_5] [6] [6] [i_9]))))), (var_17)));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9))))) ? (max((((/* implicit */long long int) (unsigned short)1)), (arr_19 [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)3578)))))))) - (max((((/* implicit */unsigned long long int) (-(8846175417880190679LL)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) : (arr_5 [i_5]))))))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~((((((_Bool)1) ? (-944157007) : (((/* implicit */int) (unsigned short)42552)))) & (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_8)))))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5 + 1])) & (((/* implicit */int) arr_11 [i_5 + 1]))))), (1ULL))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_35 [i_5] [i_11] [i_10] &= ((/* implicit */short) arr_7 [14ULL] [i_5 + 1] [i_11]);
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_14), (((/* implicit */long long int) arr_34 [i_5] [i_7] [(unsigned char)14] [i_10])))), (((/* implicit */long long int) var_15))))) ? (((((/* implicit */int) arr_33 [i_5 - 1] [(unsigned short)5] [i_10] [i_10])) * (((/* implicit */int) arr_32 [i_5 - 2] [11ULL] [11ULL] [i_11])))) : (((int) (unsigned char)218))));
                        var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))));
                        arr_36 [i_5] [i_5] [i_7] [17ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= (((/* implicit */int) (unsigned short)9390)))))) : (min((14731614665521764540ULL), (((((/* implicit */_Bool) (unsigned char)3)) ? (var_13) : (0ULL)))))));
                    }
                } 
            } 
            arr_37 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_20 [i_7] [(unsigned short)17] [i_5 + 1]), ((unsigned char)246)))) & (((/* implicit */int) max((var_2), (((/* implicit */short) arr_20 [i_5] [i_7] [i_5 + 1])))))));
            var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((/* implicit */int) max((arr_32 [i_5] [i_5] [i_7] [i_5]), (arr_26 [i_5])))) : (((((/* implicit */int) arr_13 [i_5] [(unsigned short)0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5] [10ULL])) >> (((var_4) - (2367483335U)))))))));
        }
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 3) 
        {
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((long long int) 4499063446379371768ULL)), (((/* implicit */long long int) var_9)))))));
            arr_41 [i_5] [(signed char)1] [i_12 + 1] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_5])), (arr_33 [(_Bool)1] [i_12] [i_12 + 1] [i_5]))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(min((min((((/* implicit */int) arr_24 [i_5] [13U])), (-1436577361))), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_7 [i_5] [(unsigned char)8] [(unsigned char)12])) : (((/* implicit */int) var_1)))))))))));
        }
    }
    for (short i_13 = 2; i_13 < 17; i_13 += 1) /* same iter space */
    {
        arr_44 [i_13] = ((/* implicit */_Bool) ((signed char) arr_38 [i_13]));
        var_31 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? ((-(14731614665521764520ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9394)))));
        var_32 += ((/* implicit */unsigned short) ((arr_1 [i_13]) ? (max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9389)) ? (((/* implicit */int) (unsigned char)130)) : (var_3)))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) ^ (-2091195788))))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                {
                    arr_51 [(unsigned char)10] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_16 [i_15]))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_15))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)21))))))))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (signed char)-46))));
                    var_36 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_13 [i_13 - 1] [i_14] [i_15] [(unsigned char)1] [(unsigned short)16] [i_13] [10])))));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-109)))))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (14731614665521764565ULL) : (4499063446379371768ULL)))))) ? (2490145170U) : (var_7)));
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_2 [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_2 [i_16] [i_16] [i_16]))))) ? (min((((/* implicit */unsigned long long int) -1880903884846467188LL)), (4499063446379371780ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)5] [i_16] [i_16]))))))));
        arr_54 [i_16] = ((/* implicit */unsigned short) max((((13947680627330179848ULL) >> (((((int) -251479593)) + (251479611))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_16])) && (((/* implicit */_Bool) arr_8 [i_16] [(unsigned char)7] [i_16] [i_16]))))), (var_6))))));
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), ((-(((arr_5 [i_16]) / (((/* implicit */unsigned long long int) arr_27 [i_16] [i_16] [i_16])))))))))));
    }
}

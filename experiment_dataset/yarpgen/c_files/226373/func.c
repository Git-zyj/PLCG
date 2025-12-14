/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226373
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) | (var_1)));
                            arr_13 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(268435456U)));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1] [i_2] [i_1] [i_1]))) == (max((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_1] [i_1] [3ULL])))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_2] [i_3]))));
                            /* LoopSeq 2 */
                            for (short i_4 = 3; i_4 < 19; i_4 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3877770619939013645ULL)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)238))))) : (((((/* implicit */_Bool) (short)-26926)) ? (((/* implicit */long long int) 978467405)) : (68719476732LL))))))));
                                var_23 = ((/* implicit */int) arr_10 [i_1]);
                                var_24 += max((((((/* implicit */_Bool) 1307026229597266501LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 - 1] [i_4] [(short)19] [i_4 - 1] [i_4]))) : (var_18))), (((/* implicit */unsigned long long int) max((arr_4 [i_4 - 2] [i_2]), (arr_4 [i_4 - 3] [i_2])))));
                            }
                            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (8911884736318789107ULL)));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (14568973453770537980ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2]))) : (var_1))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (arr_16 [14] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) min((-2005399641), (((/* implicit */int) arr_4 [i_0] [i_2])))))))))))));
                                var_26 &= ((/* implicit */int) (!((_Bool)1)));
                            }
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((min((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_1]))), (((((/* implicit */_Bool) -16LL)) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                arr_27 [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)127)), (6335272165624733105LL)))) ? (((unsigned long long int) 2312087795U)) : (min((((/* implicit */unsigned long long int) (signed char)-96)), (6920588208156390481ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_6] [i_6] [i_6])) & (((/* implicit */int) (signed char)95))))) ? ((+(var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) / (3586514669U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_28 [i_7]))))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_28 [i_8 - 1]))))));
                            arr_32 [i_6] [i_9] [i_8 - 1] [i_9] = ((/* implicit */short) min((max((((/* implicit */long long int) arr_30 [12U] [i_9] [i_9] [i_9 - 1])), (-7124635568686533900LL))), (((/* implicit */long long int) ((int) ((((/* implicit */int) (short)5989)) >= (((/* implicit */int) (unsigned short)40589))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_17), (((/* implicit */signed char) var_9)))))) + (min((((/* implicit */unsigned long long int) -3082447056040732620LL)), (15106786061565491768ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((var_6) ? (((((/* implicit */_Bool) 906871326U)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_6] [(short)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) arr_23 [i_6])) & (arr_21 [i_6])))));
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1611702881)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10777))) : (1557206272U)))), (((((/* implicit */_Bool) (+(arr_22 [i_7])))) ? (((((/* implicit */_Bool) (short)14750)) ? (13455786192762752178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3584))))) : (((/* implicit */unsigned long long int) max((2062343679), (((/* implicit */int) arr_28 [i_6])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((2065813126) >> (((((/* implicit */int) (short)3163)) - (3147))))) & (((/* implicit */int) (unsigned short)56269))));
                                var_33 = ((/* implicit */short) min((min((max((arr_37 [i_6] [i_6] [15] [i_6] [20LL]), (((/* implicit */long long int) (unsigned char)108)))), (((/* implicit */long long int) ((var_19) <= (((/* implicit */unsigned long long int) 810670108U))))))), (((/* implicit */long long int) (+((+(((/* implicit */int) var_15)))))))));
                                arr_41 [i_6] [i_7] [i_7] [i_6] [i_11] [i_7] [i_12] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) max((4509136177827348211ULL), (((/* implicit */unsigned long long int) -1422323745212074721LL))))))));
                                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3594413742U)) ? (5545787256972732741LL) : (((/* implicit */long long int) arr_23 [23ULL]))))) ? (((/* implicit */int) ((unsigned char) 14561854565048036627ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) 369646413U))))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_7))));
                }
                for (unsigned short i_13 = 2; i_13 < 23; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                var_36 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) / (13757936521100685406ULL)))));
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6]))))), (((/* implicit */long long int) arr_35 [i_13] [15ULL] [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 1]))))) ? (270215977642229760ULL) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) & (((/* implicit */int) var_17))))) : (arr_47 [i_6] [i_6])))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) var_6);
                }
                for (int i_16 = 1; i_16 < 23; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        arr_57 [i_6] [i_7] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) (~(1598807968)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3993682046U)) ? (((/* implicit */int) (short)27536)) : (295726413)))) : (((unsigned long long int) (short)8187))))));
                        var_39 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (-5545787256972732722LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_16 + 1] [i_16 - 1] [i_16 + 1]))))));
                        arr_58 [i_16] [i_16] [i_16] [3ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (arr_43 [i_6] [i_6] [18ULL])))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 1273857765)) : (arr_37 [i_6] [i_6] [i_6] [0LL] [i_6]))) : (((/* implicit */long long int) 2676380038U))))) % (((((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_17])) ? (10490653661365499093ULL) : (((/* implicit */unsigned long long int) 686473939))))));
                    }
                    for (short i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        var_40 = ((/* implicit */int) arr_60 [i_6] [i_16] [i_16] [i_18]);
                        arr_62 [i_7] |= ((/* implicit */unsigned long long int) var_16);
                    }
                    arr_63 [(unsigned char)6] [i_16] [i_16] = ((/* implicit */unsigned long long int) max((-5545787256972732727LL), (((/* implicit */long long int) 1040384))));
                }
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    var_41 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (unsigned short)36513)), (((((/* implicit */_Bool) 1175037098101886195ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28119))) : (1175037098101886195ULL))))), (((/* implicit */unsigned long long int) (unsigned char)135))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)256))))), (var_8))))));
                                var_43 = max((min((max((5545787256972732721LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)12955)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1143))) ^ (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_50 [i_6] [i_7] [i_21]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_22 = 1; i_22 < 23; i_22 += 4) 
                {
                    for (int i_23 = 3; i_23 < 20; i_23 += 3) 
                    {
                        {
                            arr_76 [i_23] = ((/* implicit */unsigned short) (((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (0LL))))) == (((/* implicit */long long int) 268435456U))));
                            var_44 += ((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), (arr_67 [i_6] [12U] [i_6] [i_6] [i_6] [i_6])));
                            arr_77 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (var_2)))) + (((/* implicit */int) ((arr_37 [i_6] [i_7] [i_6] [i_6] [i_23 + 2]) > (((/* implicit */long long int) 1157638791U)))))))) ? (arr_31 [i_6] [i_6]) : (((/* implicit */long long int) -286685447))));
                            var_45 = (+(((0LL) + (((/* implicit */long long int) min((((/* implicit */int) (short)7400)), (201834464)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 2; i_24 < 23; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        {
                            arr_82 [i_24] [i_7] [i_24] [21U] [i_24] [i_7] = ((/* implicit */short) arr_74 [i_6] [i_7] [i_24] [8LL] [i_25]);
                            var_46 = (~(((/* implicit */int) (short)-8477)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) min((var_5), (var_5)))) ? (max((((/* implicit */long long int) var_11)), (var_3))) : (max((var_5), (((/* implicit */long long int) var_10)))))) : (var_3)));
}

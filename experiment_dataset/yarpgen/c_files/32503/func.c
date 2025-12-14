/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32503
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
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-((+(1863038171)))));
                var_14 = ((/* implicit */signed char) (-(417041425U)));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */short) arr_3 [i_2] [(_Bool)1] [i_2]);
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((signed char) max((882806386U), (((/* implicit */unsigned int) arr_6 [i_2])))))) ? ((-(var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3877925870U)))))))));
            var_16 ^= max((((var_12) & (((/* implicit */long long int) ((3877925859U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-25635)))))))), (((/* implicit */long long int) ((417041431U) < (((((/* implicit */_Bool) 3412160902U)) ? (3877925884U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23944)))))))));
            var_17 = ((/* implicit */unsigned long long int) ((((((2752102084U) >> (((((/* implicit */int) (unsigned char)192)) - (184))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_3])))))) & (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 882806386U))) & (var_3))))));
        }
        for (int i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-65))))), (((((/* implicit */_Bool) 2012855312U)) ? (arr_7 [1U] [1U]) : (2012855312U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-23944), (((/* implicit */short) var_0)))))) - (arr_7 [(short)5] [i_2])))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((unsigned int) (~((+(arr_3 [0U] [i_4] [i_5]))))));
                var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3877925870U)) ? (((/* implicit */long long int) 884486579U)) : (arr_4 [7])))), (((unsigned long long int) 3601480004U)))) > (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) -2030905219)) ? (417041406U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))))));
            }
            arr_17 [i_2] [i_2] |= ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((3412160936U), (3877925866U)));
                        arr_26 [(unsigned char)10] [i_4] [13U] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_23 [(unsigned char)6] [9U] [9U] [i_6] [i_7] [i_7])))));
                        var_22 = ((/* implicit */int) ((arr_11 [i_4]) ? (((/* implicit */unsigned long long int) 2047689458)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3877925850U) : (3412160909U)))) ? (((/* implicit */unsigned long long int) ((long long int) 2282111965U))) : (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_4))))))));
                        var_23 = ((((/* implicit */int) ((unsigned short) var_3))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_7 - 1]))))));
                        var_24 = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_25 = ((/* implicit */long long int) (+(var_4)));
            arr_31 [i_8] [9LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_2] [i_8]))) ? ((+(var_12))) : (((/* implicit */long long int) arr_21 [(signed char)2] [i_8] [i_2] [i_2]))));
            arr_32 [2ULL] = ((/* implicit */int) (-(((var_7) & (var_6)))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) (((+(arr_21 [i_9] [i_9] [i_9] [i_9]))) <= (((var_9) & (((/* implicit */int) var_0))))));
        var_27 = ((/* implicit */unsigned short) ((((long long int) var_12)) / (((/* implicit */long long int) 882806359U))));
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        arr_39 [i_10] [9U] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_10] [i_10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_36 [i_10] [i_10])), (var_7))))))));
        arr_40 [i_10] [i_10] = max((((((/* implicit */_Bool) var_12)) ? (arr_38 [i_10]) : (((/* implicit */unsigned long long int) max((882806386U), (((/* implicit */unsigned int) (signed char)84))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 3877925870U)) <= (1428611723170501019ULL)))) : (((int) (signed char)-10))))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_36 [i_10] [i_10]))))) << (((((/* implicit */int) var_8)) + (94)))))) ? (var_12) : (var_12)));
        arr_41 [i_10] = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_10] [i_10])))))))) << ((((-(((var_10) ? (((/* implicit */int) arr_37 [i_10] [i_10])) : (((/* implicit */int) var_8)))))) - (73))));
        var_29 ^= ((/* implicit */short) -275405907);
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
        {
            arr_47 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_37 [i_11] [i_11]))) ? (((/* implicit */long long int) min((882806398U), (((/* implicit */unsigned int) -1172941221))))) : (var_12)));
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((1726822694715061551ULL) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_46 [i_11] [i_12] [i_11])), (arr_45 [i_11])))))))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_43 [i_11]))))) << (((-1172941221) + (1172941248)))))))))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(signed char)10] [i_12]))) + (((var_10) ? (max((arr_38 [i_12]), (((/* implicit */unsigned long long int) 3877925866U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(unsigned char)8] [i_12]))) <= (var_7)))))))));
            var_33 -= ((/* implicit */long long int) arr_45 [i_11]);
        }
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) arr_44 [i_13] [i_13])))), (var_9))) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [(unsigned char)17] [i_13] [i_13])) ? (1726822694715061551ULL) : (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
            var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) -1273953344)) ? (arr_38 [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) < (((unsigned long long int) 1726822694715061558ULL))));
        }
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */_Bool) var_9);
            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_38 [i_11])))) || ((((!(((/* implicit */_Bool) arr_37 [i_11] [i_14])))) || (((/* implicit */_Bool) var_3))))));
            /* LoopSeq 3 */
            for (int i_15 = 2; i_15 < 14; i_15 += 4) 
            {
                var_38 = ((/* implicit */int) ((var_7) << (((var_11) - (1056755520)))));
                arr_56 [i_15] [i_14] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_51 [5ULL] [i_15 - 1] [i_15])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1726822694715061560ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 882806351U)))))));
                arr_57 [i_11] [(unsigned short)13] [i_11] = ((/* implicit */unsigned int) var_12);
                var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) ((unsigned long long int) arr_42 [i_15 + 1]))) ? (((((/* implicit */_Bool) arr_42 [i_15 - 1])) ? (var_2) : (((/* implicit */int) arr_42 [i_15 - 1])))) : (((((((/* implicit */int) arr_42 [i_15 + 2])) + (2147483647))) << (((((var_9) + (1365881675))) - (8)))))))));
            }
            for (short i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
            {
                arr_60 [i_16] [i_14] [i_14] [i_16] = ((/* implicit */signed char) 4282823716U);
                arr_61 [i_11] [(signed char)10] [i_16] |= ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_46 [i_11] [i_14] [i_16])) || (((/* implicit */_Bool) var_3)))))))));
            }
            for (short i_17 = 1; i_17 < 15; i_17 += 4) /* same iter space */
            {
                arr_64 [i_11] [i_14] [i_14] [i_17] = ((/* implicit */unsigned short) 612254742307533230LL);
                var_40 -= ((/* implicit */unsigned int) (signed char)-104);
                /* LoopSeq 1 */
                for (int i_18 = 1; i_18 < 15; i_18 += 2) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_11] [i_17 + 2] [i_18 + 1] [i_18]))) + (16719921378994490052ULL))) >> (((((/* implicit */_Bool) arr_58 [(unsigned short)14] [16] [i_17] [i_18 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1085052334U)))));
                    var_42 = ((/* implicit */long long int) arr_62 [i_11] [i_14] [i_17] [i_18]);
                }
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (max((var_7), (((/* implicit */unsigned long long int) 1085052313U))))))))))));
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((var_10) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_44 [5] [i_14])))) * (((/* implicit */int) ((((/* implicit */_Bool) 3877925871U)) && (((/* implicit */_Bool) var_11)))))))))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_19 = 2; i_19 < 15; i_19 += 1) 
        {
            var_45 = ((/* implicit */long long int) (signed char)65);
            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((((/* implicit */_Bool) 1085052308U)) && (((/* implicit */_Bool) arr_46 [i_19 + 1] [i_19 - 2] [i_19 + 1])))))));
            var_47 = ((/* implicit */short) 10305612955308382415ULL);
        }
        var_48 = ((/* implicit */signed char) var_3);
        var_49 = ((/* implicit */int) min((8141131118401169218ULL), (((/* implicit */unsigned long long int) (-(12143560U))))));
    }
    var_50 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-66))))), (var_11))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (7992770358037787296LL)))) ? (((/* implicit */int) ((signed char) 1800323544))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39859
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
    var_11 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) max(((unsigned short)19007), (var_4))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        var_12 = ((((/* implicit */_Bool) (unsigned short)10594)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) : (((arr_6 [i_0] [i_0] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34289))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_3] [i_4 - 2] [i_3] [i_2] [i_1] [i_3])))) >> (((((/* implicit */int) arr_4 [i_4])) - (16572))))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11870)) ? (arr_6 [i_4 + 3] [i_3 + 3] [i_2 - 2]) : ((~(5563070683132227245LL)))));
                            arr_14 [7LL] [i_1] [i_2 + 1] [i_1] [i_0] = (unsigned short)48711;
                        }
                        arr_15 [6LL] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14336))) : (5563070683132227248LL)))));
                        arr_16 [i_2] [i_3] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1113531379462735760LL)))) || (((/* implicit */_Bool) var_0))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_5] = -3333128621371402206LL;
                        var_14 = ((/* implicit */unsigned short) ((min((((1398488642131413708LL) - (arr_6 [i_0] [(unsigned short)8] [i_0]))), (arr_17 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16531)))));
                        /* LoopSeq 4 */
                        for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (max((((/* implicit */long long int) (unsigned short)12528)), (3546629943419008745LL)))));
                            arr_25 [i_0] [i_1] [(unsigned short)7] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_1] [11LL] [i_2 + 1] [i_1] [i_5] [i_6]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50556))))) : (9223372036854775807LL)))) || (((/* implicit */_Bool) var_4))));
                        }
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_16 = (~(-9169211583539219053LL));
                            var_17 &= (((+(9223372036854775807LL))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_5]), (arr_4 [i_5]))))));
                            arr_30 [i_0] [i_1] [i_2 + 1] [i_1] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_2 - 1] [i_5] [i_5]))))), ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)))))));
                            arr_31 [i_1] [i_1] [5LL] [i_5] [i_7] = -3333128621371402206LL;
                            var_18 = arr_4 [i_1];
                        }
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            arr_35 [i_1] [i_5] [i_1] [i_1] [13LL] [i_1] = ((/* implicit */unsigned short) var_5);
                            arr_36 [i_1] [i_2] = ((/* implicit */unsigned short) arr_12 [(unsigned short)15]);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65520)) != (((/* implicit */int) ((5563070683132227245LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)510)) != (((/* implicit */int) (unsigned short)52921))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        var_21 = (+((-9223372036854775807LL - 1LL)));
                        arr_43 [i_1] [i_10 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (var_4)));
                    }
                    arr_44 [i_1] [i_1] [i_1] = min(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_2]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_48 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1851986349583949134LL) : (var_1))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)543)) * (((/* implicit */int) ((unsigned short) arr_27 [i_0] [14LL] [i_1] [i_2] [i_2] [i_11])))));
                    }
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((((/* implicit */_Bool) min(((unsigned short)44585), (arr_34 [i_2 - 2])))) ? (((arr_19 [i_2] [i_2 - 3] [i_2] [i_2 - 3]) / (arr_19 [(unsigned short)0] [i_2 - 2] [i_2] [i_2 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_34 [i_2 - 2]), (arr_34 [i_2 + 1]))))));
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43080)) || (((/* implicit */_Bool) (unsigned short)65510))))) * (((/* implicit */int) var_4))));
                    }
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (9223372036854775785LL)));
                        arr_54 [i_2] [i_2] [i_2] [i_1] [i_2] [(unsigned short)4] = var_5;
                        arr_55 [i_1] [i_1] [i_13] = (-9223372036854775807LL - 1LL);
                        arr_56 [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                    }
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                    {
                        var_27 -= (unsigned short)65531;
                        var_28 = ((/* implicit */unsigned short) var_5);
                    }
                    arr_60 [i_1] [i_1] [i_2] [(unsigned short)15] = (unsigned short)31073;
                }
            } 
        } 
    } 
}

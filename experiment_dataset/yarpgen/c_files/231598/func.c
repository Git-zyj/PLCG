/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231598
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
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)70)) << ((((~(min((2097120), (((/* implicit */int) (unsigned char)179)))))) + (195)))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned char) var_12)))));
                arr_6 [i_0] [i_0] = ((int) ((((arr_4 [i_0] [i_0] [5]) + (2147483647))) << (((((arr_4 [i_1] [i_0] [i_0]) + (766561132))) - (25)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_2])) ? (arr_15 [i_2] [i_2] [(unsigned char)2]) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_4)) : (-647558975)))))) ? (max((((/* implicit */int) max(((unsigned char)184), (var_5)))), ((+((-2147483647 - 1)))))) : (-20));
                        var_19 = ((/* implicit */int) max((var_19), (arr_10 [i_2] [i_4])));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4] [i_2])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned char)0)))), ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) 971290553)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)242)))) : ((+(((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) var_3))));
                        var_21 -= ((/* implicit */unsigned char) ((((min((((/* implicit */int) arr_2 [i_2])), (arr_13 [4]))) / (((/* implicit */int) (unsigned char)255)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)221))) ? (((/* implicit */int) ((unsigned char) (unsigned char)21))) : (((/* implicit */int) (unsigned char)32))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_2] [i_3])))) ? (((((/* implicit */int) (unsigned char)219)) & (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 247870147)) ? (((/* implicit */int) (unsigned char)9)) : (2015249088))))))));
                        arr_22 [i_2] [i_4] [i_4] [i_3] [i_2] [i_2] = max(((unsigned char)242), ((unsigned char)130));
                    }
                    arr_23 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (((int) arr_13 [i_3]))));
                    var_22 = ((unsigned char) max(((-2147483647 - 1)), (((((/* implicit */_Bool) 16320)) ? (2147483647) : (-1588432020)))));
                    var_23 += ((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_17 [i_2] [i_4])), (var_14))));
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    arr_26 [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) (-2147483647 - 1));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((arr_5 [i_2] [6] [i_7]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        arr_29 [i_3] [i_3] [i_7] [(unsigned char)0] [i_2] [i_7] = ((/* implicit */unsigned char) max(((-2147483647 - 1)), (((((/* implicit */_Bool) var_7)) ? (((var_6) - (arr_8 [i_2] [i_3]))) : (2147483647)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_25 = (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (((/* implicit */int) ((unsigned char) -488268880))));
                            var_26 = ((((/* implicit */int) (unsigned char)147)) & (((2147483647) & (arr_25 [i_8 + 1] [i_8] [i_8] [i_8]))));
                            arr_32 [4] [i_3] [i_2] [i_3] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned char) arr_7 [i_2] [i_9]);
                            var_27 ^= min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_27 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])) : (2147483633))));
                        }
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_3 [i_2] [i_2]))));
                        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)248)) / (((/* implicit */int) (unsigned char)242))));
                        arr_33 [i_2] [i_2] [i_2] [(unsigned char)8] = ((int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((-82287541) + (82287564)))))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_9)) - (112))))) : (((((/* implicit */_Bool) 8388480)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_28 [i_8 + 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        arr_38 [i_2] [i_2] [i_7] [i_2] [i_7] = ((/* implicit */int) (unsigned char)222);
                        arr_39 [i_7] [i_7] |= ((/* implicit */unsigned char) min((1902977321), (max((((/* implicit */int) (unsigned char)10)), (-2147483647)))));
                        arr_40 [i_2] [i_3] [i_3] [i_10] = ((((((/* implicit */_Bool) min((0), (((/* implicit */int) arr_11 [i_2] [i_3] [(unsigned char)11]))))) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (!(((/* implicit */_Bool) 200157556))))))) + (-52979853));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)235))));
                    }
                }
                arr_41 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_34 [(unsigned char)7] [i_3] [i_3] [i_3] [(unsigned char)7]);
                var_31 ^= (unsigned char)147;
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) != (((((/* implicit */_Bool) -2015249084)) ? (((int) var_0)) : (((/* implicit */int) var_8)))))))));
    var_33 = (~(((((((/* implicit */int) (unsigned char)112)) == (4194240))) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) var_5)))));
}

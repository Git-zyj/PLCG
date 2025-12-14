/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189765
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(short)20])) && (((/* implicit */_Bool) var_3)))));
                var_14 *= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                var_15 += ((/* implicit */_Bool) min((min(((short)-5686), (((/* implicit */short) (!((_Bool)1)))))), (((/* implicit */short) var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_8)))))))))));
                arr_10 [21] = ((/* implicit */unsigned char) max((((/* implicit */short) var_7)), (((short) arr_2 [i_2 + 1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = (_Bool)1;
                        arr_18 [i_5] = ((/* implicit */short) (!(arr_6 [i_2 + 1])));
                    }
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((int) arr_1 [(_Bool)1] [(_Bool)1])))));
                            var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) - (arr_21 [(short)6] [(short)6]))) >= (((/* implicit */int) ((short) var_0)))));
                            var_20 *= arr_2 [i_2 + 2];
                        }
                        var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_2 + 1] [i_3] [i_4 + 2] [i_4 + 1]))));
                        var_22 &= ((((/* implicit */int) arr_16 [i_2 + 3] [i_4 + 1] [i_4 + 1] [i_6])) / (arr_17 [i_2 + 1] [i_4 - 2] [i_2 + 1]));
                    }
                    arr_25 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((arr_21 [i_4 - 2] [i_3]) ^ (arr_21 [i_4 + 2] [i_4 - 2])));
                    arr_26 [(short)14] = ((/* implicit */_Bool) ((arr_14 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4 + 2]) ? (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4 + 2])) : (((/* implicit */int) var_7))));
                }
                for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_29 [i_2] &= (!(arr_6 [i_2 + 3]));
                    var_23 = ((short) max((min((((/* implicit */int) var_12)), (var_0))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [(unsigned char)19] [(unsigned char)9])) : (((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 2]))))));
                }
                for (int i_9 = 4; i_9 < 21; i_9 += 3) 
                {
                    var_24 = min((((short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))), (((/* implicit */short) arr_4 [i_2 - 1] [i_2 - 1] [(short)3])));
                    arr_32 [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [(_Bool)1] [(short)0] [(short)0] [i_10] = ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) arr_13 [i_2 + 1] [i_9 - 3])));
                        var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_34 [i_2 - 2] [i_3] [i_9 + 1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_9 + 2])) : (((/* implicit */int) (_Bool)1)))) >= (((arr_15 [(_Bool)1] [i_9 + 1] [i_3] [(unsigned char)13]) ? (((/* implicit */int) arr_20 [i_10] [(unsigned char)18] [i_10] [(unsigned char)18])) : (arr_9 [(short)15] [(_Bool)1] [(short)12])))));
                        var_26 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_11))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_27 += ((/* implicit */_Bool) ((((((((/* implicit */int) min((arr_2 [i_2 - 1]), (((/* implicit */short) var_1))))) + (((/* implicit */int) max((arr_34 [(_Bool)1] [(short)15] [(_Bool)1] [(_Bool)1] [i_2 - 2]), (arr_23 [i_3])))))) + (2147483647))) << (((((((/* implicit */int) min(((short)-13838), (((/* implicit */short) (unsigned char)255))))) + (13865))) - (27)))));
                        var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_28 [i_9 - 1] [i_11 + 1] [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-2435)) <= (-463355163)))) : (((/* implicit */int) max((arr_23 [i_2]), (arr_28 [i_9 + 2] [i_11 + 1] [i_3]))))));
                        var_29 = ((/* implicit */_Bool) var_10);
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_30 *= ((/* implicit */unsigned char) ((_Bool) ((_Bool) (+(((/* implicit */int) var_10))))));
                            arr_45 [i_2] [i_12] [i_12] [i_11 - 1] [i_12] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_8)) & (-1851707135))))) : (max((((((/* implicit */int) arr_31 [i_2] [i_3] [i_2] [i_2])) << (((((/* implicit */int) arr_2 [i_12 - 1])) + (12236))))), (((/* implicit */int) arr_34 [i_2 - 2] [(_Bool)1] [i_9 - 2] [i_2 + 1] [(_Bool)1]))))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-30467)))))));
                        }
                    }
                    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        var_32 = (~(((arr_14 [i_13 - 1] [i_13 - 1] [i_13 + 2] [i_9 + 1]) ? (((/* implicit */int) arr_34 [i_13] [i_3] [i_13 - 2] [i_13 + 3] [(unsigned char)7])) : (((/* implicit */int) arr_14 [i_13 - 1] [i_9 - 2] [i_13 - 1] [i_9 - 2])))));
                        var_33 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_12 [i_2 + 1])) - (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 21; i_15 += 3) 
                        {
                            var_34 *= ((/* implicit */unsigned char) ((int) arr_11 [i_9] [i_3] [i_2 + 2]));
                            arr_53 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)71)))))));
                        }
                        var_35 = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_3] [i_2 + 3] [i_3]))));
                        var_36 = (+(((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 1])));
                        arr_54 [i_2] [9] [21] = ((/* implicit */_Bool) arr_8 [(_Bool)1] [i_9 + 1]);
                    }
                    arr_55 [i_2 - 1] [i_2 - 1] [i_9 - 3] [i_3] = ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((short) ((unsigned char) arr_38 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1] [(unsigned char)3])))));
                }
                arr_56 [(_Bool)1] [i_3] [(short)20] = ((/* implicit */short) ((unsigned char) max((min((-276206893), (((/* implicit */int) var_10)))), (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                for (short i_16 = 3; i_16 < 19; i_16 += 1) 
                {
                    var_37 *= ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_2] [i_3] [i_3] [i_3] [i_2 - 2]))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) max((arr_33 [i_2 + 2] [i_2 + 1] [(short)19]), (arr_33 [i_2] [i_2 + 1] [(_Bool)1])))) ^ (((((/* implicit */_Bool) arr_33 [(unsigned char)9] [i_2 + 1] [20])) ? (((/* implicit */int) arr_33 [i_2 + 3] [i_2 + 1] [i_16 - 3])) : (((/* implicit */int) arr_33 [(unsigned char)21] [i_2 + 1] [(unsigned char)3]))))));
                    var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((short) var_11)), (((/* implicit */short) ((_Bool) var_2))))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_40 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_16 [i_2 + 1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) == (((/* implicit */int) arr_34 [(short)6] [(short)20] [i_17] [(short)5] [(short)20])))) ? (((/* implicit */int) arr_48 [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_4 [(_Bool)1] [(unsigned char)18] [i_2 + 1])))) ^ (((/* implicit */int) arr_40 [7] [(_Bool)1] [i_2 + 1] [7] [i_2]))));
                    var_41 -= ((/* implicit */short) ((unsigned char) (_Bool)1));
                }
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    var_42 -= ((/* implicit */short) arr_35 [i_2 - 2] [18] [i_18]);
                    arr_63 [(short)6] [(short)5] [i_18] = arr_2 [i_3];
                }
            }
        } 
    } 
    var_43 &= ((((((/* implicit */int) (!(var_6)))) & ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))) | (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))));
}

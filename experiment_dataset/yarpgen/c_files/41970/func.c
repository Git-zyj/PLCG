/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41970
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57006))) : (((((/* implicit */_Bool) (unsigned short)57009)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_1]))))) | (3132579551U));
                var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-3)), (3U)))) ? (((((/* implicit */int) min((var_9), (var_8)))) / (((var_6) * (((/* implicit */int) (signed char)4)))))) : (var_6))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_11)))))) : (((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (arr_5 [i_2] [i_2] [i_2 - 1] [i_2])))) ? (var_10) : (((/* implicit */int) var_4))));
                        arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20647))))) ? (((int) (_Bool)0)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-3)), (arr_3 [i_0])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (min((var_7), (var_10))))));
                        arr_11 [i_2 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) >= (((0) & (var_3))))) ? (((int) var_5)) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((((_Bool)1) ? (arr_9 [i_0]) : (((/* implicit */int) (unsigned short)16879))))))));
                        arr_12 [i_0] = ((/* implicit */_Bool) var_8);
                    }
                }
                for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_4]), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    var_15 = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((var_8), (var_5)))), (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */int) ((_Bool) var_1));
                        arr_22 [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) var_9));
                    }
                    arr_23 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) && (((/* implicit */_Bool) ((var_7) % (((/* implicit */int) (unsigned short)49104)))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_11))));
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (min((((/* implicit */int) var_1)), (arr_24 [i_0] [i_1] [i_7]))) : ((-(((/* implicit */int) (unsigned short)49104))))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_7])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8528)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (signed char)-41))))) ? (arr_24 [i_0] [i_1] [i_7]) : (((((/* implicit */_Bool) 1573938745U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_33 [i_9] [i_9] [i_7] [i_8] [i_9] [i_1] = min((((/* implicit */int) ((unsigned short) var_8))), (min((4), (max((((/* implicit */int) var_0)), (var_3))))));
                                var_19 = ((/* implicit */_Bool) ((((((int) -1205824339)) + (2147483647))) >> (((((var_2) ? (3128771700U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8] [i_1] [i_7]))))) - (4294967267U)))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((min((min((var_6), (((/* implicit */int) var_11)))), ((-(var_3))))) * (((/* implicit */int) (!(var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((2721028555U) % (((/* implicit */unsigned int) -2030814907)))) >> (((1843477903U) - (1843477903U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) (unsigned short)65510))), (arr_20 [i_0] [i_1] [i_7] [i_10]))))))))));
                        arr_37 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_4)) : (min((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_7] [i_10])))), (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            arr_40 [i_10] [i_1] [i_7] [i_7] [i_10] [i_10] [i_1] = (+(((((/* implicit */int) arr_17 [i_0] [i_1] [i_1])) / (var_10))));
                            arr_41 [i_0] [i_10] [i_7] [i_7] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) min((arr_8 [i_0] [i_1] [i_10] [i_12]), (((/* implicit */signed char) arr_16 [i_12])))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_7] [i_10] [i_0]))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((var_1) ? (0) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((int) (_Bool)1)))))))));
                            arr_44 [i_10] [i_10] [i_1] [i_7] [i_10] [i_7] [i_12] = 1205824318;
                            arr_45 [i_12] &= ((/* implicit */signed char) min((((unsigned short) ((var_10) ^ (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_9))))))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_42 [i_0] [i_1] [i_7])))) ? (((/* implicit */int) arr_8 [i_1] [i_7] [i_10] [i_12])) : (((/* implicit */int) max((var_11), (arr_39 [i_12] [i_12] [i_12] [i_10] [i_12])))))), (((/* implicit */int) ((unsigned short) -363174578))))))));
                        }
                        arr_46 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3537892835U)) ? (((/* implicit */int) (unsigned short)47362)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)27455)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned short)18173)))) : (-14)))) ? (((/* implicit */int) (unsigned short)18170)) : (((int) (!(((/* implicit */_Bool) var_9)))))));
                        var_25 = ((((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_11)))) < (((/* implicit */int) (unsigned short)42338)))) ? (((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */int) var_2)))) / (((/* implicit */int) (signed char)-118)))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)45568)) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)18184)) : (((/* implicit */int) var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_50 [i_0] [i_1] [i_7] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-118))))) ? ((((_Bool)1) ? (var_6) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_0))))));
                        arr_51 [i_0] [i_0] [i_0] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) var_10);
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 4; i_14 < 20; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29579)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) var_4)))))));
                            arr_56 [i_14] [i_14] = ((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_14]);
                            arr_57 [i_7] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_14 + 1] [i_14] [i_14] [i_14 - 2])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_35 [i_14 + 1] [i_14] [i_14] [i_14 + 2]))));
                            arr_58 [i_0] [i_0] [i_1] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                            arr_59 [i_1] [i_14] [i_13] [i_13] [i_14 + 1] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)));
                        }
                        for (unsigned int i_15 = 3; i_15 < 20; i_15 += 2) 
                        {
                            arr_62 [i_0] [i_0] [i_7] [i_13] [i_0] [i_15] = ((/* implicit */unsigned short) var_7);
                            arr_63 [i_15] [i_1] [i_15] [i_13] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_60 [i_13] [i_15 - 1] [i_7] [i_0] [i_15] [i_7]))));
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)47201))));
                            arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_0));
                            arr_65 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)27455)) ? (((((/* implicit */_Bool) arr_39 [i_7] [i_7] [i_7] [i_13] [i_15])) ? (var_3) : (((/* implicit */int) (unsigned short)29605)))) : (((/* implicit */int) var_4))));
                        }
                        for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)62904)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned short)29047)) ? (((/* implicit */unsigned int) var_10)) : (1401604355U)))));
                            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */int) (signed char)-5)) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)35957)) != (((/* implicit */int) (_Bool)0)))))))));
                            arr_70 [i_16] [i_13] [i_7] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_39 [i_16] [i_1] [i_7] [i_13] [i_1]))));
                            var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_2)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_17 = 1; i_17 < 21; i_17 += 4) 
                    {
                        arr_73 [i_0] [i_0] [i_0] [i_1] [i_7] [i_17] = (!(((/* implicit */_Bool) (((_Bool)0) ? (1010721939) : (((/* implicit */int) (_Bool)1))))));
                        arr_74 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)43711)) ? (((/* implicit */int) var_8)) : (arr_47 [i_1] [i_1] [i_7] [i_17]))) : (((/* implicit */int) arr_54 [i_17] [i_17] [i_17 + 1] [i_17 - 1] [i_17] [i_17] [i_17])));
                    }
                    arr_75 [i_0] [i_0] [i_0] = var_1;
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42865)) && (((/* implicit */_Bool) 3389689673U))));
    /* LoopNest 2 */
    for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            {
                arr_83 [i_18] [i_18] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) var_10)) - (905277622U)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) (!(arr_36 [i_19] [i_19] [i_18] [i_18])))) : (min((var_10), (((/* implicit */int) arr_42 [i_19] [i_19] [i_19])))))) : (((/* implicit */int) var_11)));
                var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) ((((_Bool) arr_47 [i_19] [i_19] [i_18] [i_18])) ? ((+(((/* implicit */int) (signed char)6)))) : (((/* implicit */int) min((arr_28 [i_18] [i_18] [i_18] [i_19]), (var_2))))))) ? (min((((((/* implicit */_Bool) (unsigned short)24092)) ? (((/* implicit */int) var_9)) : (var_7))), (((/* implicit */int) min((var_5), (var_4)))))) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
}

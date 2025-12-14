/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24869
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [2U] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_3] [i_1])), (15U))))))), (arr_0 [i_0] [i_1]));
                            var_15 = max((((/* implicit */unsigned int) ((_Bool) (unsigned char)28))), (arr_2 [i_0]));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [5U])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)20))))) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])), (1581738919))))) : (((((/* implicit */_Bool) 1411649520920197085LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (arr_10 [13LL] [i_4] [i_4 - 3] [i_4] [i_4 - 2])))));
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [6ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (-(2965681460U)))))));
                                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 - 2])) || (((/* implicit */_Bool) arr_3 [i_4 - 2]))))), (((((/* implicit */_Bool) min((var_1), (((/* implicit */int) (signed char)60))))) ? (max((2703893448U), (((/* implicit */unsigned int) var_6)))) : ((~(242947112U)))))));
                                var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            }
                            for (short i_5 = 3; i_5 < 15; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -7372060227677733206LL)) && (((/* implicit */_Bool) arr_18 [i_5] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1554031113)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1329285841U)))) : (((((/* implicit */_Bool) 274439734201436978LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))))));
                                arr_19 [i_5] [4ULL] [i_0] [i_1] [i_5] = max((((/* implicit */unsigned char) arr_12 [i_5 - 3] [i_5 + 2] [0U])), (min(((unsigned char)219), (((/* implicit */unsigned char) arr_12 [i_5 - 1] [i_5 + 3] [i_5])))));
                            }
                            var_19 = ((/* implicit */_Bool) ((signed char) min((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_1 [i_1] [i_3])))));
                            arr_20 [(short)9] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-131072)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_0] [i_0] [i_1] [i_0] [i_0])))))) ? (((/* implicit */int) arr_7 [6ULL])) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)36)), (arr_9 [i_0] [i_1] [i_1])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_13))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1411649520920197085LL)))) || (((/* implicit */_Bool) max((arr_2 [i_1]), (var_2))))));
                arr_22 [i_0] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)60)), (max((((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0])), (arr_6 [i_0] [(_Bool)1] [1])))))) ? (var_2) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned int) max((arr_25 [i_6]), (min((arr_24 [i_6]), (arr_25 [i_6]))))));
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)64)))) - (max((min((((/* implicit */int) var_4)), (1568474144))), (((/* implicit */int) max((var_7), (var_5))))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((max((((/* implicit */unsigned int) arr_27 [i_6] [2ULL] [i_6])), (var_12))) - (((/* implicit */unsigned int) ((var_10) % (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) arr_25 [18LL])))))));
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            arr_32 [(unsigned char)24] = ((/* implicit */_Bool) arr_28 [i_6] [i_8]);
            arr_33 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((arr_23 [i_6]), (((/* implicit */unsigned int) (short)32767))))) % (max((arr_28 [i_6] [i_8]), (((/* implicit */long long int) min((946781449), (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 2) 
        {
            var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) ((var_2) << (((arr_28 [i_9 + 1] [i_9 - 1]) + (4761193916693204355LL)))))), ((~(arr_28 [i_9 - 1] [i_9 + 1])))));
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_6] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)40)) : (1554031101))) : (((((/* implicit */int) (unsigned char)81)) - (((/* implicit */int) (_Bool)1))))))) - (63ULL)));
        }
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) || (arr_35 [i_11])))), (max(((+(arr_37 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) arr_35 [(unsigned char)9])))))))));
                arr_41 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_23 [i_11])), ((+(arr_34 [i_6] [i_11])))));
            }
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 23; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        arr_46 [i_13] [i_13] [i_12] [i_10] [i_10] [13] = ((/* implicit */signed char) arr_24 [i_10]);
                        arr_47 [i_6] [(unsigned short)16] [i_10] [(unsigned short)2] [i_13] = ((/* implicit */signed char) (-(((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_43 [19] [19])))) - (((/* implicit */int) (!(var_11))))))));
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((4032752325U), (((/* implicit */unsigned int) 131053))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_34 [i_6] [(unsigned char)15]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [(short)0])) ? (((/* implicit */unsigned int) -1554031113)) : (2097152U)))))) - (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) arr_31 [i_10]))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) arr_28 [i_6] [i_6]);
                            arr_50 [(unsigned char)18] [i_10] [i_10] [i_10] [i_14] = ((unsigned long long int) min((max((arr_44 [i_14 - 1] [i_13] [i_12] [i_10] [i_6]), (((/* implicit */unsigned int) var_3)))), (min((arr_37 [i_12 + 1] [i_6] [i_6]), (((/* implicit */unsigned int) arr_48 [8] [8]))))));
                            var_27 = ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_38 [i_6] [(_Bool)1]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) var_10)) ? (476804025U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_13] [i_13]))) / (var_12)))) ? (((/* implicit */long long int) ((var_1) * (((/* implicit */int) var_6))))) : (((arr_28 [i_13] [i_13]) / (((/* implicit */long long int) arr_23 [i_13])))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) var_0);
                            arr_53 [3] [i_13] [i_12] [i_10] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_6] [i_10]))) % (arr_30 [i_10] [i_12 - 1] [i_13])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-19263)))))) - (((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_45 [i_13]))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_43 [i_6] [i_10])) : (((/* implicit */int) (unsigned char)245)))))))));
                            var_29 = ((/* implicit */unsigned int) ((unsigned long long int) 1554031095));
                        }
                    }
                } 
            } 
            arr_54 [i_6] [i_10] [i_6] = ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) 44367906)) : (1560448264U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */int) arr_40 [(_Bool)1] [(_Bool)1] [i_10])) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((max((arr_30 [i_10] [i_10] [i_6]), (((/* implicit */long long int) var_2)))) << (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)28))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_7)) : (1554031102)))));
        }
        arr_55 [0LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_37 [i_6] [i_6] [7ULL])))) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) << (((((unsigned int) ((arr_27 [i_6] [i_6] [i_6]) ? (arr_30 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) - (3933738183U)))));
        var_30 = ((/* implicit */unsigned char) var_0);
    }
}

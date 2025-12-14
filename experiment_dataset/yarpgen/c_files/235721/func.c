/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235721
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) <= (max((((int) (short)-19925)), (((/* implicit */int) ((unsigned char) var_1))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_13);
        var_16 = ((/* implicit */short) max((((/* implicit */int) min((max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)19446))), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)19446)))) & (arr_0 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_6 [i_1]);
        var_18 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) arr_6 [i_1])) ? (2218560409U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_10 [i_2])))));
        /* LoopSeq 2 */
        for (short i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_16 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_12), (((/* implicit */int) (short)27268))))), (((((/* implicit */_Bool) max((var_9), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_6 [i_2])))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_2] [i_3 - 1]), (arr_9 [i_2] [i_2]))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                arr_20 [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) var_4);
                var_21 = ((/* implicit */unsigned char) 505368306U);
                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (+(var_8)))))));
            }
            for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) (signed char)43);
                /* LoopSeq 3 */
                for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
                {
                    var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [(unsigned short)4] [i_5 + 2] [i_5]))));
                    var_25 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (arr_25 [i_6] [i_3 - 2] [i_5 + 3] [i_6 + 1]));
                }
                for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                        var_27 = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [(signed char)4] [3] [i_8]))) | (2622318384U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46090))))), (((/* implicit */unsigned int) var_12))));
                        var_28 -= ((/* implicit */short) var_6);
                        arr_32 [(unsigned char)13] [i_3] [i_5 - 1] [i_2] [i_8] [i_2] = ((/* implicit */int) max((((/* implicit */short) arr_19 [i_7 + 2] [i_3] [i_7 - 1] [i_3])), (var_1)));
                    }
                    arr_33 [i_2] [i_3] [i_5 - 1] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19446)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_2] [i_3] [i_5 + 4] [i_2])) : (((/* implicit */int) arr_29 [i_2] [i_3] [i_5] [i_2] [i_7])))) : ((-(((/* implicit */int) (signed char)53))))))) ? (((arr_25 [i_2] [i_2] [i_2] [i_2]) ^ (((((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)2277)))))) : (((/* implicit */int) var_4))));
                    var_29 = 18408205866509947163ULL;
                    var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_28 [(signed char)13] [(signed char)13] [i_2] [i_3] [i_5 + 2] [i_7]))));
                    arr_34 [i_7 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_9);
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_38 [i_2] [i_2] [i_5] [i_2] = ((/* implicit */int) ((long long int) arr_36 [i_2] [i_3 - 1] [i_5 + 2] [i_9] [i_2]));
                    var_31 = ((/* implicit */unsigned short) ((int) arr_21 [i_2] [i_3] [i_5 + 1] [i_5 + 1]));
                }
            }
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_22 [i_2] [i_3] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) var_5);
                            arr_47 [i_2] [i_3 - 2] [i_2] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 1] [i_3 + 1])))))));
                            var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_43 [i_2]) : (arr_43 [i_2]))) % (((/* implicit */long long int) ((max((var_14), (arr_26 [i_2] [i_2] [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_37 [i_2] [i_2] [i_2] [i_2] [i_2]) != (((/* implicit */int) var_5)))))))))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 1; i_13 < 14; i_13 += 4) 
            {
                var_35 |= ((/* implicit */short) (~(247142298U)));
                var_36 = var_9;
                arr_50 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4434100010726152213ULL))));
            }
            var_37 |= ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (max((arr_25 [i_3 - 2] [i_3 - 2] [i_3] [i_3]), (((/* implicit */int) arr_42 [i_3 - 2] [i_3 + 1] [i_2] [i_3]))))));
        }
        for (short i_14 = 2; i_14 < 17; i_14 += 4) /* same iter space */
        {
            arr_53 [i_2] = ((/* implicit */unsigned int) 8363358779217073368LL);
            var_38 = ((/* implicit */unsigned int) ((short) max(((-(var_14))), (((/* implicit */unsigned int) var_2)))));
        }
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) -2066300671)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) ((2076406878U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_40 = ((/* implicit */signed char) var_11);
}

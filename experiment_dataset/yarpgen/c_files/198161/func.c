/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198161
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
    var_13 = ((/* implicit */unsigned int) (unsigned char)246);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_11 [i_1] [i_1] [i_2] [i_1] [i_0])));
                        arr_12 [i_2] = ((/* implicit */signed char) ((arr_1 [i_1] [i_3]) <= (((/* implicit */int) (unsigned char)217))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_1] [i_2] [i_4] [i_2]);
                            var_16 += ((/* implicit */signed char) (+(602525231U)));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2])) << (((/* implicit */int) arr_13 [i_0] [i_0] [19U])))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 17400848551874780197ULL)) && (((/* implicit */_Bool) arr_3 [(unsigned char)3]))))))))));
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11452))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_4])))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)12] [i_4])))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(arr_0 [i_1]))))));
                            arr_21 [i_2] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0]);
                            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) | (var_3)));
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 602525229U)) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)40424))))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_2])));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_25 [(unsigned char)18] [i_1] [i_2] [(signed char)10] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_6]) + (9223372036854775807LL))) >> (((3692442064U) - (3692442063U)))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [9LL] [(unsigned short)20])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (signed char)25)))))));
                        }
                        var_23 |= (short)18225;
                    }
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))));
                        arr_29 [i_2] = ((/* implicit */unsigned char) (!(((arr_7 [i_2] [i_1] [i_0] [i_7]) <= (((/* implicit */int) arr_16 [i_2]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_2] [i_8] [11U] = ((/* implicit */unsigned char) arr_32 [i_2] [14U]);
                        arr_34 [i_2] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) (~(((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_2]))))));
                        var_24 = ((/* implicit */unsigned long long int) arr_7 [(short)8] [i_2] [i_0] [i_0]);
                        var_25 *= ((/* implicit */unsigned short) (_Bool)1);
                        arr_35 [i_2] [i_2] [i_2] [i_2] [(signed char)1] = ((/* implicit */unsigned long long int) var_10);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_40 [20U] [i_1] [20U] [i_0] |= ((/* implicit */_Bool) arr_19 [i_2] [i_1] [i_2] [i_1] [i_0]);
                        arr_41 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9] |= ((/* implicit */unsigned short) var_9);
                    }
                    var_26 = var_6;
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_44 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) var_11);
                    var_27 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) var_6))))));
                    var_28 ^= ((/* implicit */short) ((unsigned int) var_8));
                }
                for (short i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((7155074554449647920LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [9LL] [i_0] [i_0])))))) ? (min((var_3), (((/* implicit */unsigned long long int) min((arr_30 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */unsigned long long int) max((((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_11 - 1])))), (((/* implicit */int) (_Bool)1))))))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_2))));
                }
            }
        } 
    } 
    var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 606057901U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_11)))) : ((~(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}

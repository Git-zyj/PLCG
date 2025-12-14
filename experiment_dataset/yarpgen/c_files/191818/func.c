/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191818
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
    var_14 = ((/* implicit */int) ((unsigned char) max((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))), (((/* implicit */unsigned int) var_11)))));
    var_15 += ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    var_16 = ((/* implicit */int) 2057465161U);
                    var_17 = ((/* implicit */unsigned long long int) (unsigned char)188);
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_18 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 536870908U)) ? (var_9) : (2016U)))) | (max((var_7), (((/* implicit */long long int) var_10)))))));
                    var_19 = ((/* implicit */unsigned long long int) max((((short) ((var_3) / (var_7)))), (((/* implicit */short) ((_Bool) (-(((/* implicit */int) (unsigned short)20044))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_9))))))), (((unsigned int) -3976841710286504519LL)))))));
                }
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_14 [i_0] [i_1] [(unsigned char)14] = ((/* implicit */short) ((unsigned short) arr_9 [(_Bool)1] [i_1 - 1] [i_4]));
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5894)) ? ((~(min((var_13), (((/* implicit */long long int) arr_9 [i_0] [i_1 + 1] [i_1 + 1])))))) : (max((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)16128))))), (((/* implicit */long long int) ((int) var_4)))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((_Bool) (unsigned char)57)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 2] [i_6 + 1])) ? (2612111841841309388LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))))) ? (((max((arr_12 [(_Bool)1]), (((/* implicit */long long int) 770721282U)))) + (min((var_7), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))))))));
                                arr_21 [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) var_4);
                                var_23 += ((/* implicit */int) max((var_5), (((/* implicit */short) min(((unsigned char)150), (((/* implicit */unsigned char) (signed char)4)))))));
                                arr_22 [i_5] = ((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_16 [i_5])), (var_7))));
                                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned int) var_9)), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)34198)), (var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7)))))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4])) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_30 [i_0] = ((/* implicit */signed char) (~(((unsigned long long int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_0] [i_7 - 2] [i_7 - 2] [i_7 - 2] [9U] [i_9] = var_4;
                            var_25 = ((/* implicit */unsigned short) ((int) var_12));
                        }
                        arr_35 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */signed char) 1894399861U);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_25 [i_0] [(unsigned short)1] [i_7 - 1])) : (((/* implicit */int) var_6))));
                                var_28 = ((/* implicit */signed char) (short)-31134);
                            }
                        } 
                    } 
                }
                arr_42 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) arr_27 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        arr_45 [i_12] = ((/* implicit */signed char) min((((/* implicit */long long int) min(((-(1546727260))), (((/* implicit */int) ((unsigned char) var_4)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((int) (unsigned short)41421))) : (max((var_1), (((/* implicit */long long int) var_12))))))));
        arr_46 [i_12] [i_12] = ((/* implicit */short) (~(1737208250U)));
    }
    var_29 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_6)) / (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)16)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52761
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */long long int) ((unsigned long long int) max(((unsigned short)61274), ((unsigned short)4262))));
                            arr_9 [i_3] = ((/* implicit */int) ((unsigned int) ((short) var_9)));
                            var_13 = ((/* implicit */short) ((unsigned long long int) ((max((var_3), (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                            var_14 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (((((min((var_9), (var_10))) + (2147483647))) >> (((var_10) + (1726209513)))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned short) max((((short) var_8)), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)61267)) && (((/* implicit */_Bool) 1607127713))))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (max((var_4), (((/* implicit */signed char) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                                var_17 = ((/* implicit */int) max((var_17), (max((((/* implicit */int) var_4)), (((int) ((var_1) == (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_4] = ((/* implicit */unsigned short) var_10);
                    var_18 *= ((/* implicit */short) ((_Bool) ((signed char) max((var_9), (((/* implicit */int) var_5))))));
                    var_19 &= ((/* implicit */unsigned short) var_4);
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) var_5);
                        var_21 ^= ((/* implicit */long long int) ((unsigned long long int) var_0));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */short) var_5);
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_1 + 2] [i_7] [i_9] [i_9] [i_10] = ((unsigned char) var_5);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_8))) << (((((/* implicit */int) var_5)) - (10)))));
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_3))) > (((/* implicit */int) var_6))));
                            var_25 += ((/* implicit */_Bool) var_1);
                        }
                        for (unsigned char i_12 = 2; i_12 < 8; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((int) var_10));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_2)))));
                        }
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)61274));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_5))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            arr_41 [i_0] [9ULL] [i_1 - 1] [i_7] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_1))) == (var_10)));
                            var_30 &= ((/* implicit */short) ((unsigned char) ((unsigned char) -1716362700)));
                        }
                        for (signed char i_15 = 4; i_15 < 9; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) var_8);
                            var_32 ^= ((/* implicit */unsigned short) var_2);
                            var_33 = ((/* implicit */unsigned char) ((int) ((int) var_9)));
                            arr_46 [(unsigned short)1] [i_1 + 1] [2] [i_1] [i_15] = ((/* implicit */unsigned char) var_1);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        for (signed char i_17 = 1; i_17 < 9; i_17 += 3) 
                        {
                            {
                                arr_51 [i_0] [i_1] [i_7] [i_16] [i_17] = ((/* implicit */short) ((unsigned short) var_0));
                                var_34 = ((int) var_5);
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) ((int) var_1))));
            }
        } 
    } 
}

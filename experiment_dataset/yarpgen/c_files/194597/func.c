/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194597
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned long long int) ((((int) var_13)) << (((((unsigned long long int) var_12)) - (27268ULL)))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((var_4) >> (((((/* implicit */int) var_5)) - (26))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_4)))));
                                arr_12 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)24)) ? (((((/* implicit */_Bool) var_2)) ? (-415993526) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (unsigned short)50119);
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (((/* implicit */int) var_12)))) >> (((((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (2567305580U)))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11)))))) : (var_11))) != (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_9)) - (38162))))))))));
                                arr_21 [i_1] [i_0] [i_5] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))), (((((((-1758750627) + (((/* implicit */int) var_9)))) + (2147483647))) << ((((((-(((/* implicit */int) var_3)))) + (19))) - (18)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (long long int i_10 = 3; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned char) 2588030355U);
                                arr_36 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                    arr_37 [i_0] = ((/* implicit */_Bool) var_8);
                }
            }
        } 
    } 
}

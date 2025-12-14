/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231132
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
    var_15 = ((/* implicit */short) ((var_7) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))));
    var_16 ^= ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) (+(var_7)))));
    var_17 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_9);
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (var_13)));
                        }
                        var_18 ^= (-(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_9) : (var_9)))))));
                        arr_15 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) var_2);
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9)))) ? (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
                            var_20 = ((((((/* implicit */long long int) var_4)) + (var_9))) + (((/* implicit */long long int) (-(var_4)))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) % (var_2))))));
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))));
                            var_23 = ((/* implicit */unsigned int) (~(((var_2) >> (((((/* implicit */int) var_8)) - (33476)))))));
                        }
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_0)))) ? (var_4) : ((-(var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(var_4)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1))))));
                            arr_26 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_5)))));
                            arr_27 [i_7] [i_1] [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_0)) - (var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (var_13)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_4)))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (+(var_13)))) : (var_14)))))))));
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_4);
                    }
                    arr_29 [i_0] = ((/* implicit */_Bool) (((-(var_5))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
}

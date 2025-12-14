/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209655
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
    var_18 *= ((/* implicit */short) (+(4000073492U)));
    var_19 = ((/* implicit */unsigned int) max((var_19), (min((((((var_4) * (((/* implicit */unsigned int) var_16)))) * (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) var_8))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((int) max((arr_4 [i_1] [i_1 - 2]), (arr_4 [i_1] [i_1 + 4]))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    var_21 = (((!(((/* implicit */_Bool) 294893803U)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_3 - 1] [i_3])) ? (4000073470U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [13U] [i_3 - 1] [i_3]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)2174)), (var_8)))));
                    var_22 = ((/* implicit */unsigned int) var_10);
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_23 = ((/* implicit */short) arr_0 [0U]);
                    var_24 ^= ((/* implicit */unsigned short) max((4000073492U), (((/* implicit */unsigned int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_6 + 2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) 6)) : (((long long int) arr_4 [i_1 - 2] [i_6 + 2]))));
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_6 + 1] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_6 + 1] [i_1]))))))));
                        }
                    } 
                } 
                var_27 *= var_7;
            }
            var_28 = ((/* implicit */_Bool) (+(arr_0 [i_1])));
            var_29 |= ((/* implicit */short) ((((((/* implicit */_Bool) min((var_13), ((short)-1)))) ? (-1) : ((((_Bool)0) ? (((/* implicit */int) arr_15 [i_0] [(unsigned char)0])) : (((/* implicit */int) (_Bool)1)))))) + ((~(((/* implicit */int) ((((/* implicit */int) (short)-2170)) >= (((/* implicit */int) (_Bool)1)))))))));
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 3; i_8 < 22; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(9223372036854775791LL))))));
                            var_31 ^= ((/* implicit */unsigned char) min(((~(arr_17 [i_0] [1U] [i_8 - 3] [i_9] [i_9] [i_10] [i_10]))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_8 - 2] [i_8] [i_10] [(short)20] [i_10])) ? (arr_17 [i_0] [i_0] [i_8 + 1] [(_Bool)1] [i_10 - 1] [i_10] [9LL]) : (arr_17 [i_8] [i_8] [i_8 - 2] [7LL] [i_8] [i_9] [i_10])))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)2172)))))));
            var_33 = ((/* implicit */short) arr_19 [i_0] [i_7]);
        }
        var_34 ^= ((/* implicit */unsigned short) -9223372036854775791LL);
    }
}

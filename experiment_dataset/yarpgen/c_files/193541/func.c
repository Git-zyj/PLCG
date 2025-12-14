/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193541
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */int) arr_0 [i_0]))))), (((arr_7 [i_0] [i_0] [(signed char)5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [5U])) <= (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [(unsigned char)0]))));
                        var_15 &= ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */signed char) var_2);
                                var_17 += arr_5 [i_0] [i_0];
                                var_18 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [10U] [i_1] [i_2] [2])) ? (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (-1438846832) : (((/* implicit */int) var_2)))))))));
                                arr_18 [i_0] [9LL] [i_2] [i_1] [9U] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */short) (-(((/* implicit */int) var_1))));
                            var_21 ^= ((/* implicit */short) (-(((/* implicit */int) max((arr_14 [i_0] [i_1] [9] [i_7]), (arr_14 [(unsigned char)2] [i_0] [i_6] [i_7]))))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [8U] [i_1])) : (((/* implicit */int) arr_24 [i_1]))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6])) && (((/* implicit */_Bool) var_2)))))));
                            var_23 = (-(((/* implicit */int) ((((((/* implicit */int) var_2)) <= (var_9))) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_7]))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_4))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((_Bool) var_2));
                            var_26 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_5))) & (min((((/* implicit */unsigned long long int) arr_25 [i_8] [i_1] [i_0])), (var_6)))));
                        }
                    } 
                } 
                arr_30 [i_1] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */int) ((var_3) <= (var_3))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (var_6)));
    var_28 |= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned short)64060)) ? (1561971321U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))));
    var_30 &= ((/* implicit */long long int) var_2);
}

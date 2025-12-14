/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217569
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
    var_19 |= ((((/* implicit */_Bool) var_15)) ? (var_18) : (3720242649U));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 3] [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_11))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) 574724635U);
                arr_6 [i_0] [i_1 - 2] = ((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1]);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)27);
                    var_20 = var_11;
                    arr_12 [(unsigned char)7] [i_1 + 3] [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [(signed char)7] [(signed char)7] [i_1]);
                    var_21 ^= ((/* implicit */unsigned char) (signed char)12);
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_1 + 2] [i_1 - 2] [i_1 + 3]), (arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 1])))) ? (3720242649U) : (((/* implicit */unsigned int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 4]))));
                    var_22 = ((/* implicit */signed char) arr_1 [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2102)) ? (8084910769458457903LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0] [i_4])))))));
                    arr_19 [i_1] = ((/* implicit */unsigned short) (-(arr_2 [i_1 - 1] [i_0])));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)87)))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) min((((574724620U) & (arr_13 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (signed char)-87)))))))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_6]))) : (3720242675U)))) : (-2189808927967533225LL)))));
                            arr_27 [i_6] [i_1] [i_5] [i_6] = ((/* implicit */signed char) var_2);
                            var_26 = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = 2286345352U;
    var_28 *= ((/* implicit */unsigned long long int) max((4179242837U), (((/* implicit */unsigned int) var_14))));
}

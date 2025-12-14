/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30831
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
    var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (max(((!(((/* implicit */_Bool) (unsigned short)6144)))), (((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (+(((/* implicit */int) ((min((((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_1] [0U])), (var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                arr_13 [(unsigned short)0] [i_2] [i_2] [i_3] [i_3] [3LL] = ((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(short)6] [i_4] [i_4])), (((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_11 [i_2] [(unsigned char)22] [i_2] [i_3] [i_1] [i_4])))) | (((/* implicit */int) arr_7 [i_0] [i_1] [3LL]))))));
                                var_13 = arr_9 [i_0] [i_1] [(signed char)3] [i_3] [i_4];
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) var_7)))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59399)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
                            var_15 = ((/* implicit */short) (unsigned char)188);
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_14 [i_1] [i_5] [i_1])))) : (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) arr_5 [i_6 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [(short)6] [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((max((((short) (signed char)126)), (((/* implicit */short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))))))), (((/* implicit */short) (signed char)107))));
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)80)) > (((/* implicit */int) (signed char)-126))));
                    arr_28 [i_9] [i_9] [i_9] = ((/* implicit */short) arr_26 [9U] [9U] [i_9 + 1]);
                }
            } 
        } 
    } 
}

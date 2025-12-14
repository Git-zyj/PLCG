/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224802
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)27936)))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (16356469704225763549ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))));
                                var_15 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((unsigned long long int) (_Bool)1);
                    arr_14 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) -1042420186)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32853))) : (var_7)))));
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1282990155U)) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)62020)))) >= (((arr_6 [i_0] [i_0] [i_5]) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)-125))))));
                    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_5 + 1])) >= (((/* implicit */int) var_4))));
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_19 [i_0] [i_1] [(short)15] [i_6] = ((/* implicit */short) 2599417334U);
                    arr_20 [i_0] [(signed char)14] [i_1] [i_6] = ((/* implicit */unsigned char) ((signed char) arr_12 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_1]));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned char)15))));
                }
                var_20 -= ((/* implicit */unsigned char) min((max((arr_9 [i_0]), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) arr_18 [i_0]))));
                arr_21 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) / (var_1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) 3813397202U);
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)19204)), (9223372036854775807LL)))), (min((873853177567196832ULL), (((/* implicit */unsigned long long int) var_5))))))));
    var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_11))))));
}

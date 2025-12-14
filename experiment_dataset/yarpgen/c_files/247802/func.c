/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247802
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
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_17 |= ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_8))), ((~(((/* implicit */int) var_6))))));
                            var_19 ^= ((/* implicit */signed char) max((((min((var_9), (var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_4)))) : (arr_9 [i_1] [i_3] [i_3] [i_3] [i_1]))), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_3 + 1] [i_3 + 1]))));
                            var_20 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((unsigned char) arr_0 [i_3])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (((+(arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 2]))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [i_1 + 3] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 - 1] [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_6 + 1] [i_6] [(short)0] [i_6 - 1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1] [i_6]))) / ((-(var_2)))))) : (min(((~(arr_13 [i_5]))), (((/* implicit */unsigned long long int) arr_0 [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (~((+(var_4)))));
                                var_24 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min((arr_21 [i_4] [i_4] [i_4] [i_4] [(signed char)14]), (((/* implicit */unsigned long long int) max((1477404064U), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    var_26 = ((/* implicit */unsigned char) (((_Bool)1) ? ((+(((long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}

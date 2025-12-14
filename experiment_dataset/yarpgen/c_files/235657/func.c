/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235657
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
    var_12 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (var_6)))), (17317308137472LL))) > (((/* implicit */long long int) var_2)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) arr_0 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) var_10);
                                var_15 = ((/* implicit */signed char) min((((unsigned short) arr_6 [i_0] [i_2] [i_2] [i_0])), (((/* implicit */unsigned short) max((arr_6 [i_1] [i_2] [i_3] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_16 = ((((arr_3 [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0])))))) - (((/* implicit */unsigned long long int) arr_10 [i_0])));
                    arr_11 [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                var_17 = ((long long int) max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) arr_10 [i_5]))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) arr_6 [i_6] [i_7] [10U] [i_6]);
                            var_19 *= ((/* implicit */unsigned char) arr_15 [i_5] [i_7]);
                            arr_23 [i_7] [i_6] [i_7] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1697332311U)) || (((/* implicit */_Bool) 1697332323U)))))) % (((((/* implicit */_Bool) arr_12 [(unsigned char)2])) ? (arr_13 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_8] [i_7] [i_6]) > (((/* implicit */unsigned long long int) 2597634984U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194801
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 - 1]))));
                                var_18 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)51767)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 3769523472U)) ? (var_6) : (((/* implicit */unsigned int) var_9))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)13747)), (max(((~(var_14))), (((/* implicit */unsigned long long int) (unsigned short)13751))))));
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (unsigned short)27062);
                    arr_20 [i_5 - 1] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */int) arr_9 [i_5 + 4] [(signed char)9] [i_6] [4ULL] [4ULL] [i_7])) <= (((/* implicit */int) arr_2 [i_7]))))) << (((arr_1 [i_5 - 2]) - (15637268684718854009ULL))))), (((/* implicit */int) (unsigned short)51785))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_15);
}

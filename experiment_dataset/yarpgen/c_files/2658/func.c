/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2658
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)13] [i_0] [6LL] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) min((min((arr_3 [i_0]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) << (((var_3) - (16355290599571195437ULL)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((arr_18 [i_2] [i_3] [i_4] [i_4] [i_6]), (((/* implicit */unsigned int) var_9))));
                                var_18 = ((/* implicit */unsigned char) var_12);
                                var_19 = ((/* implicit */unsigned char) arr_9 [i_2]);
                            }
                        } 
                    } 
                    var_20 = arr_12 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_2];
                }
            } 
        } 
    } 
}

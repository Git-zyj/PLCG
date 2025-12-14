/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221669
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (min((max((var_0), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) var_9);
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [(_Bool)1] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))) >= (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_9))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) min((var_9), (var_8)))), (min((((/* implicit */long long int) var_8)), (var_6)))));
                                var_12 = ((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (var_0))) | (((/* implicit */long long int) ((/* implicit */int) max((var_8), (var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_7))));
    var_14 &= ((/* implicit */short) min((((max((var_6), (((/* implicit */long long int) var_1)))) % (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_0))))), (((/* implicit */long long int) var_7))));
}

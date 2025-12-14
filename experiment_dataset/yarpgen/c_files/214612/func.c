/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214612
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) -389386870);
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_4] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(2699351692U)))), (((((_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_0])) ? (4957953457804559114ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((3230338334U) >> (((((/* implicit */int) (unsigned char)248)) - (241))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_11 ^= ((/* implicit */unsigned int) arr_17 [i_0] [i_5] [i_0] [i_5]);
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_1] [(unsigned short)10]))))))));
                    arr_22 [(_Bool)1] [i_1] [i_1] = 389386857;
                    arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
                }
                var_13 = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) 1990379502U);
    var_15 = -389386870;
}

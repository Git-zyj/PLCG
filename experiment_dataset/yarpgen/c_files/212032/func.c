/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212032
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (min((var_15), (var_5)))))) ? (max((min((((/* implicit */unsigned int) var_4)), (var_9))), (((/* implicit */unsigned int) min((var_15), (var_15)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */unsigned long long int) (_Bool)0);
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] &= ((/* implicit */unsigned int) var_12);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_5 [i_0 + 4]), (((/* implicit */long long int) arr_0 [i_4]))))))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((signed char) min((((((/* implicit */int) var_15)) & (((/* implicit */int) var_13)))), (((/* implicit */int) arr_1 [i_0 - 4])))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */_Bool) 30301877222296456LL);
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32747)));
}

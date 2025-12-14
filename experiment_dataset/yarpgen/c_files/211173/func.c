/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211173
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
    var_13 = min(((((+(((/* implicit */int) (unsigned char)120)))) * (((((/* implicit */_Bool) (short)248)) ? (((/* implicit */int) var_10)) : (var_0))))), (((/* implicit */int) (short)31744)));
    var_14 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) arr_2 [i_0] [i_2] [i_0])))))) + (((((((/* implicit */int) arr_1 [i_0] [i_2])) - (((/* implicit */int) (short)31744)))) - (((/* implicit */int) (short)-31745))))));
                                var_15 = ((/* implicit */int) min((var_15), (max((((((((/* implicit */_Bool) var_10)) ? (0) : (arr_3 [i_2] [i_1]))) - (((/* implicit */int) var_12)))), ((-(((/* implicit */int) (short)-31730))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (short)-31734);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_6] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 - 1]))) : (arr_5 [i_6 - 2] [i_6 + 2]))) < (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_1] [i_6])))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]);
                arr_22 [i_0] = ((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
}

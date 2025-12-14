/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212361
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
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17780456571195841544ULL)) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (_Bool)1)), (789119414)))));
                var_21 -= ((/* implicit */_Bool) var_15);
                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (min((34359738367LL), (((/* implicit */long long int) (short)-1255))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (short)4032);
                                var_24 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17780456571195841544ULL)) ? (-1629142473) : (((/* implicit */int) arr_12 [i_2 + 1] [i_0 - 3] [i_1 + 2])))) + (max((((((/* implicit */int) arr_15 [i_0 - 2] [i_0] [6] [i_0])) + (((/* implicit */int) (short)-13029)))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_7 [i_0]))));
                                arr_17 [i_0] [i_1] [i_4] [(short)6] [i_4] = ((/* implicit */unsigned int) (short)-1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

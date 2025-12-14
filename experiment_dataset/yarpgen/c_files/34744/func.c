/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34744
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
    var_13 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */_Bool) var_3);
                            arr_13 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (329794730U) : (4294967289U))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)56)) ? ((+(var_6))) : (var_6))), (((/* implicit */unsigned int) arr_1 [i_0]))));
                var_16 = var_6;
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_10);
    var_18 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) (short)-1)), (var_0)))));
}

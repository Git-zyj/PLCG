/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229802
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)63)))) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                            var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)33))))), (13ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (13ULL) : (var_5))))) >> (((((/* implicit */int) ((short) min((18446744073709551603ULL), (18446744073709551579ULL))))) + (80)))))));
}

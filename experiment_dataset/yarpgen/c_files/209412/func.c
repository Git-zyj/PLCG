/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209412
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((((var_17) | (((/* implicit */unsigned long long int) 7312073629558605452LL)))), (((/* implicit */unsigned long long int) ((((var_8) / (var_8))) == (((549755813884LL) / (((/* implicit */long long int) 222638273U)))))))));
                    arr_7 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (var_15)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) arr_4 [i_3] [i_4]);
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_4 [i_3] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_3] [i_4])))) : ((((+(-7312073629558605453LL))) ^ (max((var_10), (var_10))))))))));
                    var_22 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) 9223372036854775786LL)), (var_15))))), (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */long long int) max(((+(((/* implicit */int) (short)-25703)))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_12))))), (var_13))))));
}

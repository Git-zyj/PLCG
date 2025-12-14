/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199550
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
    var_16 = ((/* implicit */signed char) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */unsigned short) max((min((-2482439246251370881LL), (((/* implicit */long long int) arr_3 [i_1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) > (arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) arr_9 [i_0] [i_2]);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 2482439246251370881LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (2482439246251370882LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_3]))))))))));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967276U)) ? (2482439246251370883LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_3])), (3455167784U))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */signed char) 2482439246251370882LL);
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 2482439246251370855LL))));
}

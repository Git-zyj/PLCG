/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208264
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((short) arr_1 [7] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_2)))) != (var_10))))) : ((~(((2670857070783370163LL) | (((/* implicit */long long int) 754945736))))))));
                var_13 = ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (max((-754945737), (((/* implicit */int) arr_0 [i_1])))) : ((~(((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(89852585U))))))));
                            arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_6 [i_0] [i_1] [3] [i_0]))))));
                            arr_14 [i_0] [10U] [i_0] [i_2] = (~(((/* implicit */int) arr_5 [i_0] [i_1])));
                            var_15 = min((((5111408057038322047LL) | (((/* implicit */long long int) 754945736)))), (((/* implicit */long long int) ((_Bool) (~(arr_12 [i_2] [i_1] [i_2]))))));
                            arr_15 [1] [i_1] [1] [i_2] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 434546792)))) ? (-2670857070783370163LL) : (((/* implicit */long long int) (-(-754945729))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

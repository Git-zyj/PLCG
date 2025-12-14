/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29441
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
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((min((9223372036854775807LL), (((/* implicit */long long int) arr_0 [(signed char)12] [i_3 + 4])))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_3 - 1])))))) ? (((((/* implicit */_Bool) 28U)) ? (((((/* implicit */_Bool) 4655386808055596591LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25))))) : ((-((-(var_2))))));
                            var_18 |= ((/* implicit */unsigned long long int) (-(3772063953U)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) var_17);
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-20752);
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(arr_10 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))) == ((~(arr_1 [i_0 + 1] [i_0 - 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((3772063960U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (var_0)))) ? (var_2) : (((/* implicit */long long int) (~(((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))))));
}

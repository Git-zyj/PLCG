/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190163
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
    var_18 = (_Bool)1;
    var_19 = ((/* implicit */unsigned int) var_12);
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned int) ((short) (_Bool)1));
                            arr_8 [i_3] [i_3] = ((/* implicit */unsigned int) var_11);
                            arr_9 [i_3] [i_1] [i_3] = ((/* implicit */signed char) max(((-(arr_3 [i_0 - 4]))), (((/* implicit */unsigned long long int) var_2))));
                        }
                    } 
                } 
                var_22 = ((int) var_14);
                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (min((arr_2 [i_1 - 2] [3ULL]), (((/* implicit */int) arr_7 [i_1]))))))) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_3 [i_0 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_1) - (3149185328940388481ULL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) >> (((((int) arr_3 [i_0])) + (67262496))))))));
            }
        } 
    } 
}

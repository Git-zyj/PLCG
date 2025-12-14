/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231952
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-3)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105)))))))), (max((arr_3 [i_3 + 1] [i_3 - 1]), (arr_3 [i_1 - 1] [i_1 + 3])))));
                            arr_13 [i_2 - 3] [(short)5] = (+(12316438414067407976ULL));
                            var_20 ^= ((/* implicit */signed char) var_5);
                            arr_14 [i_0] [i_0] [i_2] = ((4995537207166353529ULL) >> (((12316438414067407955ULL) - (12316438414067407946ULL))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)99);
                var_21 *= ((/* implicit */short) max(((+((+(((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1])))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) var_6);
}

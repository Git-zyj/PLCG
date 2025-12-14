/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228258
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
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) (signed char)-123)), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29958))))), (arr_3 [i_0 + 1] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned char) 4109758059612979756ULL);
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_7 [i_1] [18LL] [18LL])));
                            arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_3]);
                            arr_11 [i_0] [i_0] [i_0] [i_2 + 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 1] [i_3])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_4 [i_0 - 1])))))))));
            }
        } 
    } 
}

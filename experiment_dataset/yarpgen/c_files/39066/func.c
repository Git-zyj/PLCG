/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39066
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
    var_14 = (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-25198)) & ((-(((/* implicit */int) (unsigned char)117))))));
                var_16 = ((/* implicit */unsigned long long int) (unsigned short)21057);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2 - 2])) ? (arr_8 [i_1] [i_2 + 1]) : (((/* implicit */int) var_3))))), (min((arr_2 [i_2] [i_2 - 1]), (arr_2 [i_2] [i_2 + 1])))));
                            arr_12 [i_1 - 2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36462))) : (min((((/* implicit */unsigned int) var_3)), (var_10))))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] &= max((min((var_8), (((/* implicit */unsigned int) arr_3 [i_2 + 2] [i_1 - 2])))), (((/* implicit */unsigned int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

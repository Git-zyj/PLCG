/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235551
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((unsigned long long int) max((1635695670128792985ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-2147483621)))))));
                    var_15 = 9223372036854775807LL;
                    var_16 *= ((/* implicit */_Bool) ((signed char) ((arr_7 [(short)7] [i_1] [i_2] [i_2]) | (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_17 = var_3;
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_6);
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (-2147483647 - 1)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58872)))))) + ((-2147483647 - 1))));
                arr_16 [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (max((arr_11 [i_3]), (((/* implicit */long long int) arr_10 [i_4])))) : (((/* implicit */long long int) min((var_6), (((/* implicit */int) var_13)))))))));
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_8 [18])) / (((/* implicit */int) arr_8 [i_3])))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)6663))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((29360128U), (((/* implicit */unsigned int) (unsigned short)147)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))) : ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
}

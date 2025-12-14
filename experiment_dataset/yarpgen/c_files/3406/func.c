/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3406
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_3);
                var_13 = ((unsigned int) 703872962U);
            }
        } 
    } 
    var_14 += max((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_1)))))) * (min((((/* implicit */long long int) var_7)), (var_0))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_9 [i_3] [i_3] [(short)7] = ((/* implicit */_Bool) var_6);
                arr_10 [i_3] = ((/* implicit */unsigned short) var_6);
                arr_11 [(_Bool)1] [i_3] [(_Bool)1] = ((_Bool) ((var_1) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_3 [i_3 - 1] [i_3] [i_2]))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (((-8571140034147741350LL) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                            var_16 = ((/* implicit */unsigned short) ((short) max((var_4), (((/* implicit */unsigned short) max((((/* implicit */short) arr_13 [i_3 - 1] [i_3])), (var_2)))))));
                            arr_16 [i_3] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_1))))));
                        }
                    } 
                } 
                arr_17 [i_3] = max((2997230771U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-24633)))) : ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}

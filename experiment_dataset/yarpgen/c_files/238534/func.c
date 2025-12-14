/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238534
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 - 1] = ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1])))))));
                arr_6 [(short)14] [i_1 + 2] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_0 [i_1 + 2] [i_0 - 1]), (((/* implicit */long long int) (unsigned char)240))))), (min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_0 + 2]))))));
            }
        } 
    } 
    var_12 = var_7;
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_15 [i_4] [i_2 + 2])), (var_8)));
                            arr_16 [i_2 + 1] [i_3] [i_5] [i_2] = ((/* implicit */unsigned int) ((short) (~((+(1454011063))))));
                            arr_17 [i_2] [i_2] [i_5 + 1] = (~((~(max((var_2), (var_4))))));
                        }
                    } 
                } 
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) (-(arr_12 [i_2] [i_3] [i_3])));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)26661)), (795683084U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((1684445535), (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned char)176)) : ((+(((/* implicit */int) var_3))))))) : (max((-4386036680787378253LL), (((/* implicit */long long int) (unsigned char)70))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((min((var_4), (var_4))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */short) var_8)))))));
}

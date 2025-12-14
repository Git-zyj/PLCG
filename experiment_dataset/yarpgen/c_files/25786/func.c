/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25786
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
    var_19 = ((/* implicit */unsigned short) (short)9135);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)41771))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((-6032698317918990587LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [2U] [2U]))))))))), (((/* implicit */long long int) ((short) max((((/* implicit */long long int) (short)-7046)), (8828283554401518548LL))))))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) ((short) var_7))))), ((+(((/* implicit */int) arr_3 [(short)15] [i_2]))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-1974))))) + (max((7400175054364938539LL), (((/* implicit */long long int) var_17))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_24 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (arr_5 [i_4] [i_5] [i_4])))) - (27755)))))), (((long long int) (-(((/* implicit */int) (short)-2005)))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) arr_7 [i_4] [i_4]))))), (min((var_12), (((/* implicit */long long int) (short)1974))))))) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) ((max((4096), (((/* implicit */int) (short)2005)))) > (((/* implicit */int) min((((/* implicit */short) arr_9 [i_3])), ((short)-2009)))))))));
                            arr_19 [i_3] [i_3 - 2] [i_3] [i_4] [(signed char)6] [(short)17] = ((/* implicit */unsigned int) (-(-4090)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_15))))), (var_16))))));
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) (((~(-1LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_13 [i_4] [i_4])))))))))));
            }
        } 
    } 
}

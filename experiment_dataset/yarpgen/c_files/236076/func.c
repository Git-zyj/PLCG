/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236076
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (max((var_2), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */long long int) var_6)) : (-5758619997780145341LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1] [(short)9])) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))) || (((/* implicit */_Bool) max(((unsigned char)124), ((unsigned char)36))))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)83)) ? (arr_1 [i_1 + 2] [i_1]) : (((/* implicit */long long int) arr_5 [i_1] [i_1])))), (((/* implicit */long long int) ((arr_5 [i_1] [i_3]) < (arr_5 [i_1] [i_1]))))));
                            arr_14 [i_1 + 3] [i_1] = ((/* implicit */long long int) (~(((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0])))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) arr_2 [i_0]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_4] [i_4] = arr_20 [i_0] [11U] [i_4] [i_5 - 1] [i_6];
                                var_21 = ((/* implicit */short) var_4);
                                arr_23 [i_1] = ((/* implicit */unsigned char) 1856328562708790306ULL);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)42))))))) > (var_16)));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_15);
}

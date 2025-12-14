/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205474
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
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned long long int) min((((var_4) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)34900)))) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 3] [i_3 - 1]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_0] [i_0] [16ULL])))) : ((((_Bool)1) ? (arr_8 [7U] [7U] [i_0]) : (((/* implicit */unsigned long long int) var_11))))))));
                            arr_12 [i_0] [i_0] [i_3 + 1] = ((/* implicit */long long int) (+(819097085)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) ((9223372036854775807LL) << (((819097061) - (819097061)))));
            }
        } 
    } 
}

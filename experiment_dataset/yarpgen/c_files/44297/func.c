/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44297
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
    var_20 = ((unsigned short) ((unsigned short) ((unsigned int) var_14)));
    var_21 = ((/* implicit */unsigned long long int) 2762642003U);
    var_22 = ((((unsigned int) (+(-597598799821529348LL)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)163))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)38271)), (arr_1 [i_0 - 3])))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((int) 1356465847U))))))));
                            var_24 += ((/* implicit */unsigned char) ((max((var_7), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2])))) == (128063694453939092ULL)));
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) min((((4294967295U) == (3252133849U))), ((_Bool)1))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_14 [i_5]), (((/* implicit */unsigned short) var_2))))), (((arr_15 [i_4] [i_5]) / (arr_15 [6U] [i_5])))));
                var_26 = (-(0ULL));
            }
        } 
    } 
}

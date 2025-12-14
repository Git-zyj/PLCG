/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205354
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((632029847369997731ULL), (17814714226339553884ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_2 + 1] [i_0 + 1] [i_0 - 1] [i_0])) ? ((-(17814714226339553885ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_2 + 1]))))), (((/* implicit */unsigned long long int) arr_2 [i_2]))));
                                arr_14 [i_0] [i_1] [i_3 - 2] [i_1] [i_4] = ((/* implicit */signed char) ((min(((!(((/* implicit */_Bool) 6571014614746126361ULL)))), (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 17814714226339553885ULL)))))) : (max((((/* implicit */long long int) arr_5 [i_3 + 1])), (arr_8 [i_2 + 2] [i_2 + 1] [i_0 - 2] [i_0])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2 - 1] |= ((/* implicit */unsigned long long int) (unsigned short)49377);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) | (min((((/* implicit */unsigned long long int) 2141640291625301514LL)), (17814714226339553884ULL))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
}

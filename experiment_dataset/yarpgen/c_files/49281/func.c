/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49281
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
    var_10 = min((var_3), (max((11U), (4294967284U))));
    var_11 ^= ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (4294967272U) : (23U))) == (((/* implicit */unsigned int) ((int) 0U)))));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((((var_2) << (((arr_8 [i_0] [i_1]) - (761687199U))))) ^ (((((/* implicit */_Bool) (~(4294967265U)))) ? (11U) : (min((((/* implicit */unsigned int) -282628986)), (229376U)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            {
                var_13 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (8257536U) : (4286709759U))))))), (((int) max((var_3), (var_6)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) 4286709780U);
                            arr_19 [i_3] [i_4] [i_6] [i_6] [i_3] &= ((/* implicit */int) ((((arr_13 [i_6] [i_3] [i_3]) & (min((((/* implicit */unsigned int) var_4)), (var_2))))) < (((((unsigned int) arr_17 [i_3] [i_4] [i_5])) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1879289554)) ? (var_4) : (902544084))))))));
                        }
                    } 
                } 
                var_15 = 4294967273U;
            }
        } 
    } 
}

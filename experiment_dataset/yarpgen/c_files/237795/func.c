/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237795
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_0] = var_1;
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_2)) : (var_0)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 7; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_4])) & (((var_3) ? (-1573672434) : (((/* implicit */int) arr_0 [i_4])))))) + (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2160260340214166083ULL))))))));
                arr_13 [i_3] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_8 [i_3 + 2])) & (((/* implicit */int) (signed char)-91))))));
                var_12 = min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_8 [i_3 + 3])) : (((/* implicit */int) var_3)))), (((((/* implicit */int) max((arr_3 [i_3] [i_4]), (((/* implicit */short) (_Bool)1))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) < (var_5)))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((int) (~(var_1)))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_8 [i_4]) ? (191005728U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))))))))));
            }
        } 
    } 
}

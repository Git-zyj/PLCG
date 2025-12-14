/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232120
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
    var_20 = ((/* implicit */long long int) (!(var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_4) == (18446744073709551610ULL)))))) % (((((/* implicit */_Bool) ((2143289344U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)49)))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) 2147483647);
                var_22 = ((/* implicit */unsigned long long int) ((min((var_16), (arr_3 [i_0] [i_1]))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_7 [i_1] [i_1] = 16926921497695192937ULL;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_16 [4LL] [i_4] [4LL] [4LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551592ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (arr_11 [i_2]))) > (((13ULL) << ((((((-2147483647 - 1)) - (-2147483598))) + (88))))))))) : (max((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) arr_9 [i_2]))))));
                    var_23 = ((/* implicit */short) ((((unsigned int) var_3)) % (arr_8 [i_2 + 2])));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228425
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
                arr_5 [i_1] = ((/* implicit */short) min((((((4294967295U) ^ (1U))) << (((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (5857697883579416321LL))))), (((min((3417862810U), (((/* implicit */unsigned int) (unsigned char)252)))) + (((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1] [3LL]))))));
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned char) (unsigned short)52716);
                arr_11 [i_2] = ((/* implicit */unsigned int) var_8);
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)254)))))))) ? (max((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 627002865U)) : (10212838633217992620ULL))), (((/* implicit */unsigned long long int) min((arr_9 [2U] [i_3] [i_3]), (((/* implicit */long long int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1])) <= (((/* implicit */int) (signed char)20))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_10 [i_2] [i_3 + 1]) | (((/* implicit */int) arr_7 [i_3 + 1]))))) != (arr_9 [i_2] [i_2] [i_3 + 1])));
                var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_2])))) > ((-(arr_10 [i_3 + 1] [i_3 + 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_11)) - (13171))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) + (326072857)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201446
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
    var_12 = ((/* implicit */unsigned char) ((int) ((unsigned char) max(((unsigned short)54981), (((/* implicit */unsigned short) (unsigned char)255))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_3 [i_0])) - (((((/* implicit */_Bool) ((int) var_11))) ? (3245941685813554161ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28906)) / (arr_0 [i_0] [i_0]))))))));
                var_14 = ((/* implicit */unsigned short) (-(max(((+(-2236306887495839159LL))), (((/* implicit */long long int) (~(639170965U))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)32))))))), (min(((~(((/* implicit */int) (short)-28912)))), (((/* implicit */int) var_11)))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (short)-1843))))))) ? (((/* implicit */unsigned int) ((int) max((((/* implicit */int) var_9)), (-136566850))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)88))))), (((unsigned int) (unsigned short)65531))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
}

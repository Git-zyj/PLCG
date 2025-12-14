/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227640
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
    var_14 = ((/* implicit */unsigned long long int) ((long long int) var_7));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17686)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((max((2372922153627794088LL), (max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_13)))))) - (((/* implicit */long long int) var_8)));
                    var_17 -= ((/* implicit */short) (~(arr_9 [i_0] [i_1] [i_2])));
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) <= (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_11)))))));
                    var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) 2372922153627794088LL)) + (8719705124905236690ULL))));
                }
            } 
        } 
    } 
    var_19 += 4294967295U;
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_13))) <= (((/* implicit */int) (signed char)-18))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_1)))))))));
}

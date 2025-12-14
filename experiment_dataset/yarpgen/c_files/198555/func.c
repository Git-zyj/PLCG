/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198555
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) != (var_3)))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((4798777668927599437LL), (4798777668927599437LL)))) || (((/* implicit */_Bool) var_10))))))));
    var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4798777668927599437LL)) ? (4798777668927599461LL) : (-4798777668927599437LL)))) ? (((/* implicit */int) ((unsigned short) 4798777668927599437LL))) : (((int) 4798777668927599450LL)))));
    var_21 = ((/* implicit */unsigned int) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))));
                var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((4798777668927599450LL) <= (4798777668927599432LL)))))) >> (((((((/* implicit */_Bool) -4798777668927599451LL)) ? (-4798777668927599438LL) : ((-(4798777668927599437LL))))) + (4798777668927599449LL)))));
                var_24 = ((/* implicit */_Bool) var_7);
                var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != ((((~(4798777668927599440LL))) % (((/* implicit */long long int) ((/* implicit */int) (!(arr_4 [(signed char)1] [i_1])))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5437
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -2157898946041012335LL);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (unsigned char)15)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)241))));
                var_12 = ((((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) + (((/* implicit */int) (unsigned char)6)));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)31)))), ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)));
}

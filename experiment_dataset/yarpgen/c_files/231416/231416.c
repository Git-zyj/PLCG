/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(var_6, 54354))) ? 54354 : var_1)) >> (var_11 - 25507)));
    var_13 = ((((((min(11181, -23072))) ? (~var_1) : 11182)) == (((11181 == 492228399) ? var_1 : 10896))));
    var_14 = ((((var_10 ? 54350 : 11182))));
    var_15 *= ((var_6 ? ((~((var_9 ? 65524 : (-127 - 1))))) : var_7));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0] [7]) ? ((((arr_1 [i_0 - 1] [i_0 - 1]) % 49665))) : (((15648 + -23072) ? -1 : (min(25422, 1187574984))))));
        var_17 -= ((min(-5868380138568821093, (arr_0 [i_0 + 1]))));
        var_18 = (min(1, (((((max(11184, 1))) > ((max(15648, 11189))))))));
    }
    #pragma endscop
}

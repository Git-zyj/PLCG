/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_7, 63);
    var_17 = (max((((-64 ? 1023 : 1))), (min(9223372036854775807, (((8388607 ? 112 : var_8)))))));
    var_18 = (max(((var_13 ? 9223372036854775807 : (9759844700846406822 - -11))), (((22780 && (((1396625300 ? var_14 : 4))))))));
    var_19 = ((var_5 ^ (((var_6 / 56) / (127 / 123)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_20 = (((((((12396063529129237179 ? 8686899372863144793 : var_13)) + 58599))) ? (((((((min(-30746, 24))) + 2147483647)) << (((var_5 + 1944284182) - 16))))) : 4294967284));
        var_21 = (((((((var_7 ? 10 : (arr_0 [i_0])))) ? (7 || var_10) : ((6050680544580314433 ? 48284350497585634 : 8686899372863144784))))) || (arr_2 [8]));
    }
    #pragma endscop
}

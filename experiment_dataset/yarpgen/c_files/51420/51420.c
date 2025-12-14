/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_2;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [6] &= 32767;
        arr_3 [8] [i_0] &= 2389842966788772832;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 &= ((var_15 ? 0 : (((((((-32766 + 2147483647) >> (var_13 - 41))) <= ((var_2 ? var_13 : 32))))))));
        var_18 = (min((((7696581394432 % 3771459343) * (max(3244809760548822191, 16632719639429582603)))), ((((255 % var_3) ? var_7 : 18248082633966988751)))));
    }
    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        var_19 = (((~2389842966788772832) == ((((min(2147483647, 32766))) | (-32748 & 1814024434279969012)))));
        var_20 = (((11329521909829317973 ? 12594364679664119966 : 1814024434279969024)));
    }
    var_21 = ((0 ? -19091 : -21052));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((-32063 && 887915542) * ((153 ? 32767 : var_10))))) ? ((var_12 ? (((max(6869, 94)))) : ((var_6 ? 4294967295 : 15032062682609177980)))) : ((((((((arr_1 [i_0]) ? 55357 : 107))) == ((1 ? 639271624 : 1723480099))))))));
        arr_3 [i_0] [i_0] = ((-(((!2208836887) % ((var_5 ? (-2147483647 - 1) : -920921995))))));
    }
    var_17 &= (((((2147483647 ? (!31712) : ((var_7 << (var_4 - 28158)))))) ? (((min(var_10, (!-1))))) : ((1 - ((1542949989 ? 2382332692 : 18446744073709551615))))));
    #pragma endscop
}

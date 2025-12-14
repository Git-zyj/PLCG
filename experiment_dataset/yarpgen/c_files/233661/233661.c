/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((-((var_8 ? (var_0 ^ var_3) : ((4067574232 ? 227393064 : 15540987155495579005))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = ((~((-63 ? 0 : 0))));
        arr_2 [i_0] [i_0] = (((!(((var_3 ? 1 : 16203))))) ? (((1704246560 || var_2) - ((-2175 ? 227393064 : 10)))) : (((arr_0 [i_0] [i_0]) ^ (min(4294967295, (arr_0 [i_0] [i_0]))))));
        var_19 ^= ((!((max(4294967290, 6377354376632576819)))));
        var_20 |= 16203;
    }
    #pragma endscop
}

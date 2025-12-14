/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((~(1 * 104))) ^ ((((-647411259 ^ 1692555931) >= -763029553800032818)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] &= (((0 ? 1745340387 : 65521)));
        var_16 = (((-1692555932 + 2147483647) >> (45721 - 45691)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_17 = ((8388606 | (37719 != 4148273550)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = ((((763029553800032816 ? 833151989 : 260046848)) == 27816));
            var_19 -= ((-1346011938 ? 15041 : 1));
            var_20 = (min(var_20, (12704 & -1101867217)));
        }
        var_21 = (27816 ? -39305866 : 17515);
        var_22 = (~51245);
    }
    #pragma endscop
}

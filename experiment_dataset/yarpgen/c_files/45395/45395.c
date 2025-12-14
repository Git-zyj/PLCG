/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] [7] = (((~67043328) ? 18446744073709551615 : 2147483637));
        arr_3 [i_0] = ((4294967295 ? -63 : 12347302774095811938));
    }
    var_18 = ((((((max(6040274, 142989288169013248))) | (max(0, 6099441299613739678))))) ? (((max((min(-30923, 0)), (min(30923, 30904)))))) : (max(((169 ? -30923 : 1316460720393225791)), (((16269 ? -142989288169013248 : -2147483616))))));
    var_19 = 7617;
    var_20 |= (max((max(((max(47605, 12288))), (18446744073709551615 * 14210435725999757028))), ((max(var_14, ((min(1, -10728))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((15725 * -28410) ? (0 / -22373) : ((255 ? 143 : (-32767 - 1)))))) ? ((((-32760 / 1554726720413067777) ? (3584 / 28) : (-28422 * -12667)))) : (((12666 / 12666) * (-22373 / 1554726720413067754))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((124 && (28407 && 117)));
        var_13 = (((255 & 7637959643187829131) ? ((354448601701596235 ? -5795417246475256490 : 28407)) : (117 * -7221)));
        arr_2 [i_0] = 32749;
    }
    var_14 = (max(var_14, ((((((3529908048824522666 * -32762) - 28410)) > (((((1573368723588054105 ? 32751 : 255)) << (((((-28413 + 2147483647) >> (-13163 + 13163))) - 2147455228))))))))));
    var_15 = ((((161 ? 243 : 8)) >> (((((-28407 + 2147483647) << (((3481511165 & 28400) - 9456)))) - 2147455214))));
    #pragma endscop
}

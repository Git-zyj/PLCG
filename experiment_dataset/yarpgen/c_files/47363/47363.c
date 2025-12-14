/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((min(var_7, (1048575 > var_9)))) ? ((((var_0 <= (-2152587350689941763 && -2152587350689941743))))) : (((~var_11) ? ((var_6 ? var_3 : var_3)) : (((106 ? 2152587350689941763 : -2082545399)))))));
    var_14 *= ((!((min(2251799813160960, var_7)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = var_3;
        var_16 = (~(((((1721192555 << (110 - 86)))) - ((var_8 ? var_3 : 2152587350689941763)))));
    }
    var_17 |= ((((var_11 != ((var_6 ? var_9 : var_9)))) ? 30 : var_3));
    var_18 = (max(var_18, ((((((((131071 ? -17697 : 5825394831527335149)) ^ 8865))) ? 56657 : (max(85, ((1443197439 ? 30 : 2082545369)))))))));
    #pragma endscop
}

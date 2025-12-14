/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_17 ? 1662736042 : (((((27077 ? 17935 : 1662736042))) ? -446986621255752167 : (7 > 236)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [9] = var_13;
        var_21 = (((208 * var_15) == 34396));
        var_22 = 2724988298260850726;
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [9] [i_1] = ((((((((var_2 ? 236 : var_9))) ? 184 : var_16))) ? ((((((170 << (var_18 - 12178342258828380541))) < ((1 ? 255 : 65)))))) : var_11));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_23 = ((((45 ? 17959 : ((-446986621255752178 ? 61 : -1662736043))))) ? 57 : ((var_6 ^ (((var_11 ? -1 : 190))))));
            var_24 = (max(var_24, (((-6609987467904380586 ? var_9 : 1)))));
            arr_10 [i_1] |= -2293161134338005975;
        }
        var_25 &= ((6782351845463993376 ? ((((0 | 1) ? (208 != 170) : ((1 ? 0 : 1))))) : (((((239 ? 168 : 6543024950107754461))) ? ((16 ? 4200680524339336576 : 3)) : (((1 ? 0 : 45279)))))));
        arr_11 [i_1] = -6609987467904380586;
    }
    var_26 = var_2;
    var_27 = (10 | 0);
    #pragma endscop
}

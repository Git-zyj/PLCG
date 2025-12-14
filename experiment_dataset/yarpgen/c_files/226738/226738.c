/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((!((((~-7193045584521752945) ^ (~0))))));
        arr_2 [i_0] = ((((((19 % 6626445701824280196) ? (var_5 | var_0) : (~var_10)))) && -7));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (~var_1);
        var_12 = (max(var_12, (((((0 ? 28672 : var_9)) * (((((1 ? 0 : -125))) ? (((127 ? 61342 : 18185))) : var_7)))))));
        arr_6 [i_1] = (((-6267086507559028354 == 4119093684959702477) != (min(var_6, 0))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_13 = ((24564 ? 14239929250657740490 : (((17247318073788716402 ? 0 : var_4)))));
                var_14 *= ((1746449508 ? (!5978578443194033769) : ((5588 ? var_2 : 16546169673829928132))));
            }
            var_15 += ((-((10 >> (var_5 + 32167)))));
            var_16 = 0;
        }
        var_17 = (!1);
        var_18 = (--17922);

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_17 [i_2] [1] = (((871563458 & var_7) ? (((9868696781066853008 ? 0 : 0))) : (var_5 - 8276831521633712734)));
            arr_18 [i_5] = ((10083797740764027166 ? 5441411874109196038 : 1));
            arr_19 [i_5] [i_5] [i_2] = -3737159509;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] &= (!6700361313692212460);
        arr_25 [i_6] [i_6] = ((-0 - ((var_3 ? var_1 : 7592975182895796219))));
    }
    var_19 = (min(var_19, (((!((6761553918033059218 || (((var_1 ? var_2 : var_1))))))))));
    var_20 = (max(var_20, (((var_7 & (((((11833772435661544263 + -23024) > ((max(9223372036854775807, 22))))))))))));
    #pragma endscop
}

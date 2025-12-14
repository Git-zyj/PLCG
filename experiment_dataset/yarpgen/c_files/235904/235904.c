/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((max(2153254841, var_1)) >> (var_13 + 28189)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 |= 0;
        var_20 = ((0 ? -69 : 1));
        var_21 = (max(1, (min(2153254841, 1287212014))));
        var_22 = (((((15944967236270104258 ? (min(13114418835939380450, var_0)) : ((((-83 + 2147483647) >> (-1 + 13))))))) ? 5682917277246606005 : 2384114218));
        var_23 = (((arr_0 [i_0] [i_0]) ? ((((max(-560845326632542702, 25441))) ? (63 < -14) : (-7097650836484593105 > var_14))) : 1));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            {
                var_24 = ((560845326632542718 ? -1667728095594065862 : (~32767)));
                var_25 = 1287212013;
                var_26 = (((arr_6 [i_1 + 1] [i_2 + 1]) ? (max((arr_5 [i_1 + 2] [i_2 + 1]), 4080)) : (arr_6 [i_1 + 1] [i_2 - 1])));
                var_27 = (arr_2 [i_1]);
            }
        }
    }
    var_28 = (max(var_28, ((max((-32767 - 1), ((((((min(var_4, var_13)))) > 3007755281))))))));
    var_29 = min(3728951139, (min(var_9, 560845326632542732)));
    #pragma endscop
}

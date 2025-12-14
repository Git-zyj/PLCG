/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = max(13548127170226607719, 59);
                arr_6 [8] [8] [8] &= ((8796092760064 ? 3216281190 : 1097310295));
            }
        }
    }
    var_15 = ((1342604040 ? -74 : 410));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = (arr_9 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_17 = ((~(((-2147483647 - 1) & var_5))));
            var_18 += (arr_7 [i_2]);
        }
        var_19 *= (min(var_7, ((((max(var_4, (arr_7 [i_2])))) ? ((((arr_7 [i_2]) - (arr_8 [i_2])))) : (((arr_8 [i_2]) ? var_3 : (arr_7 [i_2])))))));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4 + 1] [i_4 + 2] = (((((1218065825 == 2991256154789298952) ? 1 : -37)) * ((~((max(var_6, (arr_12 [i_4] [i_4 + 1]))))))));
        var_20 ^= (arr_12 [i_4 - 1] [i_4 - 1]);
        var_21 = (min((arr_12 [i_4 - 1] [i_4]), ((-(((arr_12 [i_4] [i_4 + 1]) / 5574342082646563697))))));
    }
    var_22 = ((31 ? (((((-26801 | (-9223372036854775807 - 1)))) ? -357860590 : 1)) : ((((max(9025593146970461404, 9223372036854775807)) >= ((max(2027145531, 253))))))));
    #pragma endscop
}

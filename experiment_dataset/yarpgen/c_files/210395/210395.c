/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = (((-74 + 30) ? (min(var_1, (13704410234055119124 - 29))) : (~939657229)));
        var_15 = (min(1187712419, -63));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 &= 2147483647;
        var_17 &= ((((min(16822329204946591093, 12461755301763107600))) & (((!var_9) ? (((max(var_2, var_6)))) : (arr_1 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        var_18 = (min(74, 4294967295));
                        var_19 = ((!((max((min(var_6, 18389880703997211259)), ((17776038795385004586 * (arr_3 [i_1]))))))));
                        var_20 = (min(var_20, (!0)));
                    }
                }
            }
        }
    }
    var_21 = ((!((((-30657 + 2147483647) << 0)))));
    #pragma endscop
}

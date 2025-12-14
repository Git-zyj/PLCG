/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = ((((min(((-10 ? var_7 : -161)), 1))) ? ((((var_7 & (arr_2 [i_0] [i_0]))))) : (arr_2 [i_0] [i_0])));
                var_12 = ((((3792656097 ? (arr_1 [i_0] [i_0 - 2]) : var_6)) + (((var_8 || (arr_2 [i_0 - 2] [i_0]))))));
            }
        }
    }
    var_13 = (((((1873658151 ? -143 : (max(var_6, 722065343))))) ? var_5 : -4923));

    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_14 = (((min((14080507185979710804 / var_0), ((min(3242129508, -148))))) >= var_2));
        var_15 = (min((arr_4 [i_2 - 1]), (((arr_6 [i_2 + 4]) ^ 9688446990645134210))));
        var_16 = (((((var_4 / 1) ? (((78 ? var_8 : var_6))) : var_5)) - (((~(((arr_4 [1]) * var_9)))))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_17 = ((((((arr_9 [i_2] [i_2]) ? (~var_6) : (~var_2)))) ^ ((((max((arr_8 [i_3] [i_3] [i_2 + 3]), var_9))) ? (var_0 & 1) : var_0))));
            var_18 = (max(var_18, var_7));
            var_19 = (max(((((arr_7 [i_2 + 1] [i_2] [i_2]) ? 18 : (arr_7 [i_2 + 2] [i_2] [1])))), ((~(-32756 ^ 9660233959723719843)))));
            var_20 *= (min(((((((arr_9 [i_2] [i_3]) >> (var_7 - 8271746410791518933)))) ? ((min((arr_5 [i_2]), var_0))) : ((var_1 ? var_2 : var_5)))), (((var_2 ? (((1 << (arr_4 [i_2])))) : (4106820775 & 417134540))))));
            var_21 = ((((163 | (arr_5 [i_2 + 4])))) % ((3021368290 ? var_3 : var_9)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = ((var_6 - ((1 ? var_8 : -3805815596575659908))));
            var_23 = (((arr_12 [i_2] [i_4] [i_2 + 3]) ? -30454 : (arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 3])));
            var_24 = (((((var_6 ? (arr_10 [i_2] [i_2]) : 10401))) ? (-349232352 ^ var_5) : ((((1 != (arr_10 [i_2] [i_4])))))));
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            var_25 = ((((max((-773457165 & 81), ((min(var_4, 40467)))))) ? ((((~8786510113985831761) ? (arr_8 [i_2] [i_2 - 1] [i_2]) : (794588210 != 1)))) : (min(((var_1 ? 18446744073709551606 : (arr_13 [i_5] [i_2] [i_5]))), var_6))));
            var_26 = ((min(-1333966345, ((19 << (var_1 - 470098069329393165))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_27 = (~(var_9 / 56317535));
        var_28 = (arr_9 [i_6 + 2] [i_6]);
        var_29 = ((1 >> (-56317519 + 56317520)));
        var_30 ^= (~var_3);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_31 = ((-(((arr_10 [i_7] [i_7]) ? var_0 : var_3))));
        var_32 = var_1;
        var_33 = var_4;
        var_34 ^= 0;
    }
    #pragma endscop
}

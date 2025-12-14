/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -3147125559846462220;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (max(((-((var_12 ? var_6 : 42)))), (min(var_6, var_9))));
        var_17 = (var_13 ? (((((var_5 ? 54129 : 1702051470))) ? var_7 : (max((arr_1 [i_0]), 57908)))) : ((max(1702051470, 1702051470))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_13))) ? (105 | var_10) : (var_5 > var_6))))));
        arr_6 [i_1] [14] = max((min(((51985 ? 13550 : 51985)), var_11)), (arr_2 [i_1]));
        var_19 = (max(var_19, (((((((var_2 ? (arr_3 [i_1]) : (arr_3 [i_1])))) * ((-(arr_1 [i_1]))))) * (max(((max(var_12, (arr_2 [i_1])))), 18446744073709551615))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = min(((max((arr_10 [i_2]), var_8))), (min((var_4 ^ var_1), (13944394208148410763 & var_6))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 -= (15079215804893385993 ? (max(0, 0)) : (((arr_10 [i_4 - 1]) ? 5364854568098537341 : 42)));
                    var_22 = (~var_12);
                    var_23 = ((((((13550 ? (arr_8 [5]) : 214)))) ? ((var_1 & ((246 ? 18446744073709551615 : 6318418637272202159)))) : (0 && 11747057646973919566)));
                    var_24 = ((((((arr_16 [i_4 - 1] [i_4] [i_4 - 3]) ? 0 : var_6))) ? (((0 * var_3) ? ((0 ? 13550 : 15281454347116448614)) : (max(13157006739749054554, var_7)))) : ((((((1393778261383751970 << (5289737333960497062 - 5289737333960497049))) < (~var_5)))))));
                }
            }
        }
    }
    var_25 = ((!((((min(var_3, 1685675030))) && ((min(1393778261383751970, var_7)))))));
    var_26 *= ((((min(0, (((13550 << (var_6 - 7023763598926681201))))))) ? (max(var_6, var_5)) : var_10));
    #pragma endscop
}

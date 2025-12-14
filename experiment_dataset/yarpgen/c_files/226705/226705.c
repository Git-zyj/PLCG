/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((((var_6 ? var_15 : var_9))), (max(var_10, var_13)))), ((((~var_6) > (var_5 - var_6))))));
    var_21 = (--1);
    var_22 = (max(((min(var_15, 10880133631388813208))), ((max((max(96, 65528)), (max(1, 3)))))));
    var_23 = (max(((max((var_13 * 7461), (min(var_18, var_18))))), (min((min(var_10, var_11)), (max(5, var_19))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((7233939806271224667 ? -5 : -6));
                    var_24 += (max(((((((670630603 ? 7566610442320738407 : 5))) ? 4539628424389459968 : (((max(0, 0))))))), ((((min(246, 4539628424389459952))) * (((arr_6 [i_0] [i_1 - 2] [i_2]) ? (arr_3 [i_1] [i_2 + 1]) : var_19))))));
                }
            }
        }
        var_25 += (-(min(((-(arr_0 [i_0]))), ((max(var_17, var_12))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 -= ((!((!((max(47919, 33)))))));
        arr_13 [i_3] = (max((min((min(var_19, 36)), ((((arr_12 [i_3]) ? (arr_12 [i_3]) : var_3))))), ((min((((arr_12 [i_3]) ? 1 : var_9)), ((min(var_17, var_13))))))));
        var_27 |= ((((-(((arr_10 [i_3] [i_3]) * (arr_11 [i_3]))))) > ((((min(var_11, 0))) ? -73 : -var_12))));
        arr_14 [i_3] = ((((max(((var_18 ? (arr_12 [i_3]) : (arr_12 [i_3]))), ((max((arr_12 [i_3]), (arr_10 [i_3] [i_3]))))))) ? ((((max(var_13, var_3))) ? ((min((arr_11 [i_3]), var_9))) : ((-670630626 ? var_5 : (arr_11 [i_3]))))) : ((-(((arr_12 [i_3]) + var_13))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_28 += (((max((min(4106864763, -670630607)), (((-109 || (arr_12 [i_4]))))))) && (((((var_9 ? var_10 : -3511579))) && ((((arr_16 [i_4]) ? var_0 : 127))))));
        var_29 = ((((min(((30951 ? 0 : 0)), ((((arr_16 [i_4]) ? 25232 : var_17)))))) ? (63 + 1) : ((((max(65535, (arr_16 [i_4])))) * 32))));
    }
    #pragma endscop
}

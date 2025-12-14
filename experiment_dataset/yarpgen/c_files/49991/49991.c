/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((58253 ? 1 : -8643943293004047899)) << (((var_1 != (max(var_14, 9411607857578992682)))))));
    var_18 &= (((((-((var_6 ? var_4 : 58253))))) ? ((max(((var_11 ? var_2 : var_14)), 7282))) : var_3));
    var_19 += ((!(!var_4)));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 = ((((((max(55, (arr_2 [i_0])))) + (arr_0 [i_0 - 3]))) | -1025525785));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = (((max((((var_3 ? -1025525785 : (arr_5 [i_0] [i_1] [i_0])))), 4772074260219510362)) - ((var_8 ? (arr_10 [i_0] [i_0]) : var_15))));
                    var_21 = (min((((arr_6 [i_2] [1]) ? (arr_6 [i_0 - 2] [i_1 + 1]) : (arr_6 [i_0] [i_0 - 2]))), (((~var_3) ? (max(1025525780, 1025525782)) : ((-(arr_0 [i_0])))))));
                }
            }
        }
        var_22 = ((((var_16 ? 22413 : (-37 <= 22739)))) != 1);
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_15 [6] |= ((((~(21 ^ var_7)))) & -4772074260219510368);
        var_23 = (-1025525786 * 1);
    }
    #pragma endscop
}

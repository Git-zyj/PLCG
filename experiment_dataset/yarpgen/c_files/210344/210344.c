/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_2 * var_11) ? ((var_2 ? var_10 : var_9)) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (-9223372036854775807 - 1);
                var_13 = (max(((9223372036854775807 + (var_3 == 29555))), (((-12322 ? -12322 : -17522)))));
                arr_5 [i_0] [i_1] [i_0] = (((((-8606131183912387785 + 9223372036854775807) >> (((max(-8513307243328079755, 29360128)) - 29360070)))) ^ 3433740752));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] = ((!(!var_8)));
                    var_14 = (0 && 17513);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_15 = (min(var_9, (((((((8693301654398347659 ? var_6 : 0)) + 2147483647)) << ((((var_2 << (4723095954039452135 - 4723095954039452132))) - 680)))))));
        var_16 = (max((((var_8 > (((arr_9 [i_5] [i_5 - 1] [i_5 + 2]) ? var_4 : var_5))))), 291571125209772729));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [i_8] [i_8] = (min((arr_17 [i_5 + 1] [i_6 + 1]), var_0));
                        var_17 &= ((var_0 > (min(29360131, 9223372036854775807))));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (((5180129977098886918 ? (((var_0 ? var_8 : var_5))) : ((1215968105 ? 58260 : var_10)))))));
    #pragma endscop
}

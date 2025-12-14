/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 < (((var_6 == (-257553622 / -88))))));
    var_12 = ((((((!var_9) || (var_4 & var_7)))) + (((!var_3) - (257553622 && var_9)))));
    var_13 += (!var_5);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (((((-122 + 2147483647) >> (var_3 - 7054))) + ((-(((!(arr_1 [i_0 + 2]))))))));
        arr_3 [i_0] = (((-10617 - (1 / -939565641))) ^ (-257553622 || 0));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_15 = (((((1 == (1 * var_9)))) ^ ((((-78 - 26324) > 15520757868811015147)))));
        arr_6 [i_1] |= (~(0 ^ -2031245448));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_16 = ((((0 >> 0) ^ (((var_8 == (arr_5 [i_1] [i_1 - 3])))))) << (((!4601344602973267591) * (!var_3))));
                        var_17 = ((+(((126 && -122) - var_10))));
                        arr_13 [i_4] [i_3] [i_2] [i_1 - 3] = ((!((!(~var_0)))));
                        arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1] = (9787374886058027395 && 48763);
                    }
                }
            }
        }
    }
    #pragma endscop
}

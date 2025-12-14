/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 -= (arr_0 [i_0]);
        var_15 = (max(var_15, ((min(((32766 ? ((48951 ? 1627614305920768224 : 4095)) : (arr_1 [i_0]))), (((!(((arr_0 [i_0]) > (arr_1 [i_0])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (((((255 >> ((((-23974 ? var_9 : -60)) - 42375))))) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (-23974 - 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = ((!(11140 + 3418901514825431479)));
                                arr_12 [i_0] [i_1] = (!var_2);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] [3] = var_7;
                    var_18 -= ((((((112 ? -20552 : -408409222))) ? ((((!(arr_6 [i_1] [i_1] [i_1] [3]))))) : ((74 ? -1677695981 : 1627614305920768250)))));
                    var_19 += arr_6 [i_0] [9] [i_0] [i_0];
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_20 = (max(var_20, (((var_9 >> (13466036295510206834 - 13466036295510206819))))));
        arr_17 [8] [i_5] = (((((((-6 || -3944) && (249 / 402326798))))) > var_7));
        var_21 &= ((118 ? 183 : 177));
    }
    #pragma endscop
}

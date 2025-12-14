/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = ((((var_0 | (var_1 && 65521)))) ? (min((1506783604 * 2046), ((((arr_4 [i_0 - 1]) ? 11403 : var_6))))) : var_6);
                var_11 = (max(var_11, ((((7067976281059672183 >> (18019 - 18010)))))));
                var_12 = ((254643651 ^ ((3482419987 ? ((var_5 ? 916981181 : 1410530057)) : 1079584851))));
            }
        }
    }
    var_13 = 4554936643078626627;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = (max((4294967295 * 3219), (((!(arr_8 [i_2]))))));
                    var_14 = ((48142 ? (max(3072323853, (min(-4554936643078626625, 39584)))) : (((8796093022207 ? 692629503 : 65533)))));
                    arr_18 [i_2] = ((!((max((!var_0), var_7)))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_32 [i_5] [6] [i_6] [i_6] [i_8] &= (~29606);
                        var_15 = (((65526 - 11403) ? -var_1 : ((((var_4 > (arr_28 [i_8 - 3] [i_8] [i_8])))))));
                        var_16 = (max((max((4294967279 < 17363), 1410530041)), 42509));
                        arr_33 [2] [i_6] [i_5] [i_8] [i_7] = ((((-8616460462968066960 | ((max(19, 3482419987))))) | 35929));
                        var_17 = (max(var_17, 65533));
                    }
                }
            }
        }
        var_18 = 3434;
        var_19 *= -1410530042;
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        var_20 = (max(var_20, (((min(1410530057, (676623131 - var_2)))))));
        var_21 = ((((max(1079584842, 7659745219305704602))) ? (max((29135 >= var_3), (min(var_4, 7659745219305704609)))) : (((23006 ? 52136 : (arr_15 [i_9] [i_9 + 1] [i_9] [i_9 - 1]))))));
    }
    #pragma endscop
}

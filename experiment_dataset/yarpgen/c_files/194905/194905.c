/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] = 12468;
                    var_17 -= 97;
                    arr_11 [i_0] [i_0] = 1;
                    arr_12 [i_1] [i_0] [i_2] [i_2] = (((!4705370100314818892) << ((((-32226 / 6726188488552005391) || (arr_2 [13] [i_1] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_18 [i_4] = var_9;

                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, ((((((((var_2 ? var_14 : (arr_7 [6] [6] [1] [i_3])))))) * ((-(32226 - 10098613007400279041))))))));
                    arr_23 [i_5] [i_4] [i_4] [i_3] = var_16;
                    arr_24 [i_3] [i_4] [i_5] = ((12488 - (((arr_7 [i_3] [i_3] [i_3] [i_3]) + (arr_14 [i_3] [i_5])))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_6] = (((~53052) ? (+-32220) : (((!(3162299935 * -374875106))))));
                    var_19 -= 12494;
                    arr_28 [i_6] = (~27889);
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = min(((!(arr_3 [i_0] [i_1]))), (305931290 <= 174949780));
                arr_6 [i_0 + 3] [i_1] = (max((((max(733350279701648468, -49)))), (arr_1 [i_0 - 1] [i_1])));
                arr_7 [i_0] = (((((var_8 ? 52 : 114))) >= (min(-59, 17713393794007903148))));
                arr_8 [i_0] [i_1] = ((var_16 / (~25550)));
            }
        }
    }
    var_20 |= (~((max(((max(1, -70))), 23))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_3] [i_3] = 48;
                var_21 = (97 ? 70 : 3655376191613309740);

                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_22 = -var_15;
                    var_23 = (max(var_23, (((min(var_1, (~7186015181032208457)))))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_2] [i_2] = (33970 ? 23 : 16263431052405723097);
                    arr_23 [i_2] [i_2] [i_3] [i_5] = (max(((16263431052405723082 * (((min(var_8, var_11)))))), (arr_0 [i_2] [i_3])));
                }
                arr_24 [i_3] [i_2] = ((var_12 < (!var_11)));
                arr_25 [i_2] [i_3] [i_3] = (((-88 / -53) ? (max((max(25550, var_15)), 25550)) : (((var_10 != (arr_1 [i_2] [i_3]))))));
            }
        }
    }
    #pragma endscop
}

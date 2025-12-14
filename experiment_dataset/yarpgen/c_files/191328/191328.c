/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_7 + var_6) ? (((!9) ? var_7 : var_8)) : ((((var_2 || (((var_0 ? 1 : 192)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (arr_3 [i_0] [i_1 + 1] [i_3]);
                            arr_12 [i_0] [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 1] = 10;
                            arr_13 [i_0] = (((((((max(var_10, 4294967295))) / ((19388 ? 1073741823 : 18014123631575040))))) ? (min((min(var_7, (arr_10 [i_0] [i_1] [i_2] [i_3 - 1] [i_2 + 1] [i_0]))), (((var_2 ? (arr_10 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_0]) : 1))))) : (arr_5 [i_0] [i_3])));
                            arr_14 [4] |= 119;
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((max(((207 ? (arr_5 [i_0] [i_2 + 3]) : 191)), (6 * var_3))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = (max((((var_1 * 86) * var_1)), (((-var_9 != ((min(1854902613, var_2))))))));
                arr_17 [i_0] = ((2 ? 6917529027641081856 : 1391149230));
                arr_18 [i_0] [i_0] = (((!-5599) <= var_11));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_4 - 1] [4] |= ((3 >> (((((206 * -9) ? (arr_8 [i_1 + 1] [i_1 - 1] [i_4 + 1] [i_4 + 1]) : var_7)) - 3858793484))));
                            var_13 = 2440064670;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

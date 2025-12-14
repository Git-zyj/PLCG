/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = ((((min((min(128, 6)), ((min(-103, 103)))))) ? ((+((min((-127 - 1), var_4))))) : (((((min(102, -103))) && ((max(103, 103))))))));
                    var_11 = (max(var_11, ((max(-115, (min(1148417904979476480, 102)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_12 = max(103, 65535);
                    var_13 = -103;
                    var_14 = (((~14543) == 234020348));
                    var_15 = (min(var_15, 0));
                }
            }
        }
    }
    var_16 = (max(var_16, -234020348));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_17 = -14545;
                                var_18 = (min(((-(~0))), ((min((min((-127 - 1), var_2)), 255)))));
                                arr_30 [i_6] [i_7] [i_8] [i_9] [i_6] [i_10] = (((max(7238900903637412984, 19351)) >= (((103 ? 0 : 7680)))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_19 -= (((max(54, 24547))));
                        arr_34 [i_6] [i_6] [1] [i_8] [i_6] = 1876952797;
                        arr_35 [i_6] [0] [i_8] [0] = (1130907035 == 103);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_44 [i_6] [i_7] [i_8] [i_8] [i_6] [i_13] = ((((min((min(18446744073709551602, 100)), 14562))) ? 1 : ((20 ? 3294904610 : 14282295303908145884))));
                                var_20 = (min(var_20, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((max((min(-0, var_4)), ((((min(111, 0))) << (((423530303 - 50) - 423530250)))))))));
    #pragma endscop
}

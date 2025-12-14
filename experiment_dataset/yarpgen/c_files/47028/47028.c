/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = 3976583371;
            var_18 = (arr_5 [i_0]);
            var_19 *= (max((arr_1 [19] [i_1]), ((1228782138 ? (arr_1 [i_1] [i_0]) : (31 / 55941)))));
        }
        arr_7 [i_0] [i_0] = (max(2846317236, (!1)));
        arr_8 [i_0] [i_0] = (-6270964574282873062 / -8247402178285914313);
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        var_20 = (min(var_20, (~1747404882)));
        var_21 = ((4294967288 ? 32756 : 13899));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] = min((max(1448650076, 1625341306)), ((32758 ? 1448650055 : 32754)));
        arr_14 [i_3] [i_3] = ((-(arr_3 [i_3] [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_17 [9] [i_4] = (-(((-8247402178285914292 > (arr_16 [i_4] [i_4])))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_20 [i_5] = (((((((arr_18 [i_4] [i_4]) ? (arr_18 [i_4] [i_4]) : (arr_18 [i_4] [i_4]))) * (7915141532085292669 < 2734767213))) != ((max((arr_19 [i_4] [i_5]), 50)))));
            var_22 = (min(var_22, 30720));
            arr_21 [i_5] = 1657621669;
            var_23 = 10531602541624258936;
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            var_24 -= (max(((19011 ? 2637345642 : 2429837477)), -4095));
            var_25 *= (max(32758, 7));
            var_26 = (max((min(6050, (max(2637345615, (arr_23 [i_6] [i_6] [i_6]))))), (arr_24 [i_4])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_27 ^= ((46524 ? 909374857 : (768173884 < 2637345620)));
                            var_28 = (1 * 248);
                        }
                    }
                }
            }
            var_29 = 2346774401;
            arr_36 [i_4] |= ((((((arr_23 [i_7] [i_4] [i_4]) ? 0 : (arr_33 [18] [1] [i_7] [i_7] [0] [i_4] [1])))) ? (((arr_25 [i_7] [18]) ? (arr_28 [i_7] [i_4] [i_4]) : -8789025669598863650)) : (arr_22 [i_4] [i_7])));
            arr_37 [i_7] [5] [i_7] = arr_15 [i_7 + 4] [i_7 + 3];
        }
        var_30 = (max(-1, ((-12699 ? (((min(32764, 19011)))) : (max(-8247402178285914304, 16827))))));
    }
    var_31 = (max(var_31, ((min(3454539513349195277, 1657621669)))));
    #pragma endscop
}

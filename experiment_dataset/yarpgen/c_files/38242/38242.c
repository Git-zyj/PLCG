/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((((1893719922 ? 176 : (arr_0 [i_1 - 2])))) ? ((((arr_2 [8] [i_1 + 3] [i_1]) && (arr_0 [i_1])))) : (arr_2 [i_0 + 1] [i_0 - 1] [i_1])))) < ((~(arr_1 [i_0 - 1]))));
                var_12 = 0;

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_13 = (((((((arr_6 [i_0 + 1] [i_1 + 1] [i_2]) ? (arr_0 [i_0]) : 136365211648))) ? (((-(arr_4 [i_2])))) : 8128)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_0 + 1] = ((max(((106 ? 25830 : 12), ((max((arr_5 [i_1]), (arr_4 [i_0]))))))));
                                var_14 = ((var_7 != ((((min((arr_0 [i_1]), var_10))) ^ (((arr_9 [i_3] [i_3] [i_3] [i_1]) ? var_5 : (arr_2 [i_1] [i_3] [i_1])))))));
                                var_15 = (min(var_15, var_1));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] = (((arr_10 [i_2] [i_2] [i_2] [0]) ^ (max((min((arr_7 [i_0] [i_1 + 3]), 30078)), (arr_3 [i_0] [i_1])))));
                    var_16 = (max(var_16, ((((((-((2432774354 ? (arr_1 [i_0]) : (arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])))))) ? (--327436760) : (((arr_6 [i_2] [9] [i_2]) ? (!2401247356) : (~-2223579793204359529))))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_17 = (((-(((arr_13 [i_1 - 1]) ? (arr_4 [i_5]) : 118)))));
                    var_18 = (max(30491, 136365211630));
                    var_19 = (max(var_19, (((min(((15 ? var_7 : (arr_9 [12] [i_5] [i_1 - 1] [12])), (!var_6))))))));
                    var_20 ^= ((!((max(((var_6 ? var_0 : var_10)), (~var_10))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_21 = ((255 ? (arr_4 [i_0 + 1]) : (arr_8 [i_0] [i_1 - 1] [i_1] [i_1])));
                    var_22 = 27;
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_23 *= ((((((2432774362 ? var_6 : var_10)))) && ((((((!(arr_19 [i_0 + 1] [i_0] [i_0]))))) == ((var_5 ? 0 : (arr_1 [16])))))));
                    var_24 = 0;
                    var_25 = (min(var_25, (((((((1893719922 ? var_10 : var_6))) ? ((-65 ? -1952002674 : var_0)) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                }
            }
        }
    }
    var_26 = (((~-26) || (3226831942 && var_9)));
    var_27 = (((((((65534 ? 199 : 32759))) > ((var_4 ? var_0 : 66)))) ? (max(-var_0, (min(0, var_3)))) : 31));
    #pragma endscop
}

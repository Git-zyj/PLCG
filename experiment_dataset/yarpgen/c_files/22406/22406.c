/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 |= ((((((((arr_1 [14]) ? 0 : var_8)) < 151751661))) != 0));
                var_18 = 2845201509991300152;
                arr_5 [i_0] = ((((-1 - (arr_3 [i_1 + 3])))) ? var_13 : (max(var_6, var_0)));
                arr_6 [4] [i_0] [i_1] = 11681395396646767778;
                arr_7 [i_0] = (((((min((((var_14 > (arr_1 [i_0])))), -1)))) * (((((var_8 << (4294967295 - 4294967273)))) ? (8796092891136 >= 1933809123) : 2450233912))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] = ((((((((1151660951802364730 ? var_11 : 8))) ? (var_14 & 36770) : 1))) ? (arr_11 [i_3]) : 6378687602708913040));
                var_19 = 36770;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] = ((((151751661 << (36770 - 36766))) << ((((-7269534446871153458 ? 65535 : 8478144164752088174)) - 65527))));
                var_20 += ((1558235978 ? var_1 : -710825434));
                var_21 += (max(((17216 ? 0 : ((8273947716892484604 ? -1781436568168687174 : 6068523752932887797)))), (8273947716892484611 || 114)));
                var_22 = ((((min((arr_11 [i_4]), (arr_11 [i_4])))) ? ((((((var_15 ? (arr_19 [i_5] [i_4] [i_4]) : 32767))) && (959876457 - 0)))) : (((var_0 >= (28765 & 3584))))));
            }
        }
    }
    #pragma endscop
}

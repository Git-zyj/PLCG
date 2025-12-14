/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_11 = (min(var_11, (((!(arr_6 [14]))))));
                        var_12 = ((((((arr_8 [i_0] [i_0] [16] [i_3]) ? (((arr_4 [12] [i_1] [2]) & (arr_3 [i_0]))) : var_5))) | ((49505 ? ((max(758863169, 3536104101))) : (max(3536104152, 3374716197529900146))))));
                        var_13 = (max((min(((max((arr_4 [i_1] [i_1] [i_1]), (arr_3 [i_0])))), (min(209, 18446744073709551605)))), var_3));
                        var_14 = ((((~var_9) ? (((15072027876179651459 ? 58501 : 1912479761))) : ((67108800 ? 15072027876179651470 : 3586730767)))));
                        var_15 = ((((max(2872279756, (arr_3 [i_2 - 1])))) ? 3536104152 : (max((((arr_4 [i_0] [i_1] [i_1]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_0 [9]))), (((16383 ? 1 : 1)))))));
                    }
                    arr_9 [i_0] [i_0] = (max(var_0, (arr_8 [i_0] [i_1] [i_0] [i_1])));
                    arr_10 [i_0] [i_1] [i_0] = (min(var_2, ((205 < ((1 ? 1737349120 : -5920905685836784785))))));
                    var_16 = (min(var_16, var_0));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_4] = ((10291 & ((min(var_3, (arr_12 [i_0] [i_1] [i_4] [i_4]))))));
                        var_17 = ((((min((-127 - 1), 65526))) ? 5894 : (((arr_7 [1] [i_1] [i_1]) ? 14336 : -229578384))));
                        var_18 = 1;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_19 = ((((max((((arr_2 [i_0] [i_1] [i_2]) & (arr_5 [i_0] [i_1] [i_2] [i_5]))), (arr_1 [i_0])))) ? ((-(arr_11 [i_2] [i_2] [i_2 + 2] [i_2] [1] [i_2]))) : (arr_15 [i_0] [i_0] [i_0] [i_0])));
                        arr_16 [1] [i_1] [i_2] [i_5] = -1737349121;
                        var_20 = (arr_6 [16]);
                    }
                }
            }
        }
    }
    var_21 = ((var_3 ? var_4 : 21));
    var_22 = ((255 ? 92 : ((var_5 ? ((7637899235682697192 ? 16273389396786836128 : 43298)) : (((max(var_3, var_6))))))));
    var_23 = (min(var_23, ((min((min((min(var_5, 21313)), ((max(1, var_8))))), var_7)))));
    #pragma endscop
}

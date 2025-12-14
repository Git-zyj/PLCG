/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(-var_2, (var_2 == var_0));
    var_12 = (((var_7 + 2147483647) << (((((2147483639 > 74) ? ((2147483641 << (((var_9 + 72) - 4)))) : var_0)) - 2147483641))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max((((-2147483641 > (arr_2 [i_0])))), (((arr_2 [i_0]) ? 641923971 : ((((-1729033251 + 2147483647) << (-66 + 67))))))));
        var_14 *= ((((!(76 < 3653043328))) || (((((((arr_0 [i_0]) ? 9997 : var_1))) ? 15360 : (min(var_3, -4096)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (-4504011817143989935 / -1729033251);
        var_15 = (arr_0 [i_1]);
        arr_6 [i_1] = -602506856;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max(255, var_8)))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] = 641923966;
                        var_17 = (((((1 ? (arr_10 [i_1] [i_2 - 1] [i_1] [i_4 + 1]) : -19398))) ? ((((arr_10 [i_1] [i_1] [i_1] [i_3]) > (arr_10 [i_1] [i_1] [i_1] [i_4 + 2])))) : ((129 ? (arr_10 [i_1] [i_2 - 2] [i_1] [i_4 + 1]) : (arr_10 [i_1] [i_1] [i_1] [i_1])))));
                    }
                }
            }
        }
    }
    var_18 = (max((-2147483647 - 1), var_3));
    #pragma endscop
}

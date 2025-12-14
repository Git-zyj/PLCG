/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 10562308780856999478));
    var_13 = var_7;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = -67;
        arr_2 [i_0] = ((-(min((((arr_0 [i_0]) ? var_1 : (arr_1 [1]))), ((231 * (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 ^= (((((max((arr_7 [i_1] [i_2]), (arr_4 [9] [i_2]))) & (-11701 | 5202799368977946595))) <= var_10));
                    arr_9 [i_0] [i_0] [i_0] = (max(((7884435292852552138 ? 4294967284 : 4294967273)), var_7));
                    var_16 = ((var_4 ? ((var_8 | ((var_10 ? (arr_5 [i_2] [i_1] [i_0]) : 11)))) : (((var_5 >> ((((1270865770251006611 ? 4294967284 : 17175878303458545002)) - 4294967280)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5 - 1] [i_5] [i_3] = 1270865770251006620;
                        var_17 = (((arr_18 [i_3] [i_3] [i_3] [i_6]) && (arr_13 [i_5 + 1])));
                        arr_23 [i_3] = 7884435292852552138;
                    }
                }
            }
        }
        arr_24 [i_3] [i_3] = 10;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_18 += (arr_12 [i_7] [i_7]);
        var_19 = (((((arr_20 [i_7] [8] [i_7] [i_7]) + 2147483647)) >> (((arr_25 [i_7] [i_7]) >> (var_4 - 213668603496165347)))));
    }
    var_20 = (((((((var_6 ? var_8 : var_1)) * var_5))) ? ((max(7889, 10))) : ((max(var_7, 58)))));
    #pragma endscop
}

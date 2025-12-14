/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [2] = (((((((min((arr_2 [i_0]), (arr_1 [i_0] [6])))) ? (min((arr_0 [i_0]), var_9)) : ((18437736874454810624 ? 18437736874454810608 : 18437736874454810624))))) ? ((((max(9007199254740992, -512))))) : (min(((min(62068, -1445))), (~9007199254740985)))));
        arr_4 [i_0] = ((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))));
        arr_5 [16] [i_0] = ((((arr_1 [i_0] [i_0]) ^ (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [10] [i_0]))))));
        arr_6 [i_0] = ((((min((!1), 512))) ? ((-((1 ? (arr_0 [i_0]) : var_7)))) : (((arr_2 [i_0]) ? (((arr_2 [i_0]) / (arr_0 [11]))) : (11 - 165)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_11 [i_1] = (max(((((((arr_8 [i_1]) ? (arr_7 [9]) : (arr_9 [1]))) >= (arr_8 [i_1])))), 511));
        arr_12 [1] = (arr_7 [2]);
        arr_13 [10] = -1;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_16 [i_2] = 0;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_27 [i_3] [i_5] = (((arr_24 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1]) ? -485 : (min(((((arr_19 [i_3] [i_3]) ? (arr_17 [i_3]) : (arr_20 [i_3] [i_3])))), ((245 ? 0 : (arr_0 [3])))))));
                        arr_28 [i_3] [i_3] [i_4] [i_5] = (arr_19 [i_3] [i_4 - 1]);
                        arr_29 [i_2] [i_2] [8] [i_5] = 10;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_32 [2] = ((((min((arr_31 [1]), (arr_31 [12])))) ? (min((((arr_31 [1]) ? 246 : (arr_31 [1]))), (arr_30 [i_6]))) : (((arr_31 [18]) % (arr_31 [14])))));
        arr_33 [12] = (arr_31 [4]);
    }
    var_12 = var_3;
    #pragma endscop
}

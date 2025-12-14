/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((var_10 ? -5644826683849473633 : 64356391))) ? ((((((1833497061 >> (var_8 - 1380560340)))) <= ((36 ? 36 : -6674536966217877611))))) : (((!(max(var_2, var_3)))))));
    var_13 *= 7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_14 *= ((((var_2 < (arr_0 [15]))) ? (((arr_6 [i_1] [i_1]) + -4)) : ((((arr_3 [i_0] [8] [i_2]) >= 1113727888)))));
                        arr_10 [i_0] [i_3] = 63;
                        var_15 = ((((((arr_0 [i_1]) ? 145 : (arr_3 [16] [i_1] [1])))) ? -1 : (arr_1 [i_3 - 1])));
                        arr_11 [5] [1] [i_3] [i_3] [1] = ((((var_1 ? (arr_3 [10] [i_1] [i_3]) : var_7)) >= (arr_7 [11] [16] [6] [13] [i_3 - 1] [i_1])));
                    }
                    var_16 = (min(var_16, ((max(((max((1 ^ 36), ((0 ? -1113727889 : 25075))))), ((((max(var_8, 255))) ? 230 : ((217 ? (arr_9 [i_2] [3] [15]) : 1)))))))));
                }
            }
        }
        arr_12 [i_0] = (max((max(9886343766910674083, (arr_6 [i_0] [i_0])), -1113727889)));
    }
    var_17 = ((-var_5 != (((~(!1))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (((max((((-503409208 != (arr_9 [i_0] [i_0])))), var_7)) == (((~(1 || 78))))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] [i_3] = (+-5612797214143482400);
                                var_17 = ((((((arr_10 [i_1 + 1] [i_2 + 4]) ? 1 : (arr_10 [i_1 - 1] [i_2 - 1])))) ^ ((((1 ? (arr_8 [i_0]) : 4094)) - ((var_12 ? (arr_7 [i_0] [3] [3] [i_3 + 1] [6]) : var_7))))));
                            }
                        }
                    }
                }
                var_18 = (((((((max(-5612797214143482422, 5612797214143482431))) ? (arr_9 [i_1 - 1] [i_1 + 1]) : 32256))) || (~var_15)));
                var_19 = (((((((var_5 ? -5612797214143482411 : -73))) ? ((-8138431806738893496 ? (arr_1 [i_0]) : var_14)) : ((var_15 ? 5612797214143482440 : var_0)))) != ((((max(1572864, var_8)))))));
                var_20 = (min(var_20, (((((~(arr_5 [i_0] [i_1 - 1] [i_1 - 1]))) == (~var_1))))));
            }
        }
    }
    var_21 = (!var_13);
    #pragma endscop
}

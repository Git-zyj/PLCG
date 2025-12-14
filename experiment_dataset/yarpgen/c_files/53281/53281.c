/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_0] = ((((-82 != (((arr_5 [i_0 + 1] [1] [i_1]) ? var_0 : 8873794240319812124)))) ? (arr_0 [i_1] [i_0]) : ((-(min(76, (arr_7 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 *= (((-(arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0]))));
                                var_17 = (min(var_17, ((((((121 / (((400409095 && (arr_2 [i_2] [i_4]))))))) ? (27 < 238) : ((((((((arr_1 [i_0]) < 16)))) < (min(30512, (arr_7 [i_3])))))))))));
                                var_18 = (((-481238812 || (arr_3 [i_0 + 1] [i_0 + 1]))) ? (min((((0 ? var_0 : var_7))), ((32761 - (arr_5 [i_0] [i_1] [i_1]))))) : ((((((105 ? 5 : 10))) ? (((!(arr_1 [i_0])))) : (arr_6 [8] [i_3])))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [11] = -2098014794;
            }
        }
    }
    var_19 = (max(var_19, ((((min((max(-8873794240319812130, 15234516433558123045)), (-50 / 238))) == (((var_8 ? 11112 : (!6275004816232479825)))))))));
    #pragma endscop
}

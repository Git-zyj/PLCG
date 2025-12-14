/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((var_9 || 1), var_6))) ? var_1 : 1));
    var_12 = ((-var_2 ? (8469889255645795804 / 8469889255645795780) : 9976854818063755818));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (46103 == 4294967295);
                            var_14 = (max(var_14, ((((arr_1 [i_3 + 1]) > (((((146 ? (arr_9 [i_2] [i_2 + 2] [i_2 + 1] [i_2]) : (arr_7 [3] [3] [10] [i_3])))) + (arr_2 [i_3 + 3]))))))));
                        }
                    }
                }
                var_15 = ((185 ? ((127 << (((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_9 [i_0] [5] [i_0 + 2] [i_0 + 2]))) - 18055501636393524248)))) : 25783));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [10] = ((((((1 ? 1 : var_0)))) ? ((max(132540022008487081, ((17002284702465648193 ? 540426369 : 1))))) : (((-4261011350711178693 ? 12288 : 882056357613951803)))));
                            var_16 = (((1 || -8257678809675442837) + ((((97 ? 3435202311215799232 : 61161)) << (((arr_3 [i_0]) - 1253))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

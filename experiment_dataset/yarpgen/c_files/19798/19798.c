/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 &= -2292587611171780264;
                            var_11 = (((((-((-5939318508999963798 ? 922482516156128962 : 1145224591))))) * ((((max((arr_1 [15]), (arr_6 [i_3])))) ? ((max(var_8, (arr_6 [i_0])))) : 17559598732361663221))));
                        }
                    }
                }
                var_12 = ((!(arr_9 [i_0] [i_1])));
            }
        }
    }
    var_13 = ((!((max(((var_1 ? var_2 : 17716)), (var_2 >= var_2))))));
    var_14 ^= var_5;
    #pragma endscop
}

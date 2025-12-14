/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(2587573860529464470, 55));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((var_8 ? -74902491 : (((arr_2 [i_0] [i_1] [i_1 + 2]) ? var_9 : (arr_2 [i_1 + 2] [i_1] [i_1 + 3])))));
                var_13 = var_5;
                var_14 = (max(var_14, (((+(((arr_1 [i_1 + 3]) ^ (arr_1 [i_1 + 3]))))))));
                var_15 = (((((var_5 ? ((var_1 ? (arr_1 [i_0]) : (arr_3 [i_1]))) : ((var_0 ? var_4 : 18014398509481983))))) ? ((var_2 ? (15700156552604476351 && 15700156552604476351) : (16363315851121592589 || 2746587521105075273))) : (((!(arr_2 [1] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}

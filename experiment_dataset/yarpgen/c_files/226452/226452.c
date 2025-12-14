/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((!(((17710932383887630347 ? 17710932383887630358 : 1))))) ? ((((var_0 ? var_3 : 735811689821921269)) ^ (((var_1 >> (735811689821921279 - 735811689821921266)))))) : ((((!((max(var_0, 28675)))))))));
    var_13 = (min(var_13, ((((((~735811689821921271) ? -2009797062 : var_5)) >= ((((!(((var_10 ? var_1 : 17710932383887630346))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min((((-59 <= (var_0 != var_4)))), ((~(var_4 | var_1)))));
                var_15 = ((((((((~(arr_3 [i_0])))) ^ (3790369358 ^ 17710932383887630347)))) ? ((15 ? 12 : 735811689821921279)) : var_6));

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_16 &= ((((max(var_11, (!504597927)))) ? ((255 | (~-7425508080229028695))) : ((min(((735811689821921269 ? 15 : 7)), (arr_0 [i_0]))))));
                    arr_7 [i_0] = (!31);
                }
            }
        }
    }
    #pragma endscop
}

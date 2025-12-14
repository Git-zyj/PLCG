/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((max(10, (~9006099743113216)))) ? (min(((var_4 ? 8988941697814536460 : (arr_3 [i_1]))), ((((arr_4 [17] [i_0 + 1] [9]) ? 1 : 3670016))))) : ((max((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (max(2479395252, -43)))))))));
                var_14 = ((((~((1391822008 ? -4852353656221733107 : 1))))) ? (((max(121, 1)))) : ((+((412204042 ? (arr_4 [i_0 + 1] [i_1] [i_1]) : (arr_4 [i_1] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_15 = (((((((1 ? var_8 : var_1))) ? ((var_0 ? 1223689539 : var_6)) : (var_4 > var_3))) - (var_8 == var_11)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (((((+(max((arr_2 [i_1] [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) ? (((((2030579223 ? 29 : (-9223372036854775807 - 1)))) - (arr_0 [i_0] [i_1 + 1]))) : ((28 ? 15051207271123832363 : (-32767 - 1)))));
                var_16 = (((min((((arr_3 [6]) ? (arr_0 [12] [i_0]) : (arr_2 [i_0] [i_1 + 1] [i_1]))), ((((arr_2 [i_0] [i_0] [i_0]) && (arr_0 [i_1] [i_1]))))))) ? ((((!(arr_0 [i_0] [i_1]))) ? (!16618) : (arr_0 [i_1 - 1] [i_1 + 1]))) : ((max((-9223372036854775793 && -5464623653612668412), (arr_3 [i_1 + 1])))));
                arr_4 [i_0] [i_1] [i_0] = ((((((arr_2 [i_1] [i_1] [i_1 - 1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1 + 1])))) ? (((14771 ? 16618 : 2))) : (((arr_0 [i_0] [i_1]) ? (arr_2 [i_1] [i_1] [i_1 - 1]) : (arr_0 [i_0] [i_1])))));
            }
        }
    }
    var_17 = (((((((var_12 ? var_0 : var_5))) || (((var_5 ? var_6 : var_9))))) ? ((var_8 ? var_11 : (3395536802585719275 / 236))) : (((((var_9 ? var_7 : var_0)) % (((min(var_11, var_9)))))))));
    #pragma endscop
}

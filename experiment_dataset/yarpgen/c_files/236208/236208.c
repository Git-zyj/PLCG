/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += (max((((((min(1023, 1033))) / (arr_2 [i_1 + 3] [i_1 + 1] [i_1 - 2])))), ((((((arr_2 [i_0] [i_1] [i_1 - 2]) ? var_11 : (arr_0 [i_0])))) ? (min(3387270290625807898, -1)) : (max(var_12, (arr_2 [i_1] [i_1] [i_0])))))));
                var_19 = (max(var_19, ((min(((max((arr_0 [i_1 + 2]), (min((arr_3 [8]), (arr_0 [i_0])))))), (max((((var_12 ? (arr_3 [8]) : (arr_0 [i_0])))), -3387270290625807898)))))));
                var_20 |= (max((min(((~(arr_0 [i_0]))), (arr_2 [i_0] [i_0] [i_0]))), ((-(arr_3 [1])))));
                arr_4 [i_0] = 1038;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_21 = ((((min(((18166809494005934563 ? -473129559 : -3387270290625807895)), var_13))) ? ((((min(3387270290625807912, 61)) <= (((arr_2 [i_3] [i_2] [i_2]) - -8557028352503208552))))) : (((!((min(var_14, var_1))))))));
                arr_13 [i_3] [i_2] = ((279934579703617076 ? (((((var_15 << (((var_8 + 7311672393786432920) - 13)))) << ((((((min((arr_0 [i_2 + 1]), (arr_2 [i_2 + 1] [i_2] [i_3 + 1])))) + 56)) - 22))))) : (arr_12 [i_2 + 1] [i_3 + 1] [i_3])));
            }
        }
    }
    #pragma endscop
}

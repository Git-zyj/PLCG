/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((min((arr_0 [i_1]), ((18446744073709551607 ? 18446744073709551607 : 65525))))) ? (((arr_5 [i_1]) ? (((((arr_2 [i_1]) > var_0)))) : (max((arr_3 [i_0] [i_0] [i_1]), 65528)))) : (arr_2 [i_1])));
                var_17 = (min(var_17, (((9 ? 65525 : 7)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 += ((var_16 ? (((arr_10 [i_3]) ? (arr_10 [i_2]) : (arr_10 [i_2]))) : (68 / 187)));
                var_19 |= ((!((((max(174, var_8)) | -122)))));
                arr_13 [i_3] [i_3] [i_3] = (min((((arr_8 [i_3]) ? (!var_4) : ((var_8 ? 1 : (arr_9 [i_2]))))), (((((min(65528, (arr_8 [i_2])))) != ((-(arr_10 [i_2]))))))));
            }
        }
    }
    #pragma endscop
}

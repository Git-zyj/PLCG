/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = var_13;
                arr_8 [i_0] [i_1] = ((((((~(arr_6 [i_0] [i_0]))) + (((8727373545472 ? (arr_5 [i_1]) : 32332))))) == (((((arr_2 [7]) || 7))))));
                arr_9 [11] = ((((max(52845, 1))) > (-177904096 ^ 0)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_16 = ((((!(arr_10 [i_2] [i_3]))) && (((((arr_10 [i_2] [i_3]) ? (arr_14 [i_2]) : (arr_11 [i_2] [i_2]))) == -1))));
                var_17 = (max(var_17, (((min(((12656106559384861318 ? 5790637514324690297 : -1)), var_13)) | ((((arr_14 [i_3]) ? (arr_11 [i_2] [i_3]) : -95)))))));
                var_18 *= ((-5790637514324690297 <= ((((((arr_12 [i_2]) ? (arr_11 [i_3] [i_3]) : (arr_13 [i_2] [i_3])))) ? ((142 ? 3145728 : 5790637514324690314)) : -1))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 1] = (min(((((arr_3 [i_1 + 1]) % (arr_0 [i_1 + 3])))), (((arr_5 [14] [i_1] [i_1 - 1]) ? 5253395527409052659 : 13193348546300498957))));
                arr_7 [i_1] = ((((var_10 ? 13193348546300498957 : var_1)) == (max((arr_4 [i_0] [i_1] [24]), 13193348546300498957))));
                arr_8 [i_1] = (min((((!(78 | 1)))), ((~(5253395527409052659 != 160511909092531262)))));
            }
        }
    }
    var_12 = (min((((var_4 && ((min(var_4, 5253395527409052659)))))), (min(var_4, ((5253395527409052659 ? var_6 : 100))))));
    var_13 = (101 ? 116 : 5253395527409052646);
    var_14 = ((((-var_10 ? var_10 : (~13193348546300498957))) == var_6));
    #pragma endscop
}

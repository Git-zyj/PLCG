/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [5] [5] &= (((arr_4 [21]) / (max((-1415684339 - 255), (((arr_3 [i_0] [i_0]) * (arr_5 [i_0] [18])))))));
                arr_7 [i_0] [i_0] = (((min((4442953534622855507 % var_0), (arr_1 [i_0] [5]))) >> (((max(((var_5 ? var_6 : (arr_2 [i_0] [i_1]))), (((~(arr_1 [1] [i_1])))))) - 1568454449))));
                var_12 = (((((1570538934018643763 << ((((var_1 ? (arr_0 [i_1]) : (arr_5 [20] [i_1]))) - 6703351935353703740))))) ? (max((max(3523865310058483799, var_8)), (((-15 ? 1 : 0))))) : (1187112556 + 1)));
                arr_8 [4] [1] |= (((min((arr_4 [i_0]), ((134201344 ? 3523865310058483799 : (arr_5 [13] [i_0]))))) / (1838157305690671464 / 48)));
            }
        }
    }
    var_13 = ((((((-32 + 2147483647) << (7309991666322437316 - 7309991666322437316)))) ? (max(((max(var_7, 4294967295))), 409600909338251313)) : 1));
    var_14 = var_7;
    #pragma endscop
}

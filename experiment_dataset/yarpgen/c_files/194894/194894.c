/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = -5035573304657236326;
                    arr_8 [i_0] = (((((-72 != -51) || (51122 <= 1816))) ? (((((-108 ? -1816 : 34)) <= (-1816 >= 52)))) : (-32767 - 1)));
                    var_16 = (max(var_16, ((((((98 <= (0 <= -1823)))) <= 18123)))));
                }
            }
        }
    }
    var_17 = ((((((4802826499808485426 <= -1824) >= ((12294283112106638595 ? -107 : 423860077))))) << ((((((1816 ? 97 : 102))) == 4003509493611602318)))));
    var_18 = 0;
    #pragma endscop
}

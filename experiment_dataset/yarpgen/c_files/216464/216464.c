/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 96;
        var_16 = (((--9136497582530323526) ? 47 : (--1907568603231007901)));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (!1764435279);
        var_17 = (max(var_17, (!658795697136798614)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4 + 1] [i_4] = ((((!(((-1256370136 ? 62100 : -15745))))) ? ((((!11) ? (!658795697136798614) : 4294967295))) : ((1 ? 0 : 18446744073709551615))));
                    var_18 = (min(var_18, (-32767 - 1)));
                }
            }
        }
        var_19 = 13;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_20 -= (~423);
                var_21 = 24838232;
            }
        }
    }
    var_22 = (min(var_22, (!203)));
    #pragma endscop
}

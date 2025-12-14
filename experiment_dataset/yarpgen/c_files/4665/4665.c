/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(((!((max(-6530, 129542811))))), (!var_7)));
    var_14 = (min(4165424485, 129542811));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = (max(var_15, ((max((max((17442 & 12110601471270840179), (~4165424484))), (((~(~59116)))))))));
            var_16 = (max((((109211206 >> (((-32767 - 1) + 32778))))), (min(4165424474, 4294967285))));
            var_17 = ((~((59116 >> (12110601471270840174 - 12110601471270840158)))));
            var_18 = 0;
            var_19 += ((((-6021 & ((min(43193, -13))))) >> (((!((max(12069, 1081963195))))))));
        }
        arr_5 [i_0] = (max((min(-1799, 2026675705)), ((max(-15, 9469)))));
        var_20 -= (--12);
        var_21 += ((~((17433 >> (-8872 + 8874)))));
        var_22 = (min(var_22, (((((2026675706 >> (2026675682 - 2026675651))) >> (((max(2026675660, 3780352556965518351)) - 3780352556965518341)))))));
    }
    var_23 = var_4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((123 ? 0 : 113))) ? ((((max(0, 15025))) ? ((163 ? 93 : 1)) : var_6)) : (((((max(1, 1))) <= ((min(0, 1))))))));
    var_17 = (((((var_0 ? (113 / 101) : ((62 ? 127 : 55))))) ? (((((min(101, 0))) ? var_0 : var_12))) : (max((((-9943 ? -55 : 246))), ((-12829 ? 132 : 12364410288059188725))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 ^= ((((max(((1 ? 25140 : 142)), ((min(-1, 158)))))) && (((4435 ? ((min(65535, 5))) : 122)))));
                    var_19 = ((((((5 && -5) ? (5 || 142) : ((17236328749191429105 ? 9 : 41103))))) ? (((((123 ? 153 : 2834639080109683074))) ? ((0 ? 9223372036854775807 : 163)) : -10)) : (max(615027340602314682, 114))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_0] [i_2 + 1] [i_3] [i_4] [i_0 - 2] = (max(163, ((1 ? 101 : ((8080 ? 132 : 90))))));
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] = (((6538720072446831734 & -121) ? (min(-20557462, 98)) : (170 & -8215)));
                                var_20 = (((((7034409675306799331 ? (0 / 93) : (5 * 0)))) / (max(153, 0))));
                            }
                        }
                    }
                    var_21 = (max(((32767 ? (28 && 48) : ((87 ? 87 : 66092883)))), 255));
                }
            }
        }
    }
    #pragma endscop
}

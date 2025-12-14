/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min((511 >= 0), (max(0, 1))))), var_6));
    var_13 -= (max((11529518509986362794 >= -1), -69));
    var_14 ^= (((((min(517, 13663339331982841691)) >> (((max(6917225563723188831, 161)) - 6917225563723188771))))) ? var_2 : ((((min(1, 1))) >> (min(1, 1843429290467267526)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((534067752873700862 ? 148 : 0)), ((((62 == 86) < 1)))));
        arr_3 [i_0] [i_0] = ((min(((35233 << (95 - 89))), (-21498 & 0))) * ((min(86, (max(-85, 232))))));
        arr_4 [i_0] [i_0 + 1] = (max(1, (0 | 21498)));
        arr_5 [i_0] = ((!(!13664459164764005492)));
        var_15 *= ((((((((-8645789996713332602 + 9223372036854775807) >> 1))) ? -570943333 : (min(-21765, 4527078057882546628)))) >= (max((13919666015827004987 | 14455138593151279974), ((11209181088339690477 ? 18446744073709551615 : 11819541240000732174))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max(((max((121593813 != -2079437969387978982), 0))), (1 * 2147483638))))));
        arr_10 [i_1 - 1] [i_1 - 1] = ((-8465129802569791266 ? ((min(578539643, 227))) : ((~(min(11554736565368158454, 114))))));
    }
    #pragma endscop
}

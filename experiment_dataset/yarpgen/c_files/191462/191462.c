/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = max(-16378, (max(-6496, ((18 + (arr_1 [i_0]))))));
        arr_3 [i_0] = (max(((-6496 ? 10371670749411962968 : var_1)), (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((~(((((9066862808485534734 | (arr_1 [i_0])))) ? (~42633) : (((arr_1 [i_0]) + var_0))))));
        var_13 = (min(var_13, (((32767 || ((!(arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (((max(var_9, 771614131)) - (arr_5 [i_1] [i_1])));
        arr_10 [18] [i_1] = 2702951749424002647;
        arr_11 [i_1] [i_1] = 2467593724;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = 16831259926004644926;
        arr_15 [15] = ((((22903 + (((arr_13 [i_2]) ? var_7 : (arr_1 [i_2])))))) ? (max(18446744073709551612, -32767)) : (max((((arr_0 [i_2]) % var_3)), (15597845698023801640 || 4035374333))));
    }
    #pragma endscop
}

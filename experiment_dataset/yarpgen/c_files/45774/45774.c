/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_0);
    var_20 += (11509158896601792907 * ((((!var_10) ? (!4801705716920907079) : (((!(-32767 - 1))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (10751718177202728200 & 8969234069574505252);
        var_21 = (((((12231875785161089349 ? (arr_0 [i_0]) : 9007199254732800)) < (arr_0 [i_0]))) ? (arr_1 [i_0] [1]) : -10751718177202728216);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = ((!(((~((15175826011538296935 ? var_15 : var_18)))))));
        arr_7 [i_1] = ((((((arr_4 [i_1] [i_1]) << (-5728655945848581528 + 5728655945848581563)))) ? (((arr_4 [0] [i_1]) << var_9)) : (10751718177202728228 * 1)));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (max(255, ((((18446744073709551615 < 18446744073709551615) <= -1035638159)))));
        arr_11 [i_2 - 1] [i_2 - 1] = (min(var_9, ((9477510004135046366 ? (1 > 7065356905856688441) : (arr_0 [11])))));
    }
    #pragma endscop
}

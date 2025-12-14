/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 4294967289;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((((((1781062397 ? -2051266281 : (arr_1 [i_0])))) ? (((7 || (arr_2 [i_0] [i_0])))) : 24947))) && 24947));
                arr_7 [i_1] [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_1]);
                arr_8 [i_1] = (((((2147483640 ? ((4032 ? 3700419719347159257 : -126)) : 15872))) ? 4294967289 : (min(2147483640, (((arr_4 [i_1] [i_0] [i_0]) - 18446744073709551615))))));
                var_11 = (((((-126 ? ((14746324354362392357 ? (arr_1 [i_0]) : (arr_5 [i_1] [6]))) : (arr_2 [i_0] [i_0])))) ? (((arr_5 [i_0] [i_0]) ? ((555749989618986493 ? 17659873458963708675 : (arr_5 [i_0] [i_0]))) : (397253612 / var_5))) : 1501955601));
            }
        }
    }
    var_12 = ((((min(var_5, ((5164933129320465543 ? 448 : 31512))))) ? var_4 : ((var_9 ? (((var_3 ? -24950 : 2147483640))) : var_4))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_13 = 16720240472352593238;
                arr_14 [i_2] [i_2] = (min(((((((-67 + 2147483647) >> (3700419719347159249 - 3700419719347159224)))) ? -1 : (((-32767 - 1) | var_9)))), ((var_7 ? 0 : -574391081))));
            }
        }
    }
    #pragma endscop
}

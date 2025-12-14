/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = 3013264991567991489;
        var_19 *= (((((var_12 << (803413847 - 803413820)))) ? var_0 : var_11));
        var_20 = ((((((max(15433479082141560126, 8332292448671872330))) ? (max(var_1, var_16)) : (((min(var_16, 46702)))))) | (((var_16 ? var_10 : var_9)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = var_17;
            arr_4 [i_0] [i_1] [i_0] = ((((max(((max(8640, var_7))), var_3))) ? ((((max(var_13, 17))) ? var_1 : (((var_1 ? var_9 : var_5))))) : (((15433479082141560126 ? var_16 : ((max(46702, var_6))))))));
            var_22 = (min(var_22, (((((((var_6 ? var_13 : 46702)) % ((65535 ? var_8 : var_7))))) ? ((var_15 ? var_11 : 48719)) : (max((max(3776261880586288948, 28)), (max(var_17, var_1))))))));
            var_23 = ((var_8 ? ((((((var_1 ? var_13 : 1))) || var_14))) : var_6));
            var_24 ^= var_17;
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_0] [i_0] = ((((((var_6 ? var_14 : 142)))) ? ((((!(~var_5))))) : (var_16 / var_16)));
            arr_8 [i_0] [2] [i_0] = (((((61108 ? ((var_17 ? var_17 : 7599952740724046173)) : 1))) ? ((1 ? (min(var_17, var_14)) : (!var_15))) : var_11));
            var_25 ^= (~46702);
        }
        arr_9 [6] = (max(((var_9 ? (var_5 && -8192) : var_2)), (((((min(var_11, var_13))) ? var_6 : (~65535))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_3] [i_3] = 2032;
            arr_18 [i_3] = (var_17 ? ((var_0 & (var_4 / 3013264991567991489))) : (((!var_13) ? (((63503 ? var_12 : var_9))) : ((-5 ? 8181712846487882756 : 253)))));
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            var_26 = 4427;
            var_27 = (min(var_27, (((46702 ? var_16 : var_3)))));
        }
        arr_21 [i_3] [i_3] = ((-((83 ? var_12 : 63503))));
    }
    var_28 = ((~((((((var_1 ? 3013264991567991489 : 4400))) || var_6)))));
    var_29 = var_6;
    #pragma endscop
}

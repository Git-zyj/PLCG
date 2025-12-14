/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199090
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = (!(((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0 - 3] = ((/* implicit */int) arr_1 [i_0]);
        arr_5 [i_0 - 1] = ((long long int) (short)-32765);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) 8762231367179387136ULL);
                        var_12 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)7)), (253989269652223129ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (11899616801646417220ULL)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_4))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 11899616801646417219ULL)) ? (((/* implicit */unsigned long long int) arr_14 [16LL])) : (13160382942931494979ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) var_4);
    }
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (23ULL)));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (((((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_4))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}

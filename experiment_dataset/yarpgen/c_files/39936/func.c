/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39936
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_0 + 2]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0 + 2] [i_1] [i_2] [i_3 + 4] = ((/* implicit */unsigned short) (-(-1569821237)));
                        var_17 = ((/* implicit */int) ((2129113764628560483ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((-385630473), (((/* implicit */int) (_Bool)1)))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)63)) | (((/* implicit */int) (short)8048)))))))));
    }
    var_19 = min((((/* implicit */int) (signed char)79)), (min((((((/* implicit */int) (short)-8051)) - (((/* implicit */int) (short)-27836)))), (((/* implicit */int) (short)8050)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_20 = ((/* implicit */signed char) arr_15 [i_4]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)8191))) ? (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-8058))))));
    }
}

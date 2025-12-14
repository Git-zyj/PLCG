/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198953
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (_Bool)0))));
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (short)-17516)))))) ? (((((/* implicit */int) var_5)) ^ (((((/* implicit */int) var_3)) | (var_6))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)12887)))))))));
    var_12 = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((int) (unsigned char)48));
        var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_3)))))) % (arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((short) (_Bool)0));
            var_15 = ((/* implicit */_Bool) min((14270895484583406311ULL), ((+(min((var_2), (((/* implicit */unsigned long long int) (short)-16843))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(((unsigned long long int) 2147483644))))));
            var_17 -= ((/* implicit */unsigned short) var_5);
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])))), (((((/* implicit */_Bool) arr_9 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7432628611756713338LL)) ? (16360054754105153009ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))))))));
        }
    }
}

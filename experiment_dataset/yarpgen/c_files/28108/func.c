/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28108
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
    var_20 = ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) (short)32767))))))));
    var_21 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)54909))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3973680550U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (11047566354041182883ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_7)))))))));
            var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (var_16)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (12791826703728204070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24761)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (-1351121120)))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((~((~(var_19)))))));
            var_24 = (+(1711423990));
            var_25 ^= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)-1))))));
        }
        arr_11 [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)47115))))));
    }
}

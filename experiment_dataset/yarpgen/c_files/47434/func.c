/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47434
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) (~(((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (short)-10649)))), (((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (short)-4608)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-4629)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (short)1842))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1846))))) : (((/* implicit */int) min(((short)-1), (((/* implicit */short) (unsigned char)255)))))));
        var_19 ^= (short)1861;
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((short) arr_5 [(unsigned char)5])))) ? (min(((~(((/* implicit */int) (short)-1843)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (short)-30900))))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)1843)) : (((((/* implicit */int) (short)1849)) - (((/* implicit */int) (unsigned char)7))))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_10 [(short)10] [(short)10] [i_1] = ((/* implicit */unsigned char) (((((((-(((/* implicit */int) (short)4608)))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1])) - (5))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1839))))) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) ((short) (short)-3097)))))));
            arr_11 [i_1] [i_1] = ((((/* implicit */_Bool) (short)-14193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1846))) : (10440869063106460400ULL));
        }
    }
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) min(((short)-1843), (var_16)))))))));
}

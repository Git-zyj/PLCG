/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218725
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (1LL)))) ? (arr_1 [i_0]) : ((~(((/* implicit */int) arr_3 [3U])))))), (arr_1 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
        var_16 *= ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) (short)16383)))) : (((/* implicit */int) var_13))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
        var_19 &= ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-32754)));
        var_20 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) var_3)), (3672088562288511910ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16377)) ? (1760500339U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9395))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_2 [i_1]))));
    }
    for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (short)32761))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4077))) % (((4294967274U) & (((/* implicit */unsigned int) 49152))))))) && (((/* implicit */_Bool) var_4)))))));
    }
    var_24 &= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33886))))), (min((var_10), (((/* implicit */long long int) (_Bool)1)))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))))))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)24)), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32753))) & (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
}

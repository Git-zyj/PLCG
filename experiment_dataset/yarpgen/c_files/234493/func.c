/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234493
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
    var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) == (((((/* implicit */_Bool) 6329896179647634513ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2)));
    var_15 = ((/* implicit */long long int) 18293796697759574479ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19050))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) ((unsigned int) (+((+(512ULL))))));
        var_17 ^= ((/* implicit */short) 4090920163731319526ULL);
        var_18 &= ((/* implicit */unsigned int) ((_Bool) (short)-1));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */short) ((((unsigned long long int) (_Bool)0)) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (arr_5 [i_2]))))))), ((short)14955)));
        arr_13 [i_2] |= ((/* implicit */unsigned char) 1177847353);
        var_19 = ((/* implicit */_Bool) (signed char)80);
    }
}

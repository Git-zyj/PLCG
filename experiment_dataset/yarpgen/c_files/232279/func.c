/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232279
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 &= ((/* implicit */unsigned short) (_Bool)1);
        var_18 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)7857)) ? (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned char)140)) : (-5))) : (((/* implicit */int) arr_1 [i_0])))) * (((((/* implicit */int) (unsigned char)116)) / (((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((-5) & (((/* implicit */int) (short)0)))))));
        var_20 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 4611686018427371520LL)) / (8286905470057086512ULL))));
    }
    for (int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        var_21 |= ((/* implicit */long long int) ((signed char) min((arr_6 [i_1 + 1] [i_1 + 2]), ((unsigned short)46497))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max(((+(((/* implicit */int) var_8)))), (min((((/* implicit */int) (signed char)-113)), (((((/* implicit */int) (short)-7361)) / (((/* implicit */int) (unsigned short)32268)))))))))));
        var_23 |= ((/* implicit */unsigned char) ((unsigned short) min(((-(((/* implicit */int) arr_6 [i_1] [i_1])))), (((/* implicit */int) (short)-11770)))));
        var_24 -= (((~(-6))) >> (((((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)115)))) - (12427))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)7368))));
    }
    var_26 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232108
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
    var_17 -= ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(-14))), (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3844459379054031208ULL))))) : (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32878)))), ((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)61862))));
        arr_5 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551576ULL)) ? (18446744073709551572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1358840841))))) : (((/* implicit */int) (unsigned short)59448))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (18446744073709551558ULL)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)59464);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_12 [i_2] = max((((/* implicit */unsigned long long int) (unsigned char)238)), (4990429170055201860ULL));
        var_20 += ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 35ULL))))), (arr_10 [i_2] [i_2]))), (((/* implicit */long long int) max(((unsigned char)68), ((unsigned char)174))))));
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((62ULL), (((/* implicit */unsigned long long int) (short)-10094)))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3]);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (535822336U)))) ? (2031182556852647733ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (8761457790503858342LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_23 = ((/* implicit */unsigned short) var_0);
}

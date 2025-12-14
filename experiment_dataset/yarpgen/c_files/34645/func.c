/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34645
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) (short)-1))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32581)) ? (((/* implicit */int) ((1687771999159503190ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7462)))))) : (((/* implicit */int) var_11))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32580)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_8)), ((short)-18046)))) || ((!(((/* implicit */_Bool) var_1))))))) : (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34693)) ^ (((((/* implicit */_Bool) var_12)) ? (410442566) : (-369038257)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4963956416141864321ULL)) ? (15989776611612986571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (unsigned short)1))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)21284)))) ? (((1620931290658828611ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))))));
}

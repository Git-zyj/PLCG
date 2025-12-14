/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45395
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [7U] = ((/* implicit */int) ((((/* implicit */_Bool) (~(67043328)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483637))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (12347302774095811938ULL)));
    }
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 6040274U)), (142989288169013248LL)))) | (max((((/* implicit */unsigned long long int) (unsigned char)0)), (6099441299613739678ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((short)-30923), ((short)0))), (min(((short)30923), ((short)30904))))))) : (max((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30923))) : (1316460720393225791ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16269)) ? (-142989288169013248LL) : (((/* implicit */long long int) -2147483616))))))));
    var_19 = ((/* implicit */unsigned char) (unsigned short)7617);
    var_20 |= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max(((unsigned short)47605), (((/* implicit */unsigned short) (short)12288))))), (((18446744073709551615ULL) * (14210435725999757028ULL))))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-10728)))))))));
}

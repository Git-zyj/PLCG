/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51777
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((_Bool) (signed char)-117)))));
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (18393505036733693623ULL)));
    var_14 = ((/* implicit */unsigned int) max((32985348833280LL), (((/* implicit */long long int) (short)-1))));
    var_15 = ((unsigned int) min((((/* implicit */long long int) min(((short)27091), ((short)-2048)))), (min((6459067814956829417LL), (((/* implicit */long long int) (short)24418))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) (short)22623);
        var_17 += ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)37478));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 += ((/* implicit */long long int) max((max((3445527113U), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-27092)), (1055699646)))))), (((/* implicit */unsigned int) (short)22616))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((max((-5364738597236260677LL), (((/* implicit */long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)22630), ((short)255)))), (max((((/* implicit */unsigned int) (_Bool)1)), (1457834791U))))))));
        var_19 += ((/* implicit */int) max((min((5364738597236260676LL), (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) (short)-1850))));
        var_20 = ((/* implicit */short) 1055699657);
    }
}

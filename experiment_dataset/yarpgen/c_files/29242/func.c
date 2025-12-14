/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29242
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) ^ (var_3)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-32753))));
        var_15 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((unsigned short) arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) (-(((((((-1698207361) / (((/* implicit */int) (unsigned char)255)))) + (2147483647))) << (((((unsigned long long int) -1597130963)) - (18446744072112420653ULL)))))));
    }
    var_17 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (~(31)))), (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58872))))))), (((/* implicit */unsigned long long int) var_2))));
}

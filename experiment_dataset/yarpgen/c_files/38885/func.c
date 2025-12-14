/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38885
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_14 = 12ULL;
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((-3010412230705676568LL), (((/* implicit */long long int) ((((unsigned long long int) var_5)) > (max((10530310558794520615ULL), (((/* implicit */unsigned long long int) -3929319715014352619LL)))))))));
    var_16 = ((/* implicit */int) (~(((min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL))) >> (((((/* implicit */int) var_0)) + (57)))))));
}

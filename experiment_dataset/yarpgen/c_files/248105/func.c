/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248105
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3961536424U))))) : ((+(((/* implicit */int) arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 2147483647)) : (15633340625521910947ULL)))))));
    }
    var_17 = ((/* implicit */unsigned char) var_2);
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */long long int) ((_Bool) var_8));
}

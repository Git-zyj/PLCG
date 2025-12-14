/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54386
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30083))) ^ (var_6)))))) && (((/* implicit */_Bool) (-((+(var_6))))))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (min((((/* implicit */unsigned long long int) (signed char)91)), (var_11)))))) ? (max((max((14383989556344982181ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (-(6356917368500990069LL)))))) : (max((var_1), (((/* implicit */unsigned long long int) min((4118397107U), (((/* implicit */unsigned int) var_2))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */_Bool) var_0);
    }
}

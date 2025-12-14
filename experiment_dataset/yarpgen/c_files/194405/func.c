/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194405
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) 2305772640469516288ULL);
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_0]))))) == ((+(var_4))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)121)))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)112), ((unsigned char)156))))) >= (910103966U))))));
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_21 *= ((/* implicit */unsigned long long int) var_11);
    var_22 = ((/* implicit */int) min((var_22), (((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (var_11))))))) : (((var_11) * (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_6)))))))))));
}

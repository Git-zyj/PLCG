/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192979
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((_Bool) ((signed char) (_Bool)1)))), (var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (unsigned short)44863);
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1))))), ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >> (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((+(((/* implicit */int) var_1))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)92)) % (((/* implicit */int) (_Bool)1))))) * (min((((((/* implicit */_Bool) var_9)) ? (13240693250367047321ULL) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (130023424LL) : (((/* implicit */long long int) var_10))))))))))));
    }
}

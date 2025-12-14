/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39134
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
    var_17 = var_16;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) 6304655606333628798LL);
        arr_4 [i_0] = ((/* implicit */short) (+(6304655606333628797LL)));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((1236516003293437360LL) < (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) * (4294967278U)))))))));
        var_19 = ((/* implicit */unsigned int) ((signed char) (unsigned short)2047));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_4))), (min((-5449527465157396964LL), (var_3))))))));
    }
    var_20 = ((/* implicit */unsigned char) ((max((var_10), (((/* implicit */unsigned int) (signed char)-83)))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)34685)), (((unsigned int) var_2))));
}

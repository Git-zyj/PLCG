/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245548
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max(((-(max((var_1), (1395463503853230838ULL))))), (((/* implicit */unsigned long long int) max((((long long int) arr_0 [i_0] [(short)5])), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))));
        arr_4 [i_0] [i_0] = 11675814044445980022ULL;
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17051280569856320777ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2)))))) : (((/* implicit */int) max(((unsigned short)4095), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
    }
    var_11 = ((/* implicit */long long int) ((_Bool) (+(((287678721U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    var_12 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66))))) || (((/* implicit */_Bool) ((1395463503853230838ULL) << (((var_6) + (2379886929981974089LL))))))))) < (((/* implicit */int) var_5))));
}

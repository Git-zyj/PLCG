/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24793
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((((_Bool) arr_6 [i_1])) ? ((+(536870656U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)8496), (((/* implicit */unsigned short) (_Bool)1)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3758096639U))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (_Bool)1))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((var_15) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_1) - (2181036677U)))))) : ((+(var_11))))))))));
    }
    var_21 = ((/* implicit */short) ((unsigned char) (signed char)-78));
}

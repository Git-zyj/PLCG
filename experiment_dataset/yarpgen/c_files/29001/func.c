/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29001
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) min(((short)1339), (min(((short)22360), ((short)1326)))))), (((min((2623325576U), (((/* implicit */unsigned int) (short)-1340)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1350)))))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */int) (short)-1340)), ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14672)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) 3546005125359800389LL);
    }
    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? ((-(((/* implicit */int) (short)1338)))) : ((-(((/* implicit */int) var_17))))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)19533)), (arr_3 [i_1]))) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))), ((short)-5284)));
    }
    var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)2)) == (((/* implicit */int) ((signed char) var_6)))))));
}

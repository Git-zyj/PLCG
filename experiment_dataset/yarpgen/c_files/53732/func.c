/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53732
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    var_12 += ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * ((((!(((/* implicit */_Bool) var_3)))) ? (1486263218) : (-1486263218)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_1 [i_0])), (-2607410378308670018LL)));
                arr_5 [i_1] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (max((((13727297941250886415ULL) / (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-1486263232) / (((/* implicit */int) var_2)))))))))));
    var_15 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_4))))) : (min(((~(6868893669018924572LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_8)), (var_7))))))));
}

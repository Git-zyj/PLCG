/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243915
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
    var_16 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */int) (unsigned short)0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
                var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) (unsigned char)137))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((max((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) + (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)16)), (arr_2 [i_0] [i_0])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8955526380688947831ULL)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-19)))) : (((/* implicit */int) var_8)))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (max((var_10), (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232515
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [(unsigned char)5]);
                var_18 += ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) 12243279572152394938ULL)) || (((/* implicit */_Bool) (unsigned short)18167)))) ? ((-(var_11))) : (((((/* implicit */unsigned long long int) 274009803U)) * (16873496762174580857ULL))))) >> (((/* implicit */int) (((-(16873496762174580857ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_14))))))))))))));
    var_20 = ((/* implicit */unsigned char) max((max((min((((/* implicit */long long int) var_10)), (333489994333900742LL))), (((/* implicit */long long int) ((var_1) % (var_1)))))), (((/* implicit */long long int) var_2))));
}

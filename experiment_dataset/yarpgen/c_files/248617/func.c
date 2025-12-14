/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248617
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
    var_13 = ((/* implicit */unsigned short) -183679885);
    var_14 = ((/* implicit */unsigned int) -183679879);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -183679885)))) >= (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (unsigned short)32767)) ? (var_10) : (((/* implicit */unsigned long long int) 4294967282U))))))));
                var_16 = ((_Bool) (+(((/* implicit */int) arr_0 [i_1 - 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((long long int) max((((int) var_10)), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)32756))))))))));
}

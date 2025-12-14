/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243266
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
    var_17 = 17135421837979716143ULL;
    var_18 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) (short)32766)) != (min((((/* implicit */int) arr_4 [i_0] [i_1])), (1732857900)))))));
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)11702)) + (((/* implicit */int) (unsigned char)98)))), (((/* implicit */int) var_4))));
                var_20 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (+(18446744073709551604ULL)))));
            }
        } 
    } 
}

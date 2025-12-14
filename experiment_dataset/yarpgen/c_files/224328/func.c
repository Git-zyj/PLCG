/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224328
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
    var_17 += ((/* implicit */int) max((((((-4371358282193212310LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28702))))) ? (105553116266496LL) : (var_12))), (((/* implicit */long long int) max(((unsigned short)39662), (((/* implicit */unsigned short) (unsigned char)211)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_3 [i_1]);
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -105553116266479LL))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192893
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))), ((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
                arr_7 [i_1] |= ((/* implicit */signed char) (short)18572);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((558562985) > (((/* implicit */int) (signed char)-117))))), ((signed char)7)))) ? (328293319060451792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))))));
        arr_10 [(signed char)9] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)0));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_4))));
}

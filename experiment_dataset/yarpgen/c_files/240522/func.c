/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240522
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
    var_13 |= ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 2] [i_1] = ((((/* implicit */_Bool) ((unsigned int) var_12))) && (((/* implicit */_Bool) 1753856838941438393LL)));
                var_14 += ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (min((max((((/* implicit */long long int) 4294967273U)), (-6775012763504857402LL))), (((long long int) (unsigned short)16308)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32)))));
            }
        } 
    } 
    var_15 &= ((/* implicit */_Bool) var_5);
    var_16 ^= ((/* implicit */int) max((3827370706U), (((/* implicit */unsigned int) ((int) ((-1753856838941438400LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))))));
}

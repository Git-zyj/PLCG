/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229029
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) var_9))))))) : (min((((/* implicit */unsigned int) (unsigned char)174)), (3664688429U)))));
    var_12 = ((/* implicit */unsigned char) (signed char)-77);
    var_13 = max((7645700468805623449ULL), (7645700468805623456ULL));
    var_14 = ((/* implicit */unsigned char) 7645700468805623459ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (arr_0 [i_1 + 1])));
                var_16 = ((/* implicit */short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}

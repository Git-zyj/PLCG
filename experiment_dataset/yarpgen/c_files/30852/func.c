/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30852
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (unsigned char)180);
                var_16 *= ((/* implicit */signed char) min((max((max((3098560471U), (3098560471U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46292)) << (((((/* implicit */int) (unsigned short)1814)) - (1805)))))))), (min((max((1196406843U), (((/* implicit */unsigned int) (unsigned short)44147)))), (max((1196406824U), (3098560485U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)63721);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((min((min((1196406825U), (((/* implicit */unsigned int) (unsigned short)63722)))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_13)))))));
}

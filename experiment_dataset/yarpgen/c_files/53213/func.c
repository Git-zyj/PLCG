/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53213
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)47156);
                        var_17 += ((/* implicit */long long int) ((112U) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(16992649217591282200ULL)))) ? (((/* implicit */int) (unsigned short)56443)) : (((/* implicit */int) (unsigned short)47156)))))));
                        arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (signed char)7)) : ((~(((/* implicit */int) (unsigned char)183))))));
                    }
                    var_18 += ((/* implicit */unsigned char) (unsigned short)9092);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (signed char)0);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50397
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
    var_17 = (short)5508;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -4913330422969478695LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((3774567697U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */short) ((10555599892408781744ULL) * (7121371956649588205ULL)));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_15);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) ((int) 11325372117059963411ULL));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224362
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
    var_12 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_6)) & (14033368644146536750ULL)))));
                        var_13 = ((/* implicit */int) min((12881850956325695599ULL), (12881850956325695599ULL)));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) min(((~(var_0))), (((/* implicit */unsigned long long int) var_6))));
    }
    var_14 = 5564893117383856016ULL;
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) 2251799813685247LL));
}

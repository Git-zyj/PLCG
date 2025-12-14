/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216727
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */int) var_4)) | (((/* implicit */int) (!(var_1)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_11 = ((/* implicit */short) var_5);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0]);
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) 1151182005U))));
        }
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 17106158749060151382ULL)) || (((/* implicit */_Bool) 1340585324649400229ULL)))))));
    }
}

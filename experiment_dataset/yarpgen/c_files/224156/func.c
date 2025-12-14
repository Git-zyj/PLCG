/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224156
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_12 ^= ((/* implicit */_Bool) arr_3 [i_0] [6]);
                            arr_15 [(signed char)8] = arr_14 [i_0] [6LL] [i_0] [i_0] [i_0];
                        }
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [(_Bool)0] [(_Bool)1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))) : (arr_1 [i_0]))) <= (((/* implicit */long long int) var_1))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
        arr_17 [i_0] [i_0] &= ((unsigned char) (signed char)(-127 - 1));
    }
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (var_2))))));
}

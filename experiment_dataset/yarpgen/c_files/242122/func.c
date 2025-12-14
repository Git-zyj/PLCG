/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242122
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) arr_1 [(signed char)4] [i_0]);
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1652810640)))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)-32767))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) arr_0 [i_3]))));
                        var_21 = ((/* implicit */unsigned short) (short)-133);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (short)-32767);
            var_23 = ((/* implicit */unsigned short) ((unsigned int) 6177529602579202259ULL));
        }
        var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [(unsigned char)3])) ? (min((2199022993408ULL), (((/* implicit */unsigned long long int) (signed char)-32)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (3992779310U)))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_13);
}

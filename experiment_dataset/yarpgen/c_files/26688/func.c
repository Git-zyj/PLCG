/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26688
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    var_10 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [(signed char)15] [(short)14])) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                    var_11 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2 + 3]))) : (((unsigned int) (unsigned char)23)))), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2 - 3]))));
                    var_12 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [(short)8] [i_2 - 1])))));
                }
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)1])) | ((~((~(((/* implicit */int) arr_7 [i_0] [i_1] [22ULL]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (unsigned char)23);
}

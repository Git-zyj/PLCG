/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217103
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    arr_7 [i_0] [(unsigned char)2] [i_2 + 1] = ((/* implicit */int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) > (1638313384468687905LL)))) : ((~(((/* implicit */int) (unsigned char)31)))))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_0 [i_0]));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_19)) & (((/* implicit */int) arr_2 [22])))) + (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_3 [i_3 - 2]))));
                    var_21 *= ((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [(unsigned char)18] [i_3 - 1])), (arr_1 [14ULL] [(signed char)4]))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)384))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) arr_2 [i_0]))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned short)7347)) << (((((/* implicit */int) var_6)) + (39))))) + (((/* implicit */int) (short)-14094)))), (((/* implicit */int) var_8))));
}

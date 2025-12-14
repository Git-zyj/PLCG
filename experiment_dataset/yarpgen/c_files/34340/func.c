/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34340
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
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)108))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 3]))) + (12213205982721948291ULL)));
                                var_17 = ((/* implicit */signed char) ((_Bool) arr_9 [i_0] [16ULL] [i_0] [i_0] [i_0]));
                                var_18 *= ((/* implicit */unsigned int) (((+(12213205982721948289ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4012980794173380242ULL)) ? ((~(arr_1 [(_Bool)1]))) : (((/* implicit */long long int) ((arr_4 [i_0] [(_Bool)1] [i_0]) & (((/* implicit */int) arr_11 [i_0] [(unsigned short)14])))))));
                }
                var_20 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [(signed char)1]);
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)45))) ? (((((/* implicit */_Bool) 6233538090987603355ULL)) ? (((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 3] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2] [i_0 - 1])))) : (-1821906818)));
                arr_13 [i_1 - 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (unsigned char)251))) >= (max((12213205982721948291ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_1 + 3] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) (unsigned short)65529);
                var_23 = ((/* implicit */long long int) max((var_23), (arr_17 [i_5])));
                var_24 = ((/* implicit */signed char) ((_Bool) max((arr_15 [i_5]), (((/* implicit */signed char) (_Bool)1)))));
            }
        } 
    } 
}

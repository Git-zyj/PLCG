/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2365
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
    var_11 = ((/* implicit */_Bool) ((signed char) var_0));
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)));
    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) var_5))))))) ? (((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_2 [i_4]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_16 = ((signed char) ((_Bool) arr_9 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1]));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 3] [i_1])) ? ((+(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_10 [i_1 - 2] [i_5] [i_5] [i_5] [i_1 - 2]))))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) min(((((_Bool)1) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))))), (((((((/* implicit */_Bool) 2260356257U)) ? (arr_6 [i_5] [(_Bool)0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_7]))))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (3604942917430356653ULL)))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_6) ? (arr_6 [i_1] [(signed char)9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (arr_9 [i_1 - 4] [i_1 - 4] [i_6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1 - 2] [i_5]))))) > (arr_9 [i_6] [i_7] [i_6] [i_1])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

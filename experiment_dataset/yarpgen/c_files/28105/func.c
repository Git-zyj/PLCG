/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28105
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((+(var_11))) | (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))))))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 17254738397452455279ULL))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 = arr_1 [i_1] [i_2];
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_3] [8ULL] [i_3] [i_3]))))) ? (((/* implicit */int) arr_6 [i_2] [i_0] [i_3])) : (((((/* implicit */int) arr_1 [i_0] [(unsigned short)8])) * (((/* implicit */int) var_8)))))), (((/* implicit */int) ((unsigned short) 17254738397452455279ULL))))))));
                            var_17 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_7 [i_3] [i_1] [i_3] [(unsigned short)16])))));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */int) (short)23378)) != (((/* implicit */int) (short)-22928)));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) 5168762114773819113LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10))) >= (((/* implicit */unsigned long long int) ((-5168762114773819097LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23970))) ^ (18158513697557839872ULL)))))));
}

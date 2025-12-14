/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48495
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
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) (signed char)112))) ? (((((/* implicit */_Bool) 4286297243U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3099))) : (-7712535116305806810LL))) : (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6900351327637814941LL))))), (((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (var_13))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) -1474459319)), (((((/* implicit */_Bool) (signed char)-111)) ? (17234224550894208115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7019958851954865153ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1478151966U))) << (((((((/* implicit */_Bool) (signed char)-112)) ? (-2026737611320533030LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))) + (2026737611320533052LL)))));
                        var_21 += ((/* implicit */short) (!((_Bool)1)));
                        arr_11 [i_0] [i_3] [i_3] [i_0] = (!(((/* implicit */_Bool) 4284448619545186973LL)));
                    }
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5243432937855348328ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) : (4286297253U)))) ? (4503108422995819916LL) : (min((4284448619545186989LL), (4284448619545186973LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3882))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-112))))) : (1042311106U)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_8);
}

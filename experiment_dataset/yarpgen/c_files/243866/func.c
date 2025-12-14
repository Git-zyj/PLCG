/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243866
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
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 - 2] [i_1] [i_0])) ? (-825091602) : (var_6)))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_4]), (arr_3 [16ULL] [i_2] [14])))) : (5138627042736065511ULL))))));
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_3 - 4] [(signed char)17]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -445481662310494115LL))))) : (((/* implicit */int) var_2))))) ? (max((min((5138627042736065511ULL), (13308117030973486113ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((arr_2 [i_0]) - (3910978870U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_4 + 2] [i_4 + 2])))));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2917)) & (((/* implicit */int) arr_9 [i_4] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_0]))))) ? (5138627042736065511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (var_9)))))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_2 - 1] [i_2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) 30720U)) : (arr_12 [i_0] [i_1 + 2] [i_2 - 1] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)15]))) == (arr_13 [(unsigned short)10] [(unsigned short)10] [i_2 - 1] [i_1] [i_4 + 1]))), (arr_7 [i_2 - 1])))))));
                                var_16 += ((/* implicit */unsigned char) arr_12 [i_0] [i_3] [i_2 - 1] [i_0] [i_4 - 1]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [(_Bool)1] [i_1])), (arr_5 [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */int) arr_9 [6LL] [6LL] [i_1] [i_1 - 1] [i_1 + 1] [(unsigned char)11])) & (((/* implicit */int) arr_6 [i_1 - 1])))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_6 [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1])))));
                arr_18 [i_0] [i_1] = ((/* implicit */short) min(((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_1)))))), (((/* implicit */int) min((arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1]), (arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_10))))))))));
}

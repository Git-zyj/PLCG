/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4138
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
    var_18 = ((/* implicit */_Bool) (+(((3759234934388171912LL) - (7688097882487292573LL)))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -490032126)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_3))))) : (var_8))))))));
    var_20 = ((/* implicit */int) min((var_20), (var_16)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((short) min((((/* implicit */int) arr_1 [i_0] [i_0 - 4])), ((+(((/* implicit */int) (unsigned short)384))))));
                var_22 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) + (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (-1158315679))), ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) (_Bool)1)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
                arr_6 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (-(arr_0 [i_0 - 3] [i_1 - 1])))) ? (((/* implicit */int) arr_1 [i_0 - 4] [i_0])) : (((/* implicit */int) (signed char)-4))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2 + 1] [1] [i_3] [i_1] = ((/* implicit */signed char) min((((((8239734181426521629LL) & (((/* implicit */long long int) arr_4 [i_3] [i_2])))) % (((/* implicit */long long int) 66060288)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -3559737927084044490LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) * (var_0))))));
                            arr_13 [i_1] [i_1] [i_2] [1U] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_4 [i_2] [0LL]))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_16 [i_0 - 3] [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_3] [i_1] = max((((/* implicit */long long int) ((signed char) (unsigned short)59608))), (((arr_14 [i_2 - 1] [i_2 + 1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                                var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) & (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 3] [i_0]))) : (2767780651U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_2 + 1] [i_1 - 1])))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (2147483647)))) / (((unsigned int) arr_14 [i_1 - 1] [i_2] [i_4]))))));
                                var_24 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_3])) << (((((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]) + (1956681678))) - (7))))))) : (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_3])) << (((((((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]) + (1956681678))) - (7))) - (214831889)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
}

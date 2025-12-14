/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24829
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
    var_17 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) 2986629625U)))) ? (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) var_14))))) : (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) >> ((((+(((((/* implicit */int) var_9)) | (((/* implicit */int) var_2)))))) + (52)))));
    var_18 = ((/* implicit */int) ((4497994111736226242ULL) << (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) & (((/* implicit */int) var_16))))), (max((((var_5) + (((/* implicit */unsigned long long int) 4619700933421147574LL)))), (((/* implicit */unsigned long long int) var_15))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_15))))))) + (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) 1780862007)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) + (((7276252855053513297ULL) - (((/* implicit */unsigned long long int) 1308337660U))))))));
                            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_5 [i_0] [i_1] [i_2] [11ULL]))), (((/* implicit */unsigned long long int) ((2986629633U) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (long long int i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned short) ((var_5) ^ (((/* implicit */unsigned long long int) var_8))));
                            arr_16 [i_0] [i_1] [i_4] [i_4] [(signed char)2] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16382))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_4] [(unsigned short)1])))))))));
                            arr_17 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (var_8)))) || (((/* implicit */_Bool) min((1468682333U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_1]))))))))));
                            var_24 = ((/* implicit */long long int) arr_10 [i_5] [(short)7] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((long long int) max((var_5), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_15))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201468
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
    var_12 -= ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */short) (+(var_4)));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_0))))) < (var_6))) ? (((/* implicit */long long int) var_11)) : (max((((/* implicit */long long int) ((signed char) var_5))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (8872954808293975885LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 - 2] [i_2] [i_3] [i_1])) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) > (((/* implicit */int) (unsigned char)25)))))));
                                var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [8ULL])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1])) : (arr_12 [i_0 + 1] [i_1]))));
                                var_18 = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_1 + 1] [i_0 - 1] [i_2] [i_3] [i_3]));
                                arr_14 [i_0] [i_1] [i_1] [0U] [0ULL] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) arr_0 [i_0 - 2]))));
                                var_19 ^= ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) + (((/* implicit */int) (unsigned char)25))))) ? (arr_12 [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_0] [(signed char)8] [(signed char)8] [i_0]))))))))));
                    var_21 = ((/* implicit */signed char) (~(arr_9 [i_2] [i_1] [i_1] [i_0 - 1])));
                }
                var_22 = var_5;
                var_23 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (_Bool)0)), (2529104437U)))));
                var_24 = max((((min((((/* implicit */unsigned long long int) var_4)), (arr_2 [(unsigned short)7]))) - (((/* implicit */unsigned long long int) (+(arr_11 [i_1] [4LL] [i_1] [i_1 - 1] [i_0 - 1])))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) * (((/* implicit */int) var_10))))) ? (arr_4 [i_1 + 1] [i_1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)26)), (arr_5 [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
}

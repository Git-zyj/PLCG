/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49554
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_7 [i_0] [8LL] [i_2] [i_0 - 3]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (min((arr_7 [i_0] [i_1] [i_2] [i_0 - 1]), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
                        arr_12 [i_3] [i_3] [i_3] [i_0] [i_3] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3]) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_20 ^= ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)17385))))) >= (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */_Bool) ((((/* implicit */long long int) min((((((/* implicit */int) arr_13 [i_5 + 2] [(_Bool)1] [i_2] [(_Bool)1] [i_0 + 2])) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)-3))))) / (arr_7 [i_0] [6U] [i_2] [i_4])));
                                var_22 = ((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_1]);
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) 4398046511103LL))), (((((/* implicit */_Bool) 2161275638U)) ? (arr_10 [i_0] [i_0 - 2] [i_4 + 1] [i_4]) : (arr_10 [i_0] [i_0 - 2] [i_4 - 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_13 [8] [6ULL] [i_1] [8ULL] [i_2]))));
                    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)10] [i_1] [i_0] [i_2] [i_2])) ? (arr_10 [(unsigned char)2] [i_0 + 1] [i_0 - 1] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)4] [i_1] [i_0] [i_0] [(unsigned char)4])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-299788334), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)44607)))) : (((/* implicit */int) (_Bool)1))))) : (var_10)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_7] = (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_7 - 1] [i_0] [i_7 - 1] [i_0] [i_0 - 3])))));
                                var_26 = ((/* implicit */unsigned short) ((((var_15) / (((/* implicit */long long int) 2147483647)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_1])) ? (arr_18 [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [0ULL] [i_7]))))))));
                                var_27 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]);
                                var_28 = (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_4 [i_2] [i_1] [i_0])), ((unsigned short)47842))), (((/* implicit */unsigned short) (short)-18692))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) * (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_8))))) ? (((-6907199510027611677LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17694))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
}

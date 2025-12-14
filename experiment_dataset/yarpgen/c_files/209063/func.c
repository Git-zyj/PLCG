/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209063
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((arr_3 [(_Bool)1]) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 3] [i_2] [i_1 - 3])))))), (((long long int) var_12))))));
                    arr_9 [i_0] [(signed char)21] = max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) arr_5 [i_1 + 4] [i_2 + 2])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1]))))), ((-(var_6))));
                    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((arr_0 [i_2 + 3]), (((/* implicit */unsigned long long int) (unsigned short)65523))))) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_1 - 3] [i_2] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((int) arr_8 [i_5] [i_4] [7] [7]))))) ? ((+(arr_15 [i_3] [i_3]))) : ((-(arr_14 [i_5])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : ((-(arr_6 [i_6])))));
                        arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_3] [i_4] [i_5]))));
                        arr_25 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) ((arr_13 [i_6 - 1]) - (arr_13 [i_6 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        arr_28 [15LL] [15LL] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_19 [i_7 - 2] [i_7 + 1] [3LL] [i_7 - 2]) > (arr_19 [i_7 - 2] [i_7 + 1] [i_7] [i_7])));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7 + 1] [i_7])) ? (((((/* implicit */_Bool) var_13)) ? (6187976641354299153LL) : (((/* implicit */long long int) var_2)))) : (((((/* implicit */_Bool) 2095104U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_5]))) : (arr_14 [i_3])))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_31 [(short)10] [(short)10] [i_5] [i_8 - 2] [i_8 - 1] [i_4] = ((((long long int) ((((/* implicit */unsigned long long int) var_7)) >= (arr_16 [i_5] [i_8 + 1])))) << (((((/* implicit */int) var_17)) - (49))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_3 [i_8 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))))));
                        var_24 = ((/* implicit */long long int) max((((unsigned long long int) arr_8 [i_3] [(unsigned char)10] [i_4] [i_8])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [7ULL] [i_5] [i_8] [i_8])))))));
                        var_25 |= arr_30 [i_5];
                    }
                }
            } 
        } 
    } 
    var_26 += ((/* implicit */signed char) (~(((int) (~(9223372036854775807LL))))));
}

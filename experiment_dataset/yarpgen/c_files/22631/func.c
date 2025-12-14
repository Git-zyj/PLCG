/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22631
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((/* implicit */int) (!(var_2)))))))));
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -606781160))))), (arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */signed char) (+((((+(arr_1 [i_0]))) + (((/* implicit */unsigned long long int) ((unsigned int) (short)-27873)))))));
                            arr_11 [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 18014398509481984LL))))) - (((((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_0])) ^ (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0])))))), (((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)57), (((/* implicit */signed char) arr_5 [i_0] [i_0] [(unsigned short)11] [i_1]))))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (min((((/* implicit */unsigned long long int) max((var_12), (arr_0 [i_1])))), ((~(4558740938671404106ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        for (short i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_4])) ? (6676654370769590551LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_15 [8ULL] [i_5]) : (arr_15 [(unsigned char)20] [i_5]))))))) ? (((((/* implicit */_Bool) arr_15 [6ULL] [6ULL])) ? (((/* implicit */long long int) (~(arr_15 [(short)16] [i_5])))) : (((arr_17 [4LL] [4LL] [(unsigned char)2]) ? (arr_13 [i_4] [i_5]) : (((/* implicit */long long int) arr_15 [(_Bool)1] [(_Bool)1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_13 [i_5 + 3] [i_4]), (((/* implicit */long long int) arr_14 [i_4 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [2LL] [i_5] [2LL]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [(unsigned char)7]))) : (arr_15 [(short)14] [i_5]))))))));
                arr_18 [i_5] = min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) arr_16 [i_4] [i_5])))))) / (((((/* implicit */_Bool) 4167047827419199738LL)) ? (arr_13 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [10U]))))))));
            }
        } 
    } 
    var_18 = var_6;
}

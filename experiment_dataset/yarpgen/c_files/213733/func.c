/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213733
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
    var_14 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)42677)) : (((/* implicit */int) (unsigned char)141)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_12))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_11 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) (_Bool)1)), (arr_10 [i_4 - 1]))));
                                arr_12 [(unsigned char)11] [i_3] [18U] [i_3] [(unsigned char)11] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (arr_9 [i_0] [i_1] [i_1] [i_3] [2ULL] [i_4 + 2])))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_0 [i_1])), (min((var_10), (((/* implicit */unsigned short) arr_0 [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_5 - 1]))) ? (min((arr_18 [i_5 - 1]), (arr_18 [i_5 - 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_17 = arr_21 [i_5] [i_5] [i_7] [(signed char)11];
                            var_18 *= ((/* implicit */long long int) arr_23 [i_7] [i_5]);
                        }
                    } 
                } 
                arr_24 [i_5 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_5 - 1])))) >= ((~(18446744073709551604ULL))))) ? (max((((/* implicit */int) var_10)), (arr_14 [i_5 - 1]))) : (((/* implicit */int) var_7))));
            }
        } 
    } 
}

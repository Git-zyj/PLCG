/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218874
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551604ULL)) || (((/* implicit */_Bool) var_2))))), (min((380085947), (380085943)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [12U] [i_4] = ((/* implicit */unsigned int) ((15109332521432203149ULL) + (((/* implicit */unsigned long long int) 418160766070321074LL))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [(unsigned char)15] = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -8277336718656482793LL))))))) - (((/* implicit */int) ((-8885721868362778195LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1] [i_4] [i_2]))) : (arr_10 [i_1] [(unsigned char)7] [i_4] [i_3] [i_4] [i_4])))))))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2460886133U)) ? (418160766070321085LL) : (((/* implicit */long long int) 1913456630))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_17 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) arr_16 [i_1]))))), (min((((/* implicit */long long int) 2023035395U)), (arr_3 [i_5] [i_1] [i_0])))));
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-380085944), (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2037354958762821658LL))))) : (((/* implicit */int) (unsigned char)96))));
                    var_17 = ((/* implicit */int) min((5U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5] [i_0] [i_0])) >> (((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6 - 3] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 - 4] [i_6 + 3] [i_6 - 3] [i_1] [i_6 - 3] [i_6 - 4]))) : (arr_18 [i_6 - 4] [i_6 - 1] [i_6 + 3] [i_6 + 1] [i_6 + 1]))))))));
                                arr_24 [i_0] [i_1] [i_6] [i_0] [i_0] [i_6] [i_1] = ((/* implicit */unsigned char) ((1677807037993865123LL) >> (((1346497040U) - (1346497013U)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

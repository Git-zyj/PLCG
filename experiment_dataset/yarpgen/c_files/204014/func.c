/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204014
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 &= ((/* implicit */long long int) (_Bool)1);
                                arr_11 [i_0] [(unsigned char)0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) 129390013U);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 2]) >> (((/* implicit */int) (unsigned char)0))))), (((11053202577568841698ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_2 - 2] [i_2 - 3] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_18 [i_5] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (11053202577568841685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)17]))) : (arr_1 [i_1] [i_1])))) : (arr_16 [i_0] [i_0] [i_2] [i_5] [i_6])))) ? ((-(arr_6 [i_0] [9ULL] [i_0]))) : (((/* implicit */unsigned long long int) ((arr_1 [i_2 + 1] [i_2 - 1]) | (arr_1 [i_2 - 3] [i_2 - 2])))));
                                arr_19 [i_6] [i_5] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_15 [i_0] [17] [i_1] [i_5] [i_1] [i_0] [i_1]) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) : (arr_14 [i_0] [i_0] [i_0] [i_2 - 1])))) ? (((arr_8 [i_5] [i_1] [i_5] [i_2]) | (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5])))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 + 1])) != (((/* implicit */int) (_Bool)1)))))));
                                arr_20 [i_6] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4165577296U)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned char)15] [i_1] [i_0] [i_0] [i_2 - 2])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5] [i_6] [i_5] [i_2 - 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = (unsigned short)53238;
    var_21 = ((/* implicit */short) (-((-(max((((/* implicit */long long int) 4294967278U)), (var_7)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5258
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
    var_12 = ((/* implicit */unsigned char) 15U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((0ULL) ^ (12ULL)));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_8))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (arr_12 [i_0] [i_1] [i_0]) : (-563885717159623385LL))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (1460200037)))), (arr_8 [2LL] [i_0] [5LL] [1U] [i_0]))) : (((/* implicit */unsigned int) var_10))));
                            }
                        } 
                    } 
                    arr_13 [i_0 + 2] [i_1] [i_1] [(unsigned short)2] &= ((/* implicit */unsigned char) arr_11 [9] [9] [i_0] [i_1] [0LL]);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) -563885717159623379LL))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [(signed char)6] [4LL] [4] &= ((/* implicit */short) (signed char)-1);
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_3))));
                                arr_21 [i_0] [2] [i_0] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551596ULL)))) || (((/* implicit */_Bool) var_2))))) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) 593933698)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] = arr_4 [i_0] [i_1];
                }
            } 
        } 
    } 
}

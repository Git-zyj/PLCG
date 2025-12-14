/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38569
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_3] [10U] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_11)))));
                                arr_16 [i_0] [2] [i_2 + 1] [i_3] [i_4] [5U] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_2]) == (max((((var_9) + (((/* implicit */int) var_7)))), (((/* implicit */int) arr_14 [i_4] [i_1] [i_2 + 1] [i_3] [i_3 - 2] [(unsigned short)16]))))));
                                arr_17 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((int) (unsigned short)6245))))) * (((((arr_4 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))) ^ (((/* implicit */unsigned long long int) max((arr_0 [(signed char)16]), (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (8935141660703064064ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1 + 1] [i_5] [i_5] [i_1 + 1] = ((/* implicit */unsigned long long int) ((short) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_0] [(signed char)10] [i_1 - 2] [9LL] [i_5] [i_6]))))));
                                var_17 = 2147483647;
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [11ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [4ULL] [i_1] [i_1] [(unsigned char)12] [i_1])) % (9511602413006487553ULL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */int) var_13)), (max((((/* implicit */int) var_7)), (var_16))))))));
    var_19 = ((/* implicit */unsigned long long int) var_14);
    var_20 &= ((/* implicit */short) ((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}

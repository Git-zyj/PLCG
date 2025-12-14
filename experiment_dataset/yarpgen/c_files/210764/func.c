/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210764
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57139)) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))) - (3892948079U)))));
        var_18 = arr_3 [i_0 - 1];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [4ULL] &= ((/* implicit */int) (-(arr_7 [i_0 - 2] [i_1 - 1] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((13004977548330127130ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60934))));
                                var_20 = ((/* implicit */unsigned long long int) ((arr_7 [i_2 - 3] [i_0 + 1] [i_0]) >> (((arr_7 [i_2 - 2] [i_0 + 1] [i_0 + 1]) - (3463102190U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned long long int) arr_11 [12] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(unsigned short)6])) ^ (((/* implicit */int) arr_5 [6ULL]))));
    }
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))))) >> (((((/* implicit */int) var_2)) - (63727)))));
    var_22 = ((/* implicit */unsigned char) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244112
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) (unsigned short)61325);
                var_16 = arr_3 [i_0] [i_0] [i_1];
            }
        } 
    } 
    var_17 = var_12;
    var_18 = var_14;
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (signed char i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_5 [(unsigned char)6]) & (((/* implicit */unsigned int) arr_8 [i_3] [i_3]))))), (max((min((((/* implicit */long long int) (unsigned short)7168)), (arr_6 [i_2]))), (((/* implicit */long long int) arr_8 [i_2] [i_3])))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_13 [i_2]) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_2] [i_4] [i_5] [i_2]), (((/* implicit */unsigned short) arr_13 [i_2]))))) ? (arr_6 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_3] [i_2]))))))));
                                arr_16 [(unsigned short)16] [i_2] [i_4] [i_2] = ((int) ((int) 7895413919908596785ULL));
                            }
                        } 
                    } 
                } 
                arr_17 [i_2] = var_8;
                var_20 |= ((/* implicit */unsigned long long int) (((~(max((250540529), (((/* implicit */int) var_2)))))) | (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)0))))));
                arr_18 [i_2] [i_3] [i_3 - 1] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned short) arr_13 [i_2])), (arr_9 [i_3 - 3] [i_3 + 1] [i_3] [i_2]))));
            }
        } 
    } 
}

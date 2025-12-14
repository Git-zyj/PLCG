/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53850
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) 1263845755)))) || (((/* implicit */_Bool) min((max((4294967293U), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [i_0] |= ((((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2]))) | (((((/* implicit */_Bool) 2U)) ? (arr_9 [i_1 + 1]) : (arr_9 [i_0 - 1]))));
                            arr_11 [1] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (signed char)-35)) : (1263845755)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) * (0U)))) ? (((3U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_2])))))))) : (min((((/* implicit */unsigned long long int) max((1263845729), (((/* implicit */int) arr_1 [i_0]))))), (arr_4 [i_0 - 1] [2LL] [i_1 - 4] [i_1 - 4])))));
                            var_14 ^= max((((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])) + (((/* implicit */int) arr_3 [i_1 + 3] [i_1])))), (((/* implicit */int) min((arr_3 [i_1 + 2] [i_1]), (arr_3 [i_1 + 1] [(unsigned short)1])))));
                        }
                    } 
                } 
                var_15 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) || (((/* implicit */_Bool) arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 3])))))));
                var_16 -= ((/* implicit */short) ((5079190262768162818LL) / (((/* implicit */long long int) 13U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_16 [i_4 + 1]))));
                                arr_26 [i_4] [(unsigned char)8] [i_4] [i_4] [i_4] [i_4] = ((((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_6] [i_5] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4 + 1] [i_4 + 1] [i_4] [3LL] [6LL] [i_4 + 1]))) : (arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))) - (((/* implicit */unsigned int) ((arr_24 [i_4] [i_5] [i_6] [i_4] [i_8] [i_5]) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_24 [10LL] [i_5] [i_6] [i_6] [3ULL] [i_5]))))));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_4] [i_8] = ((/* implicit */short) -5871772377319617738LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

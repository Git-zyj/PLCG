/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2098
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
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)43592))));
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_3] |= ((/* implicit */signed char) min((arr_3 [i_2] [i_3]), (((/* implicit */int) (unsigned short)43589))));
                        var_15 -= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((((/* implicit */int) (signed char)-6)) & (-1193602745)))) ^ (arr_0 [i_3]))), (min((max((var_0), (((/* implicit */long long int) 1739312628)))), (((/* implicit */long long int) arr_8 [i_3] [i_1 + 1] [i_1] [i_1 + 1]))))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */short) (signed char)-6);
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)21965))));
                    }
                    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 + 3] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1 + 2] [17] [i_1 - 1])) : (((/* implicit */int) (short)-10996)))), (((int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21947)) & (((/* implicit */int) (short)7)))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) -1728525222)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [3ULL])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 3] [i_2])))), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (signed char)-116))))))) / (((long long int) max((((/* implicit */unsigned long long int) (unsigned short)43592)), (arr_13 [i_0] [(signed char)17]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 10; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) arr_15 [i_6]);
                var_23 = ((/* implicit */long long int) (unsigned short)43571);
                var_24 = ((/* implicit */unsigned short) (-(12266379277221836280ULL)));
                arr_19 [i_6] [i_5 - 1] [i_5 - 1] = ((/* implicit */short) arr_1 [i_5 + 1]);
            }
        } 
    } 
}

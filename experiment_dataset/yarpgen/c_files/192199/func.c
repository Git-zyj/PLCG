/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192199
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)129)), (arr_2 [i_0] [(unsigned short)9])));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)138);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [11LL] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)23))))) >= (arr_3 [i_1 - 2] [i_2 + 1])));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)129);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((((/* implicit */int) var_14)) + (1969540915))) : (((/* implicit */int) ((((/* implicit */int) (signed char)118)) == (-1969540916)))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_13 [i_3] [12U] = arr_11 [i_3];
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) ^ (max((470079238U), (((/* implicit */unsigned int) arr_10 [i_3]))))));
        arr_15 [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_3] [i_3]) ^ (arr_12 [7] [i_3])))) ? (max((arr_11 [i_3]), (arr_11 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58552)) ? (1969540915) : (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)2914)), (min((((/* implicit */int) ((((/* implicit */int) arr_16 [i_4])) == (((/* implicit */int) (unsigned short)45352))))), ((-(((/* implicit */int) (unsigned short)20675))))))));
        arr_18 [i_4] = ((/* implicit */long long int) 10U);
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        var_21 = ((arr_11 [i_5 - 3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 3]))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5]))) - (arr_11 [(unsigned char)9])))) ? (11U) : (arr_11 [i_5 + 1])));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
    {
        for (int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            {
                arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_26 [i_6]);
                var_22 = ((/* implicit */unsigned long long int) (~(arr_23 [i_6 - 2])));
            }
        } 
    } 
}

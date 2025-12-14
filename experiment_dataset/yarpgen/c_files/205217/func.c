/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205217
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) max(((-(((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))))))), (0ULL)));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_4 [(unsigned char)12] [i_1] [(unsigned char)12]))))), (((((/* implicit */_Bool) arr_3 [(short)0])) ? (max((((/* implicit */unsigned long long int) arr_3 [(unsigned short)16])), (var_5))) : (arr_0 [i_0] [i_1]))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((arr_0 [i_1] [i_2]) ^ (var_9))) | (min((((/* implicit */unsigned long long int) arr_6 [8])), (arr_0 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_3] [i_3] [i_5] [i_5] = ((((/* implicit */_Bool) arr_16 [i_6] [i_4] [i_5] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) 18ULL))))), (arr_5 [i_5] [i_4 - 1]))))) : (min((((((/* implicit */_Bool) arr_4 [i_5] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))), (((((/* implicit */_Bool) -1994422655)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_4]))))))));
                                arr_19 [i_4] [i_6] |= ((/* implicit */int) 18446744073709551615ULL);
                                var_13 ^= ((/* implicit */unsigned short) max((((((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (signed char)1)))) & (((((/* implicit */int) (unsigned short)54549)) & (((/* implicit */int) (short)7689)))))), (((((/* implicit */_Bool) arr_16 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_11 [i_3] [i_4]), (((/* implicit */short) (signed char)-76)))))))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_5])) ? ((+(8755258674177809131ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_4 + 1])), (arr_5 [i_5] [i_4 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        var_15 = ((/* implicit */int) var_3);
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((var_9), (((/* implicit */unsigned long long int) arr_21 [i_8])))))));
        var_17 ^= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [(short)20])))))) + (min((((/* implicit */long long int) min(((signed char)-80), ((signed char)-15)))), (var_7))));
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) arr_23 [6ULL]))))));
        arr_25 [i_9] [i_9] = ((max((var_8), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) arr_9 [i_9] [i_9])));
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (arr_12 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)41), (((/* implicit */unsigned char) (signed char)31)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_22 [i_9])) : (((/* implicit */int) var_0))))) + (var_6)))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 1) 
    {
        var_19 ^= ((/* implicit */int) (signed char)-1);
        var_20 -= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_0 [i_10 + 1] [i_10 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [10LL] [i_10 - 1] [10LL]), (arr_5 [14ULL] [14ULL])))))));
    }
}

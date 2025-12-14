/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227435
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) var_2)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_0]);
                            arr_13 [i_1] [i_0] [i_1 + 1] [i_1 + 1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (2734231762U)))), (((unsigned long long int) arr_6 [i_1 - 1] [i_3] [12ULL])));
                            arr_14 [(unsigned char)14] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_2] [i_2]), (arr_4 [i_3] [i_1 + 1])))) ? (((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) var_7)), (arr_7 [i_3] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned char) arr_6 [i_0] [i_1 - 4] [i_1 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) var_3);
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_21 [i_8] [i_5] [i_7]))));
                                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) var_9))))), (var_2)));
                                var_19 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned short)1023)))), ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1] [i_5])) : (((/* implicit */int) arr_7 [i_4] [i_5] [i_6] [i_7]))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4154215626U)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5])))));
                    var_21 ^= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) arr_6 [i_4] [i_5] [i_6])), (((unsigned int) (unsigned char)175))))));
                    arr_29 [i_4] [i_4] [i_6 + 1] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(7501171829110411450ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [15U])) <= (((/* implicit */int) arr_6 [i_6 + 1] [(signed char)17] [i_6 + 1]))))) : (((/* implicit */int) arr_15 [i_4]))));
                    var_22 = ((/* implicit */short) min((var_22), (var_9)));
                }
            } 
        } 
    } 
}

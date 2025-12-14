/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28592
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_0 [i_0]))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)59452)) : (((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(5723728650200937580LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [0LL])), (var_7)))) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) : (var_3)));
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [6U])) : (((/* implicit */int) arr_3 [(unsigned short)8]))))) / (arr_5 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                arr_15 [(unsigned short)4] [i_3 + 2] [5U] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 3])))) % ((+(((/* implicit */int) arr_3 [i_2 - 2]))))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_18 [i_3 - 2] [i_3 - 2] [(unsigned short)9] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))), ((+(var_4)))));
                    arr_19 [i_4] [i_3 - 2] [i_2] = ((unsigned short) max(((+(var_3))), (((/* implicit */long long int) (+(arr_9 [i_4] [(unsigned short)13]))))));
                    arr_20 [i_4] [i_4] [i_4] [i_4] = max((((/* implicit */int) (!(arr_13 [i_3] [i_3] [i_3 - 2])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_7)))));
                    arr_21 [i_2] [i_3] [i_4] = ((/* implicit */int) 2838384812U);
                    arr_22 [0LL] [i_3] [i_4] = ((/* implicit */long long int) arr_4 [(unsigned short)9] [i_2 - 1]);
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_27 [i_5] [i_3] [i_5] = ((((/* implicit */long long int) ((((/* implicit */_Bool) -5775560804986729647LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59450))))) * (((arr_5 [(unsigned short)15] [i_2]) / (var_8))));
                    arr_28 [i_2] [i_2 - 1] [i_2 - 1] [i_5] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) var_2)))));
                }
                for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    arr_31 [i_2 + 1] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-5723728650200937568LL) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [9ULL]))))) ? (((((/* implicit */_Bool) (unsigned short)19992)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) ((var_4) ^ (arr_9 [i_2] [i_2])))) ? (min((var_4), (arr_0 [i_6]))) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_3])), ((short)9958)))))) : (arr_9 [i_3] [(short)9])));
                    arr_32 [i_2 - 1] [i_2] [i_3 + 2] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) arr_30 [2] [i_3 + 2] [i_6] [(unsigned short)12])) : (((/* implicit */int) arr_11 [10]))))) ? (arr_12 [i_2 - 2]) : (max((((/* implicit */unsigned int) (signed char)-97)), (arr_17 [i_3] [16U])))))));
                    arr_33 [i_2 - 1] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) + (((/* implicit */int) max((var_12), ((unsigned short)48175))))))) ? ((~(((((/* implicit */_Bool) arr_0 [15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))) : (17245764392360983395ULL))))) : (((/* implicit */unsigned long long int) ((int) arr_26 [i_6] [16LL] [16LL] [i_2])))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_3);
}

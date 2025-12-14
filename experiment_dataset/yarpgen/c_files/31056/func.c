/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31056
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (((1451901201954669149ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_0 + 1] [i_0 + 1] [0] |= ((/* implicit */int) ((unsigned char) ((((int) (signed char)0)) < (((/* implicit */int) ((var_6) >= (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_8)), (var_10)))), (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) (_Bool)1))))))) <= (var_7)));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)21))))) > (18446744073709551615ULL))))) % ((-(var_7)))));
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_21 [i_4] = (~(((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_19 [i_4] [i_4] [i_6]))))));
                    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))), (var_5))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_8] [i_9] [i_9]))) % (arr_28 [i_9] [i_8] [i_7])))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_4))));
                    arr_31 [i_8] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_26 [i_8]) : (arr_26 [i_7]))));
                }
            } 
        } 
    } 
}

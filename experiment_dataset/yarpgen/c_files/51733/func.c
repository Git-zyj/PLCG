/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51733
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
    var_15 = ((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_11))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [15ULL] [i_1] [i_2 - 2] [i_2]);
                    arr_10 [i_2] [(short)2] = ((/* implicit */short) (_Bool)0);
                    var_16 = ((/* implicit */unsigned short) var_9);
                    var_17 = ((/* implicit */signed char) min((((unsigned int) (!((_Bool)0)))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */signed char) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 2])))))));
                    arr_11 [(unsigned short)6] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned int) ((max(((-(((/* implicit */int) var_12)))), ((-(((/* implicit */int) var_2)))))) % ((+(((/* implicit */int) arr_2 [i_0 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                arr_17 [(unsigned short)6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_5 [i_3 - 2] [i_4] [i_4]) < (arr_5 [i_3 + 2] [i_3 + 2] [(unsigned short)2])))) >> (((/* implicit */int) ((short) ((((/* implicit */int) arr_15 [i_3])) <= (((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_4] [i_4]))))))));
                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) arr_14 [i_3 + 1] [i_3 + 2]))) == (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 1]))) / (arr_14 [i_3 - 2] [i_3 + 2])))));
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) var_2)), (7384112035410667134ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)64993))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_13)))))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [8LL])) : (((/* implicit */int) arr_22 [i_5 - 1])))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_22 [i_5])) / (((/* implicit */int) var_2))))))));
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2914019291U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_5])))))), ((+(var_13)))));
                    arr_27 [i_5 - 1] [i_6] [i_6 - 1] [i_6 - 1] = max((((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [8U]))) + (2715121965U)))))), ((short)17773));
                    arr_28 [i_5 - 1] [i_6] = ((/* implicit */unsigned short) var_11);
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) 2914019291U))) & (var_10))))));
                }
            } 
        } 
    } 
}

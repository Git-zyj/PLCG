/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201207
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_5)), (var_0))) << (((((/* implicit */int) var_16)) - (47042)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((var_18) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))) >> (((((/* implicit */int) var_16)) - (47080))))))));
    var_20 ^= ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0]))), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_18)) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0])))))) * (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) >> (((((arr_0 [i_0]) ^ (((/* implicit */int) arr_1 [9U])))) - (433288312))))))))) : (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_18)) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0])))))) * (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) >> (((((((arr_0 [i_0]) ^ (((/* implicit */int) arr_1 [9U])))) - (433288312))) - (603600164)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (((-(1636180575U))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (2807860456U)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) var_17);
                    var_23 = ((int) ((arr_5 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_4])), (arr_9 [i_4] [i_4] [2U])))) ? (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_4 [i_4])))) : (((/* implicit */int) max((var_1), ((short)-28743))))))) < (arr_12 [i_4] [i_4] [i_4])));
        var_25 = arr_5 [i_4];
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6] [0U] [i_6 - 1]))))), (var_7)));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((var_6) & (max(((-(((/* implicit */int) arr_6 [i_6 - 1])))), ((+(arr_0 [i_4]))))))))));
                    arr_20 [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_6 - 1])) ? (arr_17 [i_6 - 2]) : (arr_17 [i_6 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)19924)))))));
                }
            } 
        } 
    }
}

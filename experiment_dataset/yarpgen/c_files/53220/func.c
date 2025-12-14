/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53220
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
    var_13 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_7)))))) : (max((-535337843004649395LL), (((/* implicit */long long int) 2073710251))))))), (var_0));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (-16810036)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) arr_5 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_1])));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_4 [i_2] [i_2]) | (-16810048))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) arr_14 [i_2 - 1] [i_2 + 3] [i_2] [i_2]))))) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 16810035)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_24 [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) (signed char)99);
                        var_18 = (~(((/* implicit */int) arr_21 [i_2] [i_2 + 3] [i_2] [i_2 - 2] [(short)11])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (var_10))))) <= (max((arr_0 [i_8]), (arr_0 [(signed char)13])))))), (((((/* implicit */int) ((arr_26 [11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) % (((((var_9) + (2147483647))) >> (((((/* implicit */int) var_5)) - (164)))))))));
        arr_27 [i_8] = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 1 */
        for (signed char i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)34546)))) ^ (((((/* implicit */_Bool) (unsigned short)65532)) ? (1058658020) : (((/* implicit */int) (unsigned short)30989)))))))));
            arr_31 [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [5ULL]))))), (((((/* implicit */_Bool) arr_29 [i_9 - 2] [i_9 - 2] [i_8])) ? (var_0) : (arr_29 [i_9 + 2] [i_9] [i_9])))));
        }
    }
}

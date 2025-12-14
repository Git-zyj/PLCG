/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198970
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (min((((var_6) >> (((/* implicit */int) (unsigned char)30)))), (((/* implicit */unsigned int) var_12)))) : (4294967295U)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) 131068)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)132)) ? (179637280) : (arr_3 [i_0])))))) : (arr_1 [i_0 + 1] [(unsigned short)3])));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 3])) | (max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (unsigned char)12)))), (131069)))));
        var_19 ^= (short)16133;
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 3])) ? (arr_4 [i_0 + 3] [i_1] [i_2]) : (arr_4 [i_2] [i_2] [(unsigned short)5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 4] [i_0] [i_0 + 3]))))) : ((-(max((var_8), (((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_2] [4U]))))))));
                    var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_6)) ? (arr_1 [(short)11] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)10] [14LL]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_1])) / (((/* implicit */int) (short)-32765))))))), (((/* implicit */unsigned int) (~((~(arr_3 [0U]))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (~(((unsigned long long int) min((((/* implicit */unsigned long long int) var_10)), (arr_6 [i_2] [i_2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        arr_12 [(unsigned short)13] [(unsigned short)18] = ((/* implicit */unsigned char) 2130706432U);
        var_22 = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_11)))));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 + 2])) & (((/* implicit */int) ((-131070) < (((/* implicit */int) (short)29472)))))))) ? ((+((-(((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_14)))))))));
        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_4 + 1] [i_4 + 2]), (arr_11 [i_4 - 1] [i_4 + 1]))))));
    }
}

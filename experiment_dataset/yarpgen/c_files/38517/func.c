/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38517
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_15))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_3 [i_0 - 1]) < (arr_3 [i_0 - 1]))))));
                    var_20 = var_10;
                    arr_8 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */int) arr_7 [i_0 + 1] [i_0]);
                    var_21 -= ((/* implicit */unsigned short) arr_1 [i_1]);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_4))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) == (arr_7 [i_0 + 2] [(unsigned short)0]))) ? (((long long int) arr_7 [i_0] [i_0 - 1])) : (((/* implicit */long long int) arr_5 [i_0] [i_0 - 1]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 4; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_4 + 1]))) > (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_4 + 1])))));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_5 [i_0] [i_4 - 2])))), (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_4 - 2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_5]))) ? (((((/* implicit */_Bool) arr_18 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_1 [i_5]))) : (arr_6 [i_5] [i_5]))))));
                    var_24 = (+((~(arr_11 [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [(unsigned short)19])) ? (arr_2 [i_5] [i_7]) : (((/* implicit */unsigned long long int) var_16)))) * (((((/* implicit */_Bool) (short)5619)) ? (9406313257267323738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38)))))))) ? (((/* implicit */unsigned long long int) (-((+(-130486035)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_0] [12LL] [i_6])), (var_1)))) ? (((arr_2 [i_5] [(unsigned short)6]) & (((/* implicit */unsigned long long int) arr_11 [i_5])))) : (((/* implicit */unsigned long long int) (~(arr_10 [i_5] [i_5] [i_5]))))))));
                        var_26 -= ((/* implicit */unsigned int) var_2);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_27 -= ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) var_16)) ? (arr_23 [i_8] [i_8]) : (((/* implicit */unsigned int) arr_3 [i_8])))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8]))))));
        arr_25 [i_8] [i_8] = arr_23 [i_8] [i_8];
        var_28 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775791LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)5619)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (6U)))))))) == (arr_19 [i_8] [i_8] [i_8] [i_8])));
        var_29 -= ((/* implicit */long long int) ((short) max((arr_1 [i_8]), (((/* implicit */unsigned long long int) arr_11 [i_8])))));
        var_30 -= ((/* implicit */long long int) arr_5 [i_8] [i_8]);
    }
    /* LoopNest 3 */
    for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    var_31 = ((/* implicit */_Bool) arr_20 [i_10] [i_9 - 1] [i_10]);
                    var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) var_9))) ? (arr_23 [i_9] [i_9]) : ((-(arr_28 [i_9 - 1]))))) >> (((arr_23 [i_9] [i_9 - 1]) - (3558302720U)))));
                }
            } 
        } 
    } 
}

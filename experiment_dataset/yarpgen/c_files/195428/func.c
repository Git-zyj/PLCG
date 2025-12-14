/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195428
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            arr_4 [(unsigned short)9] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-2147483646) > (1880710690))))) : (max((var_7), (((/* implicit */long long int) var_8))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) var_10);
        }
        var_12 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_3 [i_0] [i_0 + 3]))))) : (((((/* implicit */_Bool) 131068ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3])))))) : (((/* implicit */int) ((unsigned char) (unsigned short)28384)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_13 = (unsigned short)7823;
        var_14 = ((var_8) || (((/* implicit */_Bool) (unsigned short)53773)));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9242)) && (((/* implicit */_Bool) (unsigned short)40265))))) : (((/* implicit */int) ((short) var_4)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                arr_15 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_3]))));
                arr_16 [(unsigned short)16] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [(short)4] [(short)4]))) ? (((((/* implicit */int) (unsigned short)51064)) * (((/* implicit */int) arr_10 [i_4])))) : ((~(-1570806052)))));
                arr_17 [(unsigned short)15] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_2]))));
            }
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_14 [i_3] [(unsigned short)3] [(unsigned char)18] [i_3]))));
                arr_20 [i_3] = ((/* implicit */signed char) ((_Bool) arr_2 [i_3]));
                arr_21 [i_5] [i_2] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) arr_14 [7ULL] [16] [7ULL] [i_2])) ^ (((((/* implicit */_Bool) -7193757072450130396LL)) ? (((/* implicit */int) var_9)) : (var_3)))));
            }
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                arr_24 [i_6] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 + 1] [i_6] [i_6] [i_6 + 2]))) & (arr_23 [i_6 - 1] [i_6] [i_6] [i_3])));
                arr_25 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_18 [i_6 + 2] [(unsigned char)12] [i_6 - 1] [i_6 - 1]))));
            }
            arr_26 [i_3] = ((/* implicit */_Bool) (((-(var_7))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18345)))));
            var_16 = ((/* implicit */int) arr_14 [11] [i_3] [i_2] [i_2]);
        }
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_8)) >> (((arr_8 [i_7]) - (1860124133009838476ULL))))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) arr_23 [i_7] [i_7] [i_7] [18]);
    }
    for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
    {
        arr_34 [i_8] = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_12 [i_8 + 2])))) > (arr_23 [16LL] [16LL] [12ULL] [i_8]));
        var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) -2795136630542923683LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL]))) : (max((((/* implicit */unsigned long long int) (unsigned short)24353)), (var_1))))) ^ (((/* implicit */unsigned long long int) arr_32 [i_8 + 1]))));
        arr_35 [i_8] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_32 [i_8 + 1]))));
        arr_36 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [i_8 + 2] [(_Bool)1] [(_Bool)1] [2]), (1065748212399988626LL)))) && (((/* implicit */_Bool) ((arr_23 [i_8] [i_8 + 1] [12U] [i_8 + 1]) / (var_7))))));
    }
    var_18 &= ((/* implicit */unsigned long long int) var_10);
}

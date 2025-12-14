/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224423
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1]) : (arr_3 [i_1])));
            arr_7 [i_0] [i_1] = arr_0 [i_1];
        }
        var_17 -= ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
        arr_11 [i_2] = max((arr_8 [i_2]), (((/* implicit */long long int) min((((((/* implicit */_Bool) 907926912333883160ULL)) ? (2106593565) : (((/* implicit */int) (unsigned short)24)))), (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) arr_8 [(_Bool)1])))))))));
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3171)) ? (((/* implicit */int) (short)27048)) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)128))) >= (arr_8 [i_2]))))) : (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) min((min((arr_8 [i_2]), (((/* implicit */long long int) var_10)))), (arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) min(((short)128), (max((((/* implicit */short) (unsigned char)9)), ((short)-133)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */int) arr_17 [i_4 - 1] [i_4] [i_4 + 1]);
                        arr_20 [i_2] [i_2] [i_2] [i_4] [i_5] = (~(max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_19 [4ULL] [i_3] [17LL] [i_5]))))));
                    }
                    var_21 += ((/* implicit */int) (unsigned short)23);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_9);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28981)) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (short)119)), ((unsigned short)55649)))) * (((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)218)))))) : (((/* implicit */int) (unsigned char)101))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223276
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
    var_20 = ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) var_15)) >> (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned char)0] [(unsigned char)0] [i_2] [i_2] = ((/* implicit */signed char) (~(((arr_4 [i_0] [i_0 + 1]) - (arr_4 [i_0] [i_0 + 1])))));
                    var_21 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)60386)) : (((/* implicit */int) (unsigned short)39117))))), (arr_2 [i_0 - 1])))), (min((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_0 + 1]))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -18)) ? (-17) : (((/* implicit */int) (short)-11768)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)23)) : (arr_5 [i_0 + 1])))))), ((+(var_5)))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        var_22 = ((((arr_11 [i_6 + 1]) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_16 [i_3] [10] [10] [i_6 + 1] [i_3] [i_5])));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_6 + 1] [i_4] [i_4] [(_Bool)1] [i_3] [i_3]))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_21 [i_5] [i_3] [i_3] [i_5] = ((/* implicit */short) var_14);
                        arr_22 [i_3] [i_3] = ((((/* implicit */int) (signed char)4)) % (((/* implicit */int) (short)-5116)));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_9) >= (var_8))) ? (var_9) : (min((((/* implicit */unsigned int) arr_10 [i_4])), (var_8)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-18) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min(((signed char)118), ((signed char)4))))))))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_25 [i_3] [i_3] [i_3] [i_5] [i_8] = ((/* implicit */unsigned int) var_19);
                        var_25 = ((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        arr_28 [i_3] [i_4] [i_5] [i_9] [(_Bool)1] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-97)))) ^ (((/* implicit */int) arr_14 [i_9]))));
                        var_26 = ((/* implicit */unsigned long long int) var_13);
                    }
                    arr_29 [i_3] [i_4] [(unsigned short)17] [i_5] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))))) << (((/* implicit */int) max((var_15), (arr_8 [i_4]))))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_3])) || (((/* implicit */_Bool) arr_14 [i_3])))) ? ((+(((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_8 [i_5]))))) ? (((((/* implicit */int) max(((unsigned short)36807), (((/* implicit */unsigned short) arr_8 [i_3]))))) << (((((((/* implicit */int) ((signed char) var_17))) + (98))) - (18))))) : (min((((/* implicit */int) min((var_1), (((/* implicit */short) arr_8 [6U]))))), (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_4] [i_3] [i_3])) : (((/* implicit */int) arr_27 [i_3] [i_4] [i_3] [i_5] [i_4]))))))));
                    arr_30 [i_4] [i_4] [i_5] [(unsigned char)21] = ((/* implicit */short) (+(min((min((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_5])), (arr_26 [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (short)32767)) - (32752))))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (min((min((var_8), (((/* implicit */unsigned int) (signed char)127)))), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
    var_29 = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_11)), (var_17))))), (min((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (min((var_17), (var_17)))))));
}

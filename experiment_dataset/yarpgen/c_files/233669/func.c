/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233669
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_1])) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29251))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) var_15));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [12ULL] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1] [i_2 - 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 3] [i_2 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_2 [10LL] [i_2 + 2] [(unsigned short)11]), (arr_2 [i_1] [i_2 - 3] [i_2]))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3]))))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 6421425606519617062LL)) ? (max((var_13), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-16186)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_13 [i_0] [i_1]))))))))));
                    arr_14 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (arr_12 [i_1] [i_1] [i_3])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (arr_0 [i_3])))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_3]))))) <= ((+(arr_4 [i_0]))))))));
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_10))));
                    arr_17 [i_1] [17] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(arr_7 [i_1])))), ((-(9223372036854775807LL)))));
                    arr_18 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_4] [i_4])))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */short) max((67108863ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 - 1] [i_1] [i_1])))))));
                    var_22 &= ((/* implicit */unsigned char) ((signed char) min((((/* implicit */signed char) (_Bool)1)), (var_15))));
                    var_23 = ((/* implicit */unsigned char) -1638015851345367993LL);
                }
                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 67108863ULL))) * (((/* implicit */int) (signed char)-92))));
                arr_22 [i_0] [i_1] = ((_Bool) (-((-(arr_13 [i_0] [15ULL])))));
                arr_23 [i_0] [i_1] = ((/* implicit */unsigned short) (((-(3112789423U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        for (short i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            {
                var_24 *= ((/* implicit */signed char) arr_26 [i_7]);
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (var_13)));
                arr_30 [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) max((arr_29 [i_7 - 1] [i_7] [i_7]), (arr_29 [i_7 - 1] [i_7] [i_7]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_5);
}

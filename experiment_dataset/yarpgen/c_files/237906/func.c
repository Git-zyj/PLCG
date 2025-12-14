/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237906
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            var_11 = arr_10 [i_0] [i_0] [i_0] [i_2];
                            var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_3 + 3] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) arr_8 [i_3 + 2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))) == (arr_8 [i_3 + 1] [i_2]))))));
                            arr_16 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 3] [i_2] [i_3] [i_3])) + (((/* implicit */int) (signed char)25))))), (((long long int) arr_14 [i_1 - 3] [i_1 - 3] [i_2] [i_2] [i_4 - 2]))));
                            var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) var_2))))), (((long long int) arr_9 [i_4 + 2] [i_1 - 2] [i_0 + 2] [i_3 + 2]))));
                        }
                        var_14 &= ((/* implicit */unsigned int) min((((var_6) ^ (((/* implicit */int) (short)387)))), (((((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2])) | (arr_15 [i_3 + 2] [i_3 + 2] [i_2] [i_3] [i_3 + 2])))));
                        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1 - 4])) - (arr_15 [i_3 + 3] [i_3 + 1] [i_3] [i_3 + 2] [i_2])))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1 - 4] [i_3 + 1] [i_3])) ? (((arr_1 [i_3]) << (((arr_4 [i_1]) - (2340122712U))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned short)50916)))))) : ((+(((/* implicit */int) (signed char)88))))));
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)-34);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (9316065129128581163ULL)))) ? (2866340293U) : (((/* implicit */unsigned int) 1056964608))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) ((arr_4 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5])))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (3848491379U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_19 = ((int) var_5);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_6 - 1] [i_7])) && (((((/* implicit */_Bool) (unsigned short)14623)) && (((/* implicit */_Bool) (signed char)-21)))))))));
                    arr_28 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        arr_29 [i_5] = ((/* implicit */long long int) var_1);
    }
    var_21 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)84))) > (var_10)))))), ((~(((/* implicit */int) ((23ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))))));
}

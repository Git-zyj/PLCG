/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228910
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) + (var_4)))) ? (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((var_5) >= (var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [2U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2]))))) : (((arr_1 [i_0] [i_1]) + (((/* implicit */unsigned long long int) var_1))))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((max((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) arr_8 [i_1] [i_1] [i_0]))))));
                    var_10 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (arr_8 [9ULL] [9ULL] [i_2]) : (arr_8 [i_0] [i_1] [i_0]))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [10LL]) << (((arr_8 [i_0] [i_1] [i_3]) + (1922508280868099326LL)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))) + (12102856058016128887ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) / (18446744073709551604ULL))))))));
                    arr_14 [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) min((var_5), (arr_1 [i_0] [i_1])))) ? (min((((/* implicit */unsigned long long int) (short)2839)), (12716937254889995020ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned long long int) ((signed char) max((arr_13 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0])))))));
                    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_13 [i_0] [(unsigned char)10] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5588)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_0] [i_3])))));
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) (~((~(((unsigned long long int) var_6))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_18 [i_4]))))));
        var_14 = ((/* implicit */short) ((((min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_4])) << (((2948965578928753387ULL) - (2948965578928753377ULL)))))), (arr_8 [i_4] [i_4] [i_4]))) + (9223372036854775807LL))) << (((/* implicit */int) var_3))));
    }
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_1)) | (var_6))), (var_4))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198463
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 |= ((/* implicit */unsigned char) var_13);
            var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((min((var_2), (((/* implicit */long long int) (signed char)62)))) <= (((/* implicit */long long int) ((/* implicit */int) ((10294728309104979523ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        }
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_1 [i_0] [(short)4]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) ((arr_3 [i_0]) - (((/* implicit */long long int) arr_2 [i_0] [i_0])))))), (((((/* implicit */int) arr_1 [i_0 + 2] [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
        var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_3 [7LL])) | ((~(10294728309104979523ULL))))) & (8662188747710601769ULL)));
        var_19 += ((/* implicit */unsigned char) var_8);
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((~(((((/* implicit */int) arr_1 [(signed char)9] [(signed char)9])) | (arr_2 [i_2] [i_3 - 2]))))), (((/* implicit */int) min((arr_6 [i_4 - 1]), (((/* implicit */unsigned char) arr_1 [i_3 + 1] [i_3]))))))))));
                    var_21 = arr_9 [i_2];
                    var_22 = ((/* implicit */long long int) ((((((arr_12 [i_3 + 1] [i_4 - 1] [i_4]) + (2147483647))) >> (((arr_12 [i_3 - 2] [i_4 + 1] [i_4]) + (1789831616))))) << (((min((((/* implicit */unsigned long long int) (signed char)-1)), (max((((/* implicit */unsigned long long int) var_7)), (1514795925827041151ULL))))) - (1514795925827041150ULL)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((int) (~(((/* implicit */int) (signed char)-13))))), (((/* implicit */int) (signed char)3)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) 1677442236U);
                    arr_21 [i_2] [2U] [i_6] [i_6] = ((/* implicit */long long int) var_8);
                    arr_22 [i_2] [i_6] [i_6] = 9223372036854775807LL;
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_25 = ((/* implicit */long long int) arr_2 [i_7] [i_7]);
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_11 [i_7] [i_7])));
        var_27 = ((/* implicit */long long int) (short)18858);
    }
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((var_11) * (((/* implicit */unsigned long long int) var_2)))))));
}

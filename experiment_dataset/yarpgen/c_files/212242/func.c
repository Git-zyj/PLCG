/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212242
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned char)127)), (1690471960U))) == (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])))) < (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_0 [4U]) * (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [4ULL])))))))) || ((((~(arr_2 [i_0] [i_0 - 1]))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_11 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1 - 1])), (((arr_9 [i_0] [i_0] [i_1 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
            arr_10 [i_0 - 1] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_8 [i_1]), (arr_3 [i_0 - 2] [i_0 - 2])))) >> (((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) - (23747)))))) != (arr_0 [i_0])));
        }
        for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            arr_13 [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((arr_2 [i_2 + 1] [i_2 - 1]) == (arr_2 [i_2 + 1] [i_2 - 1])))), (max((arr_2 [i_2 + 1] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2 + 1])))));
            arr_14 [i_0 + 1] [i_2] [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(min((((/* implicit */int) arr_6 [i_0 + 1])), (arr_7 [(unsigned char)1])))))), (min((((/* implicit */long long int) min((((/* implicit */int) arr_3 [9] [i_2 - 1])), (arr_7 [i_0])))), (min((arr_2 [i_0 + 1] [i_2]), (((/* implicit */long long int) arr_3 [i_0] [i_2]))))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_17 [i_3] = ((/* implicit */int) (~(arr_15 [i_3])));
        arr_18 [i_3] = (-(((/* implicit */int) arr_16 [i_3] [i_3])));
        arr_19 [i_3] = ((/* implicit */unsigned short) ((arr_15 [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
    {
        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            {
                arr_25 [i_4] [i_4] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) < (0U))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_4 - 1] [i_5])) != (((/* implicit */int) arr_22 [i_5] [i_5])))))) - ((~(arr_15 [i_4]))))));
                arr_26 [i_4] = ((/* implicit */_Bool) max((arr_24 [i_4 - 1] [(_Bool)0]), (max((max((((/* implicit */unsigned long long int) (unsigned char)0)), (18446744073709551605ULL))), (((/* implicit */unsigned long long int) (unsigned char)16))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 &= ((/* implicit */unsigned long long int) var_9);
}

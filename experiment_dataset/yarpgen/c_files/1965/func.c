/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1965
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) ^ (((((/* implicit */_Bool) (unsigned short)10382)) ? (7478245423650752945LL) : (18014398508957696LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_13 = arr_7 [i_0] [i_2];
                            var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 1])) || (((/* implicit */_Bool) arr_14 [i_1 + 3] [i_1 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_4 + 2]))));
                            var_15 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_3] [i_0] [i_1]))))) ? ((-(arr_12 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_2 [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) ((arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 3]) - (arr_10 [i_1 - 1] [i_1] [i_1 + 2])));
                arr_21 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) (+((~(arr_10 [i_0] [i_0] [i_5])))));
                var_17 = ((/* implicit */unsigned char) ((3ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42710)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) arr_16 [0LL] [i_5])))))));
                arr_22 [i_0] [i_0] [i_0] = ((18446744073709551612ULL) << (((13733644955895252872ULL) - (13733644955895252819ULL))));
            }
            arr_23 [i_0] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [(signed char)13] [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_12 [(unsigned short)5])))))) > (arr_4 [i_0] [i_1 + 1] [i_0])));
        }
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) * (((((/* implicit */_Bool) (unsigned char)194)) ? (var_1) : (var_1)))))) ? (6827000029886571261ULL) : (min((((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    var_19 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (var_10))));
    var_20 = var_1;
}

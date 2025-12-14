/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42639
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
    var_19 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) 4177920)) : (arr_6 [i_0] [i_0 + 1] [i_1 - 1]))) != (((/* implicit */long long int) -4177920))));
                    arr_7 [i_2] = ((/* implicit */unsigned int) (+(18446744073709551593ULL)));
                }
                for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    var_21 -= ((((/* implicit */_Bool) ((short) 14ULL))) ? (max((((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0] [i_0 - 2]) ^ (((/* implicit */int) arr_8 [i_0] [i_0]))))), (524160LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1022581145U) >= (((/* implicit */unsigned int) 2147483631)))))) > (arr_1 [i_3 + 3]))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_4 [i_3 - 1] [i_1 + 1] [i_0 - 2]))))));
                        var_23 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2] [i_3 + 3] [i_3 + 3])))))));
                    }
                }
                var_24 = ((/* implicit */unsigned short) (-(((arr_4 [i_0 - 1] [(short)4] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))))));
                var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 3] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_9 [i_1] [i_1 - 3] [i_0 - 1] [i_0]))))), ((+(arr_9 [i_1] [i_1 - 3] [i_0 - 1] [2LL])))));
                var_26 = ((/* implicit */short) (unsigned short)0);
                var_27 = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 2] [i_0 - 2] [3LL]));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) -4177930)) ? (-840498991) : (var_5)))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (short i_6 = 4; i_6 < 15; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((((/* implicit */int) arr_14 [i_6])) >= (-1100211091)))))), ((-((-(((/* implicit */int) (unsigned short)41327))))))));
                        arr_22 [i_6] [i_6] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20)) - (((/* implicit */int) arr_16 [i_6] [i_6 - 2]))))))))));
                        var_30 -= ((/* implicit */long long int) arr_14 [i_8 - 2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        arr_26 [i_5] [16LL] [(signed char)2] [15ULL] [i_9] [i_6] = ((/* implicit */long long int) ((int) min(((~(((/* implicit */int) (signed char)7)))), (((/* implicit */int) arr_20 [i_9] [i_6 + 1] [i_7] [i_6 - 2])))));
                        arr_27 [i_6] [i_7] [i_5] [i_6] [i_5 + 2] [i_6] = ((/* implicit */int) arr_20 [i_9] [i_7] [i_6] [i_5]);
                    }
                }
                var_31 = ((/* implicit */unsigned int) -4954116314243520947LL);
                arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_20 [i_5] [i_5 + 2] [i_5] [i_5 + 2]));
            }
        } 
    } 
    var_32 = var_9;
}

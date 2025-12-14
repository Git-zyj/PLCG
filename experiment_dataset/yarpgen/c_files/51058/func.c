/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51058
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11117))) - (arr_1 [i_0]))))))), (((unsigned short) ((long long int) (signed char)-111)))));
                arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)54394))))), (((short) (+(((/* implicit */int) (unsigned short)11117)))))));
                var_19 = ((/* implicit */long long int) var_13);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [(short)17] = ((((min((arr_2 [i_0 + 1] [i_0]), (((/* implicit */long long int) (signed char)-65)))) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-68))) ^ (arr_2 [i_0 - 2] [(short)2]))) - (8347218352996328463LL))));
                    var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_2 + 2])) ? (arr_2 [i_0 - 1] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2 - 1]))))));
                }
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_14 [i_0] [21U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_0]))))))) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                        var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_1] [i_1])), (arr_12 [i_1])))), (((unsigned long long int) var_0))));
                        arr_15 [13U] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50987)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_4] [i_1] [(unsigned short)23]))) != (arr_1 [i_0]))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_0 [i_0] [17ULL]))))))) ? (((unsigned long long int) ((signed char) (short)3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */short) max((min((arr_17 [i_0] [i_0] [i_0 + 2] [i_0] [i_3]), (arr_17 [i_0] [13LL] [i_0 + 3] [i_0] [13LL]))), ((~(arr_17 [(unsigned short)6] [i_0] [i_0 - 2] [i_0] [i_1])))));
                        var_23 = var_10;
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        arr_22 [(unsigned short)24] [i_0] [i_3] = ((/* implicit */unsigned int) var_4);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)11117)) >> (((117547275U) - (117547271U))))))) ? (max((((((/* implicit */_Bool) arr_13 [i_0] [(short)13] [i_0] [(short)13] [i_3 + 2] [16LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1]))) : (4160749568U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)31812)), ((unsigned short)48038)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [(unsigned short)3])) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-51)), (605583421U)))) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_19 [i_0] [8U] [i_0] [i_0] [i_3] [(unsigned short)19]))))))))))));
                        arr_27 [i_7] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) 5007775950548227335LL))));
                    }
                }
                for (short i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    arr_30 [i_0] [i_8] [i_8] = ((/* implicit */short) max(((~(-8964997888920612897LL))), (((/* implicit */long long int) arr_0 [i_0] [i_1]))));
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_1] [i_1] [i_8])))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249832
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
    var_11 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */int) (!(((_Bool) var_4))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_0] [8ULL] [i_2] [i_0]))));
                            var_13 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((unsigned char) var_0))))), (((((var_6) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) (signed char)-8)))) < (min((-258645906), (var_1)))))));
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) var_3);
                            arr_15 [i_3 + 1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-42)) || (((/* implicit */_Bool) (unsigned char)42)))));
                            arr_16 [i_0] [(signed char)8] [i_2 + 1] [i_0] [i_0] = ((/* implicit */signed char) 0U);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_1 - 1] [(unsigned short)6]))))) ? (((/* implicit */int) min((arr_13 [i_0] [i_0]), (arr_13 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_13 [i_1 + 1] [i_4 + 3]))))));
                    var_15 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (arr_19 [i_4 - 1]))))))) : ((+((~(arr_18 [1ULL]))))))))));
                                var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)42)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35160)) / (((/* implicit */int) (unsigned short)9))))) : (var_5));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (((/* implicit */long long int) var_7)) : (arr_11 [2] [i_6] [4] [i_1 + 1] [i_6] [i_1])))))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) var_1)) != (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)32766)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_19 [3U]))))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (var_7))), ((~(((/* implicit */int) (unsigned char)7)))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_23 [i_0] [i_1] [i_4 - 1] [i_1] [i_6])))), (arr_8 [i_5])))), (min((arr_4 [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_4] [13LL] [i_6])))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_8)))))) / (min((var_5), (((/* implicit */unsigned int) var_7))))))) ? (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (short)-19036)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)153)) || (((/* implicit */_Bool) (unsigned char)238)))))));
}

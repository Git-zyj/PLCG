/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227779
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */short) var_8)), (var_14)))) ? (var_2) : (((/* implicit */int) (signed char)-1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_10);
                                var_21 |= ((/* implicit */int) max((min((arr_4 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned int) ((arr_4 [i_1] [i_3]) != (arr_4 [i_0] [i_0])))))), (((/* implicit */unsigned int) arr_10 [i_4] [i_1] [i_1]))));
                                var_22 = ((/* implicit */int) min(((unsigned char)199), (((/* implicit */unsigned char) (signed char)-48))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) var_13);
                }
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    arr_17 [i_5] [i_1] = ((/* implicit */unsigned char) min(((~(-1049903042937181449LL))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-69)) && (((/* implicit */_Bool) -1760073307))))))))));
                    arr_18 [i_5] [i_1] [(short)4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) (signed char)-48))), (arr_12 [i_0] [i_1] [i_5] [i_1] [i_0 + 1] [i_1] [i_5])))) ? (var_13) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (var_16))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (int i_7 = 3; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_23 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)4953))));
                                arr_24 [i_0] [i_5] [i_0] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */signed char) (unsigned char)79);
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_1] [i_5 + 2]))) ? (arr_22 [i_7 - 3] [i_6] [6ULL] [i_1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) arr_6 [i_7] [i_5 + 1] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(834263138870146630LL))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)90)), (var_4)))) - ((+(arr_22 [i_0 + 1] [i_1] [10U] [i_5 + 2] [i_5 - 3] [i_8]))))))));
                        arr_29 [(signed char)15] [(signed char)9] [i_5] [(signed char)9] = ((/* implicit */unsigned long long int) min((3346270219U), (3346270215U)));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_27 |= ((/* implicit */_Bool) var_1);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_8 [i_9] [i_8] [i_5] [i_1] [i_9]))));
                            var_29 = ((/* implicit */signed char) min((arr_22 [i_5] [(short)2] [(short)2] [i_5 - 2] [i_5 - 2] [i_0]), ((-(arr_22 [i_5] [i_5] [i_8] [i_5] [i_5 + 2] [i_5])))));
                            arr_32 [i_5] [i_8] [(signed char)2] [i_9] [i_5] [i_5] = ((/* implicit */signed char) arr_22 [i_9] [i_8] [i_5] [i_1] [15] [i_0]);
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((unsigned short) (short)-1));
                        var_31 = ((/* implicit */_Bool) ((2370371426256721948ULL) / (16076372647452829678ULL)));
                        arr_35 [i_5] = ((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 + 1] [(unsigned char)10] [i_10] [i_5]);
                    }
                }
                var_32 = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
}

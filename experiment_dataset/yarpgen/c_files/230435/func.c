/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230435
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
    var_11 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((max((1073741823LL), ((~(arr_6 [i_0] [i_1] [i_2] [i_3]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                                var_13 ^= (+((+(arr_6 [i_1] [12] [i_1] [i_1 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_5] [i_6] [13ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_14 -= max((((var_10) | (arr_2 [18LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 4] [i_2 + 4] [i_2 - 1])) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 4] [i_1 + 1] [(unsigned char)0]))))));
                                arr_17 [i_1] [(_Bool)1] [i_1] [i_1] [(_Bool)1] = var_5;
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) * ((-(var_10)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_21 [i_0] [i_2] [i_1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2));
                        /* LoopSeq 3 */
                        for (int i_8 = 3; i_8 < 19; i_8 += 2) 
                        {
                            arr_26 [i_0] [18LL] [i_2] [i_1] [18LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_3))));
                            var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_7] [i_0 + 1] [i_0]))) > (var_2)));
                            arr_27 [i_1] [i_7] [i_2] [i_2] [2ULL] [i_1] = ((/* implicit */unsigned char) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11)))));
                            var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_1 - 1]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [(unsigned short)18] [i_1 + 4])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [12ULL] [i_7]))) - (arr_6 [i_0 - 1] [i_7] [i_2 + 3] [i_7])));
                            var_19 = ((/* implicit */int) ((arr_29 [i_1] [i_0] [i_0]) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_7] [i_9]))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_1] [i_1])) << (((((/* implicit */int) var_1)) - (233))))))));
                            arr_31 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                            arr_32 [i_1] [i_1] [i_2] [i_7] [i_9] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-11))))) || (((/* implicit */_Bool) var_4)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)));
                            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_4)))));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_23 += (!(((/* implicit */_Bool) (((!(var_8))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [16ULL] [i_1 + 3] [(unsigned char)2])))) : (((/* implicit */int) arr_4 [i_2 - 1] [(_Bool)1] [(_Bool)1] [i_0 - 2]))))));
                        arr_38 [i_1] [i_1] = ((/* implicit */unsigned char) min((max((max((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_0]), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) var_8)), (min((17047014012303727342ULL), (var_2)))))));
                    }
                }
            } 
        } 
    } 
}

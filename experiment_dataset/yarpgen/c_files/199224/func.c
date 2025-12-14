/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199224
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) arr_6 [i_2]);
                        var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_5)), (min((((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_4) - (9521617896619593365ULL))))), (((/* implicit */int) var_1))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 797415493)) ? (((((((/* implicit */_Bool) arr_11 [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12259))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1498472699)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53276)))))));
                        arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_2] [i_0]))))) : (((/* implicit */unsigned long long int) ((unsigned int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_2] [(short)9] [i_4]))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_13))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_20 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) 793925072U);
                            var_22 ^= -497357221;
                            var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_9))))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_1] [(unsigned short)6] [i_7] [i_0] = ((/* implicit */signed char) ((int) arr_3 [i_0] [i_0]));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0]))));
                        }
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_8 - 1])), (((unsigned long long int) ((((((/* implicit */int) (signed char)-63)) + (2147483647))) >> (((((/* implicit */int) arr_2 [(_Bool)0] [i_2] [i_8])) - (25139))))))));
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_8 - 2]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39594)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0] [i_2] [i_8 + 1]))))));
                        arr_27 [i_0] [i_1] [i_1] [i_1] [(short)4] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 8; i_9 += 2) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(arr_7 [i_0] [(_Bool)1] [i_0])))) ? ((+(((/* implicit */int) var_0)))) : (-467090735))), (((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_0))), (((/* implicit */unsigned char) arr_0 [(unsigned short)2] [(unsigned short)2])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) arr_17 [i_9] [i_9 + 1] [i_9 + 2] [i_9] [i_9 - 1]);
                            arr_34 [i_1] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */_Bool) var_0);
                        }
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned int) (!(arr_28 [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) var_11);
    var_29 = ((unsigned long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)2846))))), (14889306968068932300ULL)));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_8)));
}

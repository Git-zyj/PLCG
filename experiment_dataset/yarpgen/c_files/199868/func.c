/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199868
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)255)));
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)120))))))) ^ (((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)255)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_5 [12ULL] [12ULL] = ((/* implicit */int) arr_1 [i_1 + 1]);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_1] [i_2])))))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_1] [(unsigned char)18] [i_3] |= arr_7 [i_3];
                arr_13 [i_2] [i_2] [i_1 - 1] [i_2] = (-(var_5));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((arr_0 [i_3] [i_4]) || (((/* implicit */_Bool) arr_7 [i_4 - 2])))))))));
                    arr_16 [i_1] [i_2] [12U] [i_4 + 2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 + 1]))));
                    arr_17 [i_1 + 1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((arr_3 [16ULL]) ? (((arr_6 [i_2]) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1])))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4]))) ^ (arr_11 [i_4 + 2] [i_4 + 1] [i_3] [i_1 - 1]))))));
                }
                for (unsigned char i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    var_24 = ((((/* implicit */_Bool) (-(arr_9 [16ULL] [i_2] [i_2] [i_2])))) ? ((-(var_1))) : ((-(((/* implicit */int) (unsigned char)60)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_23 [i_2] [i_3] [i_2] = var_1;
                        arr_24 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_2])))) || (arr_3 [i_1])));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_6])))))));
                        var_26 = ((/* implicit */unsigned short) (~(arr_4 [i_5 + 2])));
                    }
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        arr_28 [i_1] [i_2] [17] [i_5] [i_2] = ((/* implicit */unsigned char) arr_21 [i_1] [18U] [i_3] [i_5] [i_7 - 1]);
                        arr_29 [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) arr_26 [i_7] [i_5] [(unsigned char)2] [i_2] [i_1]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        arr_32 [i_8] [i_2] [i_8 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2])) <= (((/* implicit */int) arr_14 [i_1 - 1] [i_8 - 1] [i_8] [i_8]))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [0ULL] [i_2] [i_5 + 1] [i_8 + 1])))))));
                        arr_33 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 + 1])))))));
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (arr_9 [i_2] [12U] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_5] [i_8]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65525))))))));
                    }
                }
                arr_34 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1 - 1] [i_2])) || (((((/* implicit */unsigned long long int) arr_10 [i_2])) == (arr_21 [i_2] [i_2] [i_1] [i_1 - 1] [i_1])))));
            }
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
            {
                arr_39 [i_1] [i_1] [i_2] [i_1 - 1] = ((/* implicit */int) var_3);
                arr_40 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_9 + 4] [i_1 + 1] [i_1 - 1]))));
                arr_41 [i_1] [5U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_9] [i_9 - 1] [i_2] [i_1 + 1] [i_1])) ? (arr_25 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1])))))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_1 - 1] [i_2] [i_10] [18U] [i_10])))));
                            var_30 = ((/* implicit */int) (-(arr_9 [i_12] [i_10] [i_10 - 1] [i_10])));
                            var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(signed char)1] [i_11] [i_2] [(signed char)1])) ? (arr_21 [i_10] [i_2] [i_12] [i_11] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (arr_10 [i_12])));
                        }
                    } 
                } 
            } 
        }
    }
}

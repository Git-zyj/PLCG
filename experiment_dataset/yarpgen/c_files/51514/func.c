/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51514
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)148)) || (((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)133)) - (((/* implicit */int) var_3)))), ((+(((/* implicit */int) (short)1023)))))))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_2 [i_0])) & (arr_10 [i_0] [i_0 + 2] [i_0] [i_0] [i_3] [(signed char)10])));
                            var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [(unsigned short)8] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) > (4294967232U))))) : (((arr_10 [i_0 - 1] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_0 - 1]) - (((/* implicit */long long int) arr_7 [i_0 + 4] [i_1] [i_1] [i_1 + 1] [i_1]))))));
                            arr_12 [i_0] [i_0] [i_3] [i_3] [(signed char)8] |= ((/* implicit */signed char) max((((/* implicit */int) (((-(arr_10 [i_0 + 2] [i_1] [i_2] [16LL] [i_4] [i_4]))) != (((/* implicit */long long int) arr_2 [i_4]))))), (min((((/* implicit */int) ((unsigned char) (signed char)7))), ((+(arr_11 [i_0] [i_0] [(unsigned short)8] [i_4] [(short)16])))))));
                        }
                        var_19 += ((/* implicit */unsigned long long int) ((arr_7 [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_0 + 1] [i_2]) > (((/* implicit */unsigned int) (~(arr_9 [i_3] [i_3] [(unsigned char)8] [i_3] [i_3]))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_20 ^= ((/* implicit */short) (unsigned char)114);
                            var_21 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_5]))));
                            arr_20 [i_0] [16U] [i_2] [i_0] [i_6] [i_5] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1 - 1]);
                        }
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_4 [i_0 + 3] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_23 = ((((min((((/* implicit */int) (short)-1024)), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_0] [(short)5])) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])))))) + (2147483647))) >> (((((unsigned int) 64U)) - (62U))));
                        var_24 = ((/* implicit */unsigned short) (unsigned char)137);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1]))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((39U), (((/* implicit */unsigned int) ((arr_13 [i_1 + 3]) / (((/* implicit */int) arr_6 [i_7] [i_7] [i_1 + 4] [i_7] [i_7]))))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [15U] [i_0 + 2]);
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_30 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_0])) + (((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_1 + 3])))));
                            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)117)))));
                        }
                        var_28 = ((/* implicit */short) ((-1) - (((/* implicit */int) (_Bool)1))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [13LL] [i_2] [i_2] [i_1 + 2] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)108)) << (((-788596523) + (788596534))))))))), (min((((arr_19 [i_0] [i_1] [i_1 + 1] [16] [i_2]) + (((/* implicit */unsigned int) arr_2 [(short)8])))), (arr_21 [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 2]))))))));
                    var_30 = ((/* implicit */int) arr_26 [8ULL] [8ULL] [i_2] [8ULL] [8ULL]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_4))));
    var_32 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)144))));
}

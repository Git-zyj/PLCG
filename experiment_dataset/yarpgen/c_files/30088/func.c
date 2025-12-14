/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30088
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
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = (-((+(min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_6))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = var_9;
            var_15 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 + 1])) < (((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) var_2)), ((unsigned char)22)))))));
            var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (arr_0 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        }
    }
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((var_6) / (((/* implicit */unsigned long long int) var_11)))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2)) ? (((/* implicit */unsigned long long int) 0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 + 2]))) & (max((((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])), (0ULL)))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_6 [4LL] [4LL]))));
                var_20 = ((/* implicit */signed char) arr_11 [i_2] [i_2]);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_2 + 2])), (arr_7 [i_2 + 2])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_4 - 2] [i_4]) : (arr_11 [i_4 - 2] [i_4]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 2]))) * (arr_11 [i_2 + 2] [i_4]))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_3 [i_4 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_3])) || (((/* implicit */_Bool) arr_6 [i_4] [i_3]))))))))));
                    arr_16 [i_2 - 1] [i_2] = ((/* implicit */_Bool) (~(((arr_9 [i_2]) | (((var_8) ^ (((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_4]))))))));
                    var_23 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_2])) ? (((4294967295U) ^ (((/* implicit */unsigned int) 1073741823)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_2])), (arr_6 [i_4] [i_3]))))))), ((~(4294967295U)))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_20 [i_2] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) ((short) arr_7 [i_2 + 2]))), ((+(((/* implicit */int) arr_6 [i_2] [i_3]))))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3 + 4] [i_3] [i_2])) * (((/* implicit */int) arr_4 [i_3 + 3] [i_3] [i_2]))))) || ((!(((/* implicit */_Bool) max((arr_12 [i_2] [i_3] [i_5]), (var_5))))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_3]);
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3 - 1] [i_7])) ? (arr_12 [i_2] [i_3 - 1] [i_3]) : (arr_12 [i_3] [i_3 - 1] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) arr_13 [i_2] [i_3 - 1] [i_6]))))) : (((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_3 - 1] [i_6])) ? (((/* implicit */int) arr_13 [i_6] [i_3 - 1] [i_6])) : (((/* implicit */int) arr_15 [i_2] [i_3 - 1])))));
                        var_27 = ((/* implicit */long long int) arr_1 [i_3 + 2] [i_2 - 1]);
                    }
                    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) 4294967267U);
                        var_29 = ((/* implicit */unsigned short) min(((-(min((((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2])), (28U))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)113)))), (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_3))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_31 [i_2] [i_3] [i_6] [i_9])) <= (((/* implicit */int) arr_10 [i_2 + 2])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)16383))));
                        var_32 = ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_9 [i_2]));
                    }
                    var_33 = ((/* implicit */short) 8U);
                }
            }
        } 
    } 
}

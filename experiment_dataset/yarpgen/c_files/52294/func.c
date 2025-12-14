/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52294
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
    var_14 = ((/* implicit */int) max((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))))), (min((((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (7316926169287649230LL))), (((/* implicit */long long int) min((var_9), (var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) (signed char)-98);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_15 = ((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((var_10) >> (((((/* implicit */int) arr_4 [i_0] [i_0])) + (70)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [(short)1] [i_2] = var_1;
                        arr_13 [(unsigned char)9] [i_3 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2]) <= (arr_5 [8])))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 4324354804232600352LL)))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_0))));
                        var_17 = ((var_0) ? (((arr_5 [i_2]) << (((/* implicit */int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_11))))));
                        var_18 = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0]));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (arr_3 [i_1])))) ? (((var_13) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [1ULL] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) 615562196)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19395))) : (arr_16 [i_2] [i_2] [(signed char)6] [i_4] [i_0] [i_0] [i_2])))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_9) ? (((/* implicit */unsigned long long int) -119294987)) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_6])) | (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_17 [i_6]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [5] [i_1])) ? (arr_25 [i_0] [i_0] [i_6] [i_0] [i_8]) : (var_5))))) : (((((/* implicit */_Bool) ((long long int) arr_24 [i_7] [i_7] [i_6] [i_6] [i_7]))) ? (min((var_5), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) -2147483632))))));
                                var_22 |= ((/* implicit */int) min((min((16015369473204505332ULL), (((/* implicit */unsigned long long int) (signed char)0)))), (((/* implicit */unsigned long long int) (signed char)15))));
                                arr_26 [i_6] [i_1] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((min((((unsigned int) (signed char)2)), (((/* implicit */unsigned int) ((signed char) 0U))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [3U])) ? ((+(((/* implicit */int) arr_21 [(unsigned char)5] [i_1] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8] [10U] [10U]))))))))));
                                var_23 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (signed char)94);
    var_25 -= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (1125625028935680ULL)))));
    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned short)29640)) : (((/* implicit */int) (signed char)10))));
}

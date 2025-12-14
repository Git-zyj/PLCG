/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194589
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] [17LL] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)93))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [(unsigned char)2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), ((short)-15952))))));
            var_19 = ((/* implicit */unsigned char) var_4);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24755)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) min(((unsigned short)31163), ((unsigned short)34372))))));
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_5 [i_0] [15U] [i_0]) != (((/* implicit */int) arr_1 [i_1])))) ? (((/* implicit */int) arr_4 [(signed char)21] [(signed char)21] [14U])) : ((~(((/* implicit */int) arr_1 [i_1])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                arr_11 [i_2] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_5 [i_2] [i_2 + 4] [(unsigned char)19])))) ? (((/* implicit */unsigned long long int) min((((var_13) / (((/* implicit */int) var_10)))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_10 [i_1])))))))) : ((~(((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])) * (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_0])), (18446744073709551598ULL))))) ? (arr_2 [i_0]) : ((~(((((/* implicit */int) (unsigned short)450)) / (((/* implicit */int) arr_1 [i_1]))))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (~(max((arr_0 [i_3 - 1]), (min((((/* implicit */unsigned long long int) (unsigned short)57379)), (var_0)))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 3] [i_2] [i_2 - 1])) + (25435))) - (22))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))), (((unsigned int) var_4)))))));
                        }
                    } 
                } 
            }
        }
        var_24 = (+(arr_2 [i_0]));
        arr_18 [i_0] = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)10])) : (2147483647)))), (((/* implicit */unsigned int) max((arr_16 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(signed char)8])) || (((/* implicit */_Bool) var_18))))))))));
    }
    for (long long int i_5 = 3; i_5 < 22; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_19 [i_5 + 1]))))));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_5])), ((+(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) arr_19 [i_5 - 2])) ? (((((/* implicit */int) (signed char)-103)) / (((/* implicit */int) var_15)))) : ((-(((/* implicit */int) arr_19 [i_5])))))) : ((+(((int) arr_19 [i_5 - 1]))))));
    }
    var_27 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27986
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [8])) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [(unsigned short)4]), (arr_0 [i_0]))))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(unsigned char)6])))))));
        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */int) (signed char)109)) == (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ^ (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))))), (min((((/* implicit */long long int) min((1073741824), (((/* implicit */int) arr_0 [i_0]))))), (max((var_7), (((/* implicit */long long int) arr_0 [i_0]))))))));
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_5 [(signed char)4] = min((arr_0 [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_3 [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1]))))), ((-(((/* implicit */int) arr_1 [i_1] [i_1]))))));
            var_17 = ((/* implicit */unsigned short) (short)-1);
            arr_9 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_2])) | (((/* implicit */int) arr_1 [(unsigned char)5] [i_2])))))));
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [(unsigned short)13] [i_1]), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_2] [i_1])), (arr_6 [i_2] [i_1] [i_1])))) ? (max((var_7), (((/* implicit */long long int) arr_0 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))) : ((+(((arr_6 [(signed char)3] [i_2] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2])))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_18 *= ((/* implicit */_Bool) arr_7 [i_1] [1]);
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 &= arr_6 [i_1] [i_3] [i_4];
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]))));
                            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) var_7));
                            arr_25 [i_1] [i_4] [i_4] [11U] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_16 [i_6 + 1] [i_6 - 1] [i_4 - 1])) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_3]))));
                        }
                    }
                } 
            } 
            arr_26 [i_1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3] [i_1])), (arr_6 [i_3] [i_3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_12 [i_3]))))), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((unsigned int) arr_19 [i_1] [i_1] [i_1])) : ((+(arr_4 [i_1] [i_1])))))));
        }
    }
    var_20 = ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */unsigned int) (_Bool)1);
}

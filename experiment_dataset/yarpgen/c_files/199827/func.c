/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199827
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
    var_15 = ((/* implicit */short) (-(((/* implicit */int) min((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned char)102)))), ((!(((/* implicit */_Bool) 4485959365044014503LL)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) + (((/* implicit */int) var_6))));
                    arr_9 [i_2] [i_1 - 4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)-12806))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */long long int) arr_3 [i_2 + 1])) : (arr_7 [i_1 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) (short)31694)))));
                    var_17 = ((/* implicit */unsigned char) 16492674416640LL);
                    arr_10 [i_2 - 1] [i_1 + 1] [i_0 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((954424929) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((((/* implicit */_Bool) 954424912)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) >> (((((((/* implicit */_Bool) -954424912)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_8 [i_1 + 2] [i_0]))) - (23184ULL)))))));
                    var_18 += ((/* implicit */long long int) ((954424929) * ((((((_Bool)1) ? (-954424925) : (((/* implicit */int) arr_1 [i_0])))) / ((+(-954424920)))))));
                }
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_19 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((arr_3 [i_3]) & (-954424919)))) ? (((/* implicit */int) min((var_8), (arr_13 [i_1] [i_1])))) : (min((((/* implicit */int) (unsigned short)38430)), (var_1)))))));
                    var_20 += ((/* implicit */long long int) ((((/* implicit */int) ((14037997033277647601ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((3155793732505083316ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))) * ((+(((/* implicit */int) (short)21486))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -954424930)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (arr_4 [i_0] [(short)1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1]) == (954424925))))) : (max((13335186454440459012ULL), (((/* implicit */unsigned long long int) arr_6 [i_3] [12ULL])))))) == (((/* implicit */unsigned long long int) arr_7 [i_3])))))));
                    arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_1 - 1] [i_0 - 1]))))) / (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 4])) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 2] [(short)8]))))));
                }
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_12 [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned short) arr_0 [i_1 - 4] [i_0 + 1]))))) * (((((/* implicit */_Bool) -1556969094)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)32))))));
                arr_15 [(short)13] [(short)13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (max((max((((/* implicit */long long int) var_4)), (var_9))), (((/* implicit */long long int) ((((/* implicit */int) (short)13357)) < (-954424914))))))));
            }
        } 
    } 
}

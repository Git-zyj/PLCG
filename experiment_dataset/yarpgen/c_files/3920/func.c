/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3920
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
    var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) (((-(var_14))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1LL)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-94)))))))))))));
                        arr_12 [i_0] [i_1 + 2] [i_2] [(unsigned char)5] = ((/* implicit */unsigned int) (~(min((max((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((long long int) (signed char)-82)))))));
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-81))))))) ? (((/* implicit */int) max(((signed char)75), ((signed char)-84)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)82)), (max((((/* implicit */unsigned short) arr_2 [i_2] [i_3 + 2])), (arr_5 [i_0] [i_2]))))))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_3] [i_2] [(_Bool)1] [i_0])), (arr_1 [i_2 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [7ULL]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) arr_9 [(unsigned char)14] [i_1] [i_2] [(unsigned char)6])))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) && (((arr_6 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1]))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_4] = (+(((/* implicit */int) (signed char)77)));
                        var_19 = ((/* implicit */long long int) (~(arr_0 [i_2 + 1])));
                        arr_18 [i_0] [11ULL] [i_1] [i_2 - 1] [i_2 + 3] [i_4] = ((unsigned int) arr_1 [i_2 + 3]);
                    }
                    arr_19 [i_0] [i_1] [(unsigned char)5] [(short)12] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_0])) + (((/* implicit */int) arr_14 [12U] [i_1 - 1] [i_1] [i_0]))))), (((arr_1 [9ULL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_0] [i_0]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2 + 1])))));
                    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])))));
                    var_21 = ((/* implicit */unsigned int) ((-1LL) - (((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_1 + 2] [i_1] [i_1] [i_2 + 1])), (((((/* implicit */int) arr_16 [i_0] [(short)5] [i_1 + 2] [(short)5] [i_2] [5U])) | (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)3])))))))));
                    arr_20 [i_0] [i_1 + 2] [i_2 + 2] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)90)) == (((/* implicit */int) (short)30680)))), (((((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_2 + 1])) == (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_22 = max(((~(var_4))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)90)), (var_8)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14))))));
}

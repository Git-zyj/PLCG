/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42605
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2])))) && (var_11)));
        var_14 = ((/* implicit */short) ((((/* implicit */int) max((var_7), (((/* implicit */short) var_6))))) >= ((+(((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2))))) ? (0U) : (((((/* implicit */_Bool) (short)-9786)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12721))) : (1163400580U)))))) ? ((+(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1])))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_13)), (var_0))))))))));
                                arr_15 [i_0] [i_4] [i_2] = max((max((var_0), (((/* implicit */unsigned short) arr_10 [i_2] [i_1] [i_4] [i_3] [i_0 + 1] [i_2])))), (((/* implicit */unsigned short) max((arr_10 [i_0] [i_1] [i_2] [i_3] [i_0 + 2] [i_0]), (((/* implicit */short) var_10))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)-13073);
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_11))))) : ((-(((unsigned long long int) var_3))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((short) arr_10 [i_1] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0]))) ^ ((~(((/* implicit */int) max((var_5), (var_5)))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_7 [i_0 + 2])))), (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (arr_8 [i_0] [i_0] [i_0] [i_0])))) - ((+(5084569113928475071ULL)))))));
        arr_19 [i_0] = max((((((/* implicit */unsigned long long int) arr_7 [i_0])) / (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])));
    }
    var_19 = ((/* implicit */signed char) var_1);
    var_20 = ((/* implicit */unsigned char) 5084569113928475086ULL);
    var_21 = ((/* implicit */unsigned short) var_10);
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) & (max((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_8))))))));
}

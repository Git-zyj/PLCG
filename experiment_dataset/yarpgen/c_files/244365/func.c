/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244365
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
    var_19 = ((/* implicit */_Bool) (-(var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max(((unsigned short)65535), (((/* implicit */unsigned short) ((_Bool) var_4))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [5ULL] [i_1] [(short)4] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2] [i_2])) ? (-1077119207396752077LL) : (2LL)))), (arr_5 [i_2] [i_0 - 2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [(short)5] [(short)0] [i_0] [i_1]);
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_0])) ? (-1077119207396752082LL) : (1202413005944781727LL))), (((/* implicit */long long int) (unsigned short)1462)))), (((/* implicit */long long int) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_0])))))));
                                arr_17 [(_Bool)1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)20046)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) (-(((long long int) ((1077119207396752056LL) >> (((-1077119207396752077LL) + (1077119207396752106LL))))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-((-(var_9))))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [0ULL] [0ULL] [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(signed char)10] [i_0 + 1] [i_0 - 1])) >> (((((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 1] [i_0] [10ULL] [(signed char)14] [i_0 - 2])) - (60060)))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 3] [i_0 + 2] [i_0 - 3] [(short)8] [(unsigned short)4] [i_0 - 1]))) : (4632176597782508965ULL)))));
    }
}

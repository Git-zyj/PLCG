/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47845
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2] [7U]))));
                    arr_10 [i_2] [i_2] [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [(unsigned short)13]))))))));
                }
                for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) arr_1 [1LL] [1LL]);
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_3 + 1]);
                    arr_14 [i_0] [6ULL] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) arr_7 [i_0] [i_3 + 1] [i_3 - 2] [8LL])));
                }
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_22 [i_1] [(_Bool)0] = ((/* implicit */unsigned short) arr_1 [10ULL] [10ULL]);
                            arr_23 [i_4] [i_1] [12U] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_15 [i_5 + 3] [i_5] [i_5 + 1] [i_5 + 1])), (1957319352U))), (((/* implicit */unsigned int) ((_Bool) (~(arr_11 [i_4] [i_4] [i_4] [i_4])))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) 1957319346U)))))) & (((/* implicit */int) ((unsigned char) arr_16 [i_0])))));
                            arr_24 [i_4] [i_1] [i_4] [i_4] [i_0] [15LL] = ((/* implicit */unsigned short) var_11);
                            arr_25 [(short)11] [(short)11] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((long long int) ((_Bool) arr_11 [i_0] [i_5] [i_5 - 1] [(unsigned char)12])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_1] [10] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1484677171819663646LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (723527885U))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_18 [i_8] [i_7] [i_1] [i_0])), ((~(1957319344U)))));
                            }
                        } 
                    } 
                } 
                arr_33 [i_1] [i_1] [i_0] = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_11))), (var_10))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * ((~(((/* implicit */int) ((_Bool) 2337647943U)))))));
}

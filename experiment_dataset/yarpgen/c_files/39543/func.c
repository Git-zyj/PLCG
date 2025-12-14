/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39543
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 2] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned char) var_14);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
                            }
                            for (short i_5 = 1; i_5 < 16; i_5 += 4) 
                            {
                                var_17 |= ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])), (((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) arr_0 [i_3]))))));
                                arr_18 [i_3] [i_1] [i_2] [i_0] [(short)5] = (signed char)121;
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))) - (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)-121))))))))) ? (((/* implicit */int) min((max(((unsigned char)255), (var_6))), (max(((unsigned char)57), (var_1)))))) : ((+(((/* implicit */int) ((unsigned char) (unsigned short)58757))))))))));
                                arr_19 [i_0] = ((unsigned short) min((arr_12 [i_1 + 2] [i_0] [i_1 + 2]), (arr_12 [15LL] [i_0] [i_1])));
                                arr_20 [i_5] [i_0] [14LL] [14LL] [i_0] [i_0] = ((long long int) (~(((/* implicit */int) arr_3 [i_0 - 3] [i_3 - 1]))));
                            }
                            var_19 = ((/* implicit */_Bool) (short)-22);
                            arr_21 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (unsigned char)51);
                            arr_22 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)32771)) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_20 -= arr_10 [i_0 + 1] [i_0] [i_0 - 3] [8LL] [i_0];
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_1]))));
            }
        } 
    } 
    var_22 = var_13;
}

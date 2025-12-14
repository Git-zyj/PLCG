/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4101
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
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 |= ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) var_18);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((arr_0 [(_Bool)1] [i_3]) ? ((+(((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))) : ((-(((/* implicit */int) ((_Bool) (signed char)-123))))))))));
                            arr_10 [i_1] [(signed char)7] [(short)3] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_7 [i_0] [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_1] [(unsigned short)14] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                            var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)16017)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) ((unsigned short) 0U)))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_8 [(signed char)11] [0] [i_4] [i_5]))));
                            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)4)))));
                            arr_21 [i_4] [i_1] [i_4] [i_1] [i_5] = ((/* implicit */short) ((((arr_13 [i_4 - 1] [i_4 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1]))))) < ((-(min((arr_4 [i_4] [i_4]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [9] [(_Bool)1]))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(arr_3 [(short)7] [(short)3] [(unsigned short)17]))))));
            }
        } 
    } 
    var_27 = (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)4)))))));
}

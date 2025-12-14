/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40113
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8841937360547967906ULL)) ? (((/* implicit */int) (unsigned short)16858)) : (((/* implicit */int) (unsigned short)16858))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) (unsigned short)57835);
                                var_18 ^= ((/* implicit */short) arr_13 [i_0] [i_2] [i_2] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_8 [i_1] [(unsigned char)3] [(unsigned short)16])) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) var_14)))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_2])) ? (arr_3 [i_1] [i_2] [i_4 - 1]) : (arr_3 [i_0] [i_2] [i_4])))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_4 + 1])))) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [19])))))));
                                var_21 = ((/* implicit */short) max((arr_9 [i_3] [i_2] [(unsigned char)6]), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (~(arr_7 [i_2]))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_1]))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_2))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned short)57833)) : (-1603673605)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192123
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_16);
                                var_19 = ((/* implicit */_Bool) arr_2 [i_2]);
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_3])))) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                                var_20 &= ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-18198))))), (arr_2 [i_0])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6385)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (short)-7979))));
                arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_10 [(signed char)1] [(short)1] [(unsigned short)12] [i_0]))) ? (((/* implicit */int) max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_1))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [9LL] [i_1]))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (var_3)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) var_2)))) ^ ((+(((/* implicit */int) var_18))))));
    var_24 = ((/* implicit */short) max(((((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_2), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) var_6))))))))));
}

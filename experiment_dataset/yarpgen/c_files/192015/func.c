/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192015
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_1))) / (((/* implicit */int) (signed char)76))))) + (((var_2) / (((/* implicit */long long int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)66))))) : (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12298))) : (arr_8 [i_3] [i_3] [i_3])))));
                            var_16 = ((/* implicit */unsigned int) (((+(arr_10 [i_0] [i_1] [i_0] [i_1]))) + (((/* implicit */unsigned long long int) ((arr_2 [i_2] [i_3]) / (arr_2 [i_1] [i_0]))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (!(((var_7) || ((!((_Bool)0)))))));
                                arr_14 [i_0] = ((/* implicit */signed char) (short)11392);
                                arr_15 [12U] [12U] [(short)9] [i_3] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (signed char)83))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_5 [(unsigned char)15] [i_0])), (((((/* implicit */_Bool) -1556768043)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_3)) - (48114)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_1] [i_3] [i_5])))))) && (((/* implicit */_Bool) var_0))));
                                var_17 = ((/* implicit */short) var_9);
                                var_18 = ((/* implicit */short) ((7280676461511987158ULL) > (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))))));
                            }
                            var_19 = ((/* implicit */signed char) ((_Bool) (-(((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]))))))));
                            var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_4)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (min((arr_10 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)32767)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_11);
}

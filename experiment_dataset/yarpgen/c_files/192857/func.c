/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192857
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_2 [i_0] [i_1] [4LL]))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0 - 2]), (arr_5 [i_0 + 1])))) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -66198951)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */long long int) (unsigned char)252)), ((+(arr_6 [i_0] [i_0] [i_0 - 2]))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((unsigned long long int) arr_14 [(short)3] [i_0] [(short)4] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((unsigned int) arr_8 [i_0] [i_0] [(_Bool)1])) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)154)), (arr_0 [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_9);
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-19568)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25239))))))))))));
}

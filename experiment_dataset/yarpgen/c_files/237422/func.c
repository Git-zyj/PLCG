/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237422
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((short) var_3))), ((-(var_4)))));
    var_15 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */signed char) ((((long long int) var_9)) > (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)47413))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */long long int) max((((unsigned int) var_8)), (((/* implicit */unsigned int) min((arr_2 [i_4] [(unsigned char)1] [(unsigned char)1]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)19] [(unsigned char)16] = ((/* implicit */short) (~((-(((/* implicit */int) arr_6 [i_0] [(short)6] [i_2] [i_4]))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [18U]))) : (var_4)))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_2] [i_2]) : (arr_0 [(unsigned short)1] [i_3]))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))) < (((var_10) / (arr_0 [(unsigned char)5] [18ULL])))))) ^ ((-(((/* implicit */int) (unsigned short)47413))))));
                                var_19 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) -899735241)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) min((max((var_11), (((/* implicit */long long int) arr_6 [i_1] [i_1] [0ULL] [4LL])))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}

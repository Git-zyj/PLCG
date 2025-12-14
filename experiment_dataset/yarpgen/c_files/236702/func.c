/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236702
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_4)))))))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) 15U)))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) (short)30082)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]);
                                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((var_1) * (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (arr_8 [i_3 - 1] [i_3] [i_0] [i_3 - 1] [i_3 + 4] [i_3 - 1])))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+((((_Bool)1) ? (arr_4 [i_2] [i_2 + 1] [i_3 + 3]) : (arr_4 [4U] [i_2 + 1] [i_3 + 3]))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [(_Bool)1] [i_3] [i_2 + 2] [i_3 + 4])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_3] [i_2 - 2] [i_3 - 1])) : (arr_6 [i_2 + 3] [i_0] [i_3 + 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) var_6))) >= (((/* implicit */int) (unsigned char)20))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6))));
    var_16 = (unsigned char)27;
}

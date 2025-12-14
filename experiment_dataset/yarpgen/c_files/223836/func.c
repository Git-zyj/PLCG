/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223836
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)12469)) - (12468)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_7)))))))) - ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_2 + 3] [i_2] [i_4] [i_0]))) / (var_13)))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((_Bool) var_4))))), (((/* implicit */int) (short)-2))));
                    var_17 = (!(((/* implicit */_Bool) (unsigned short)53079)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)12469), (((/* implicit */unsigned short) (short)-2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned short)55117))) || ((!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_10))));
    var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)43687)), (127ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_2)), (1933533435929681419ULL))))))));
}

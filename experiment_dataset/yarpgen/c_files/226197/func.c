/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226197
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)165)) == (((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_0 - 2] [i_1] [i_2])), (arr_5 [i_0 + 1])))) : ((+(((/* implicit */int) arr_5 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(unsigned short)22] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)13274), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_0 + 1]))) : (min((((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-8009338196212214559LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((short)2083), ((short)-2094)));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)65504), (((/* implicit */unsigned short) arr_13 [(unsigned short)23] [i_1] [i_1] [i_1]))))) == (((/* implicit */int) ((unsigned char) 3840349865U)))))), (arr_6 [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((min((((/* implicit */int) (short)-2078)), (1060901790))), (((((/* implicit */int) (unsigned char)69)) >> ((((((_Bool)1) ? (((/* implicit */int) arr_1 [8U] [i_1])) : (((/* implicit */int) (short)-2094)))) - (8885))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))) ^ ((+(arr_11 [i_0] [i_0]))))) + ((+(max((((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_1] [i_2])), (var_13)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-((-(((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))))));
}

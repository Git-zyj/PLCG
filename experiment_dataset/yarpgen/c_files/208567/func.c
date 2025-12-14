/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208567
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
    var_20 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_11)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) min((13416005594303091833ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_12)) : (-4614659718462486440LL))))))) ? (((-2063509491) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */short) arr_1 [i_0])), (arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0])))) / (((((/* implicit */_Bool) (short)-31804)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1))))))));
        var_21 = ((/* implicit */signed char) (~(max((-4614659718462486440LL), (((/* implicit */long long int) ((short) var_3)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_19))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) 16383);
        var_23 = ((/* implicit */int) ((long long int) (~(-2670309629785563838LL))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_16 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) -2063509491)) < (-649638031238205463LL)))), ((unsigned short)22835))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (((((/* implicit */_Bool) 684382388)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29014))) : (4614659718462486445LL)))))));
                        var_25 = ((/* implicit */_Bool) ((unsigned int) (-(max((((/* implicit */unsigned long long int) var_16)), (13416005594303091833ULL))))));
                        arr_21 [13LL] [i_4] [i_2] [i_2] [i_2] [13LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((1164652433), (((/* implicit */int) arr_2 [i_4]))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)152))))), ((-(var_0)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_26 += ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_1] [0LL]), (((/* implicit */unsigned int) ((_Bool) -209940863))))))));
                        var_27 = (!(((/* implicit */_Bool) var_18)));
                        var_28 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_3]))) | (-4LL)))) + (((((var_0) == (var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((var_19) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_1))))));
                    }
                }
            } 
        } 
    }
}

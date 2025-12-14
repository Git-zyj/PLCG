/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43944
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) 817354534)) : (var_10))), (((/* implicit */unsigned int) var_2))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-8192)), (var_3)))) ? (-7851427712548860168LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_2] [i_1 + 1] [i_2])), ((unsigned short)1))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (_Bool)1);
                        var_22 = arr_2 [i_0] [i_2];
                        var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1964512196)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (-817354535))) : (((/* implicit */int) ((unsigned short) (unsigned char)8)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_9 [i_4] [i_2] [i_1 - 1] [i_0]);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 1] [i_1 - 1]))))) ^ ((+(14100622830438806706ULL)))));
                        var_26 = ((/* implicit */unsigned char) var_12);
                    }
                    var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((((arr_9 [i_0] [i_0] [i_1] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) * (min((var_13), (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */int) (_Bool)1)) : (((int) (short)8193))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_5);
    var_29 = ((/* implicit */long long int) var_0);
}

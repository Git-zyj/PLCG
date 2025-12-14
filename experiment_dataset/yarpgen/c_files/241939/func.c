/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241939
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
    var_15 &= ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1])) + ((-(((/* implicit */int) arr_5 [i_2 - 1]))))));
                        var_16 = ((/* implicit */signed char) ((3110637517U) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16128)) > (((/* implicit */int) arr_7 [i_0] [i_0]))))), ((unsigned short)39845)))))));
                    }
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((arr_4 [i_1] [i_1] [i_2]), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2]))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)19722)))) * (((unsigned long long int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_11);
}

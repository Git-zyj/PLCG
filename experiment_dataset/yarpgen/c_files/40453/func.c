/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40453
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))), (((int) arr_3 [(short)24] [i_1 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_17 = max((((unsigned int) arr_1 [i_2 - 1] [i_3 + 4])), (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)15806), ((unsigned short)15806))))))));
                        arr_13 [i_0] [i_1] [i_1 - 1] [i_1] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 2951841797U)) ? (-565529795) : (((/* implicit */int) (unsigned char)106)))));
                        arr_14 [7U] [i_1] [i_2 + 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (arr_11 [i_1] [i_1 + 1] [21U] [i_1]) : (((/* implicit */int) (_Bool)1))));
                        var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_1 [(short)16] [i_1 - 1])))) ? (2013160841U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3 + 2])))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) 2013160841U);
}

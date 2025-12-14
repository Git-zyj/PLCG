/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234400
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
    var_14 = ((/* implicit */_Bool) ((signed char) (~(10409407140356740138ULL))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) + (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) ((unsigned long long int) max(((+(arr_0 [i_0]))), (((((/* implicit */int) (short)-1)) / (((/* implicit */int) var_1)))))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_8))))) % (((/* implicit */int) var_1))))) > (((unsigned long long int) ((var_11) / (var_11))))));
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [(unsigned char)2] [(signed char)9] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)31))))) - (max((10409407140356740139ULL), (((/* implicit */unsigned long long int) (short)-28858))))));
                    var_19 = ((/* implicit */short) ((arr_8 [(unsigned short)9] [i_3]) ? (((/* implicit */int) arr_1 [i_2 - 2])) : (((/* implicit */int) ((_Bool) 556216340U)))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21247
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_15);
        var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_8));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_3))))) > (var_15)));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */signed char) ((var_1) * (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_1)))))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))))) <= (((/* implicit */int) var_11))));
        }
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_1] [i_1] [i_3 - 1] &= ((/* implicit */short) ((((/* implicit */int) var_9)) * (((((((/* implicit */int) (signed char)48)) | (((/* implicit */int) (signed char)48)))) % (((((/* implicit */int) var_11)) & (((/* implicit */int) var_12))))))));
            arr_15 [(unsigned short)11] [i_1] = ((/* implicit */signed char) ((508LL) > (508LL)));
        }
        var_18 = ((/* implicit */unsigned short) var_14);
    }
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */unsigned int) var_13);
}

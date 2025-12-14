/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193759
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (min((3996815162153873637ULL), (((/* implicit */unsigned long long int) var_12))))));
                    arr_7 [i_0 - 2] [i_2] [i_0 - 2] [(unsigned short)8] = ((/* implicit */signed char) (~(((((/* implicit */int) var_12)) | (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_10)))))))));
                    arr_8 [i_2] [i_1] [i_2 + 1] [i_2] = (-(max((3996815162153873637ULL), (((/* implicit */unsigned long long int) (signed char)21)))));
                    var_14 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (!(arr_1 [i_0 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3145669633U)))))));
                    var_15 = ((/* implicit */unsigned char) max((((unsigned long long int) (-(17408562429883466660ULL)))), (((max((arr_6 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_5)))) * (((3996815162153873653ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
}

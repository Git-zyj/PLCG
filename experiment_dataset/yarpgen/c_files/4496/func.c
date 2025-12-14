/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4496
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-69))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) <= ((-(((/* implicit */int) (short)-3868))))));
        arr_2 [i_0] = ((((unsigned int) arr_0 [i_0 - 1])) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2] [6])) < (((/* implicit */int) arr_1 [i_0] [4LL]))))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) (_Bool)1);
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [(unsigned char)3] [i_0 + 1]))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)3867)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_9)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)9] [i_0] [i_0 - 1]))) - (var_14))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 |= (!(((/* implicit */_Bool) arr_11 [i_3] [i_3])));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) 3600605253777638694ULL))), (((arr_10 [i_3]) / (arr_10 [i_3])))))) ? (((/* implicit */int) (short)-3868)) : ((-((~(((/* implicit */int) (unsigned short)24576))))))));
    }
}

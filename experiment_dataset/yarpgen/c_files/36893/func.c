/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36893
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((max((16887102746981544289ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))) != (((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */int) max((var_2), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [8ULL])))));
        var_21 = ((/* implicit */long long int) var_16);
    }
    for (int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_7 [i_1 + 3] = ((/* implicit */unsigned short) (~(max((var_0), (((/* implicit */long long int) arr_4 [i_1 - 1]))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((min((251658240ULL), (arr_0 [i_2] [i_3]))) >> (((/* implicit */int) var_13)))) != (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (min((251658226ULL), (18446744073457893375ULL)))))));
                            var_23 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_6))))));
                            arr_14 [i_1] [i_4 - 1] [i_3] [i_4] [i_4 - 1] = ((/* implicit */long long int) min((((unsigned short) arr_4 [i_1 - 2])), (((/* implicit */unsigned short) arr_13 [i_1] [(unsigned char)14] [i_1] [i_1] [(unsigned char)8]))));
                            var_24 = ((/* implicit */long long int) arr_8 [i_1] [i_2] [i_3] [i_2]);
                            var_25 = ((/* implicit */unsigned int) max((251658209ULL), (251658249ULL)));
                        }
                    } 
                } 
            } 
        }
        arr_15 [15ULL] [i_1] = ((/* implicit */unsigned int) var_15);
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_26 = ((long long int) (+(((/* implicit */int) ((251658221ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        var_27 = ((/* implicit */unsigned char) var_7);
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_29 = ((/* implicit */_Bool) 18446744073457893375ULL);
}

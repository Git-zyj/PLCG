/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38901
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
    var_18 = ((((/* implicit */_Bool) var_2)) ? (min((var_15), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)161))) ? (((/* implicit */int) (unsigned char)95)) : (((((/* implicit */int) arr_1 [i_0])) | ((+(var_16))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) & (((/* implicit */int) (unsigned char)95))))) ? ((~(((((/* implicit */int) (unsigned char)161)) ^ (((/* implicit */int) (unsigned char)80)))))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 2]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)76))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (var_11)))) : (((long long int) arr_0 [i_0] [i_0]))));
                    var_22 -= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)76)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))) - (var_8)))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(max((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_2 [i_3] [i_1] [i_0]))))), (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0])))))))))));
                }
                arr_11 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) : (min((((/* implicit */long long int) arr_7 [i_0])), (arr_5 [i_0] [i_0] [i_1])))));
                arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? ((+(var_4))) : (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    var_24 |= ((/* implicit */int) ((unsigned char) var_9));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)80)), (var_17)))), (var_8)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)161))))) ? (var_4) : ((~(((/* implicit */int) var_9))))))));
}

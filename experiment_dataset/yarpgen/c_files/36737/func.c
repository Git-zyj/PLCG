/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36737
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
    var_11 = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (var_1))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) (+(arr_5 [i_0] [i_0] [i_1])));
            var_14 = ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_6)))) | (var_7));
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) & ((~(((/* implicit */int) var_8))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) var_10)))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_5))))))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-((~(((((/* implicit */int) arr_4 [i_4] [i_4])) >> (((((/* implicit */int) var_0)) - (39585)))))))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_2] [i_3] [i_3] [i_4] [i_5])) : (8394012391846879487ULL))), (((/* implicit */unsigned long long int) arr_6 [i_5 - 1] [i_2]))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 - 1])))));
                            arr_20 [i_5 + 1] [i_3] [i_5 + 2] [i_5] [i_5 + 3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(arr_16 [i_5 + 2] [i_4] [i_3] [i_2] [i_2] [i_0])))) ? (((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_4] [i_5 + 3])) : (((/* implicit */int) max(((unsigned short)52155), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) ((short) 4611686018427387903ULL)))));
                        }
                    } 
                } 
            } 
            var_19 = (signed char)-39;
        }
        var_20 = ((/* implicit */int) (signed char)-41);
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (var_2)));
}

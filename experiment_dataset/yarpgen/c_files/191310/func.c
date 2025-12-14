/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191310
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
    var_11 = ((unsigned char) ((((/* implicit */_Bool) max((-14), (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
    var_12 = ((/* implicit */signed char) (unsigned char)255);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_1);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_3 [i_1])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_8 [i_4] [i_2] [i_2]))) ? (arr_0 [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2 - 2] [i_1])))));
                        arr_18 [i_2] = ((/* implicit */signed char) var_9);
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_22 [i_5] [i_2] [4ULL] [i_2] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_1 [i_1]))));
                            arr_23 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-29))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (short)-1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25089)))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((arr_24 [i_1] [i_1] [i_1] [1ULL]) + (2147483647))) << (((arr_25 [i_1] [i_1] [i_1] [i_1] [(unsigned char)11] [i_1]) - (5704441595246044915ULL)))))) : ((((_Bool)1) ? (17048196810352583905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
}

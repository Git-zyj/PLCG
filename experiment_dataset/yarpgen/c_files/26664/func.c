/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26664
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_4))));
    var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) var_10)), (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), (((1046528) > (((/* implicit */int) (unsigned char)255)))))))) : ((~(((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(short)2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 1046528)), (2670223938U)));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16530)) + (((/* implicit */int) (unsigned short)53477))));
                    var_21 = ((/* implicit */unsigned int) min((min((arr_6 [i_0] [i_1] [i_0] [(unsigned short)7]), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (unsigned short)53477))))))), (((/* implicit */unsigned long long int) (unsigned short)53477))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)53477)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1046517)) ? (((/* implicit */unsigned int) -1046528)) : (4294967286U)))) ? (((/* implicit */int) (unsigned short)25798)) : ((+((-2147483647 - 1))))))));
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)45128)), (4294967286U)));
                }
            } 
        } 
    } 
}

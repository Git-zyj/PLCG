/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229660
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
    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned short)59219)) : (((/* implicit */int) (unsigned short)60965)))))), (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) != (884778596U)));
        var_17 ^= ((/* implicit */unsigned short) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43589)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)52))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : (((unsigned long long int) 4294967293U))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned short)7290)) - (7283))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)65), (arr_10 [i_1] [i_1] [i_1] [i_4 - 1])))) ? (((/* implicit */int) max((arr_10 [i_1] [i_2] [i_1] [i_4 - 1]), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) ((signed char) var_5)))));
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned char) (signed char)28)), ((unsigned char)216))));
                        var_19 = ((/* implicit */unsigned short) ((long long int) max((max((8997255286135109812ULL), (arr_5 [10LL]))), (((/* implicit */unsigned long long int) max((var_5), (var_13)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) var_14);
}

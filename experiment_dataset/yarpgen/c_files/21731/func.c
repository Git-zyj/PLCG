/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21731
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 += var_11;
                    arr_9 [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(arr_1 [i_2])))) == (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1] [i_2]) : (((/* implicit */long long int) arr_7 [i_0 + 2] [i_0 + 2] [i_2])))))) ? (min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (arr_1 [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)66))))));
                    arr_10 [i_0 - 1] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((signed char) 1006632960U))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_2])), (var_1)))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_0 [i_1]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)63))))) || (((((/* implicit */int) (short)32767)) >= (((/* implicit */int) var_11))))))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [16] [(unsigned char)13] = (-(((/* implicit */int) arr_4 [i_3] [19LL] [19LL])));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3])) + (((/* implicit */int) (unsigned short)31))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [(unsigned short)11] [(unsigned short)11])))))))));
                    }
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */signed char) (~(((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
}

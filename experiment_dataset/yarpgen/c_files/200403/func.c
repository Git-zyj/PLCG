/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200403
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((signed char) 33554431));
                    arr_9 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)5)));
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 2])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)1))))) >> (((((((/* implicit */int) (unsigned short)12)) | (((/* implicit */int) var_7)))) - (105)))))))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)119)) - (((/* implicit */int) (unsigned char)13)))) << (((((/* implicit */int) var_7)) - (81))))) | ((~(((/* implicit */int) (((_Bool)0) && (var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((-421817691) <= (((/* implicit */int) arr_11 [i_3])))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_3] [i_3])))))));
        arr_12 [(unsigned char)8] = ((/* implicit */unsigned int) ((arr_8 [i_3] [i_3]) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) / (5514728716349478744LL))))));
        arr_13 [i_3] &= ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) arr_6 [(short)4] [i_3] [i_3])));
        var_16 |= ((/* implicit */unsigned int) arr_3 [i_3] [i_3]);
    }
}

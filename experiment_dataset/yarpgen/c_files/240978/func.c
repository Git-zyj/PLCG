/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240978
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (unsigned short)6144))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)30899)) : (((/* implicit */int) var_13))))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7))))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (~(((unsigned long long int) ((var_2) | (((/* implicit */unsigned long long int) 0U))))))))));
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)16384)) != (((/* implicit */int) (short)29419)))), (var_12))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)17])) <= (((/* implicit */int) arr_4 [i_1] [i_2])))))));
                    arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)49162)))), (((/* implicit */int) ((_Bool) (signed char)18)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (268434944) : (((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((unsigned long long int) (unsigned short)49158))))));
                    arr_9 [16LL] [i_0] [i_0] = ((/* implicit */unsigned short) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)13)) : (1871735466)))) : (3327280353U)))));
                    arr_10 [i_0] [i_1] [i_0] |= ((/* implicit */short) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2] [(short)6] [i_3] [i_1]);
                        var_19 = ((/* implicit */signed char) (!(max((arr_11 [i_0] [i_0] [16] [i_3] [16] [i_0]), (arr_11 [(_Bool)1] [i_0] [i_1] [18] [i_2] [(unsigned short)19])))));
                    }
                }
            } 
        } 
    } 
}

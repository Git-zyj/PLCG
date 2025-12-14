/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228143
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) >= (arr_0 [i_1] [i_1 + 2]))))) <= ((+(arr_0 [i_0] [i_1 + 1])))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((var_8) >= (arr_6 [i_1 - 2] [i_1 + 1]))) ? (min((((/* implicit */unsigned int) -1720978081)), (3504322353U))) : (((var_8) / (3161591667U)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54900)) | (((/* implicit */int) ((9500614174876581986ULL) < (0ULL))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((1133375628U) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) % ((~(var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_15 = ((/* implicit */short) (~(arr_11 [i_3])));
        arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54900)) ? (((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_5 [i_3]) : (arr_5 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)54911)))) != (((/* implicit */int) var_4))))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (arr_4 [i_3] [i_3])))), (((unsigned long long int) max((((/* implicit */unsigned char) var_11)), (var_3)))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_17 = ((/* implicit */short) ((1133375648U) > (arr_16 [i_4])));
        arr_17 [i_4] [i_4] = var_7;
    }
    var_18 = ((/* implicit */signed char) var_2);
}

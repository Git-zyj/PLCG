/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213285
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((-6510298418073887629LL), (max((var_0), (((/* implicit */long long int) arr_0 [i_0 - 2])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (var_18)));
                        arr_11 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */long long int) 2147483632)) : (var_0))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                    }
                    arr_12 [i_2] [i_1] [i_2 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned long long int) var_0)) | (max((((/* implicit */unsigned long long int) 65088488997505815LL)), (var_9)))))));
    var_23 &= ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_10)))) / (((((/* implicit */_Bool) (short)10458)) ? (17414817413322053850ULL) : (((/* implicit */unsigned long long int) 7619780323836435358LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7)))))));
}

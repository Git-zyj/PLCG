/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215899
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 1752960319064235234ULL);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_10 *= ((/* implicit */signed char) ((((int) arr_7 [i_0] [i_1] [i_0])) << (((/* implicit */int) ((((((/* implicit */int) (signed char)-112)) ^ (((/* implicit */int) (signed char)29)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6480))))))))));
                    arr_10 [i_0] = ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_0 [i_1])) : (-1318584227327612230LL))) + (((/* implicit */long long int) ((arr_0 [i_0]) / (arr_0 [i_0])))));
                    var_11 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)59055)) ? ((~(arr_6 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2] [i_1] [i_2] [i_0])), (var_9)))))))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned short)59055), ((unsigned short)46371)))))))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 = ((/* implicit */unsigned short) min((((((((((/* implicit */_Bool) 16693783754645316381ULL)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (9386479649972029753ULL))))), (((/* implicit */int) ((min((var_7), (((/* implicit */long long int) (unsigned char)93)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))))))));
}

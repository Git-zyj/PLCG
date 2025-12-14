/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34498
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
    var_11 -= ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((8710699303855683922LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) >= (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1]) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))))) : ((-(((-8710699303855683922LL) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [10LL] [i_2] [i_1])))))))));
                    arr_7 [i_1] = ((/* implicit */signed char) ((arr_4 [i_0] [i_2]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42592)) | (((/* implicit */int) (unsigned short)42500)))))));
                    arr_8 [i_1] [i_1] [i_2] = ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) (unsigned short)34877)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (1ULL)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) var_8);
}

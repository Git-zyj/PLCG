/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224142
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
    var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((18066881283016247848ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))) && (((/* implicit */_Bool) (signed char)28)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (unsigned char)246))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))) : (2388221250U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2388221250U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((379862790693303752ULL) >> (((67108863U) - (67108844U))))))))))));
                    arr_8 [i_0] [(signed char)0] [(signed char)0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2388221250U)) / (((((((/* implicit */unsigned long long int) 3179975151U)) | (18066881283016247864ULL))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}

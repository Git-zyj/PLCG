/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215250
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] = (unsigned char)30;
        var_10 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
        arr_5 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62041)) % (var_6))))))));
        arr_6 [i_0 + 1] [(unsigned short)4] = ((/* implicit */unsigned short) ((10424485168659157908ULL) > (min((10424485168659157908ULL), (((/* implicit */unsigned long long int) (unsigned short)62041))))));
    }
    var_11 = ((/* implicit */unsigned char) ((min((12067664255641670233ULL), (((/* implicit */unsigned long long int) var_4)))) * (8022258905050393708ULL)));
    var_12 = ((/* implicit */unsigned char) ((max((((8903315211045220436ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))), (((((/* implicit */_Bool) -3899128)) ? (6379079818067881383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8022258905050393708ULL)) ? (max((((/* implicit */long long int) (unsigned short)62041)), (-4403601406605173448LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6379079818067881383ULL)) ? (-3899128) : (((/* implicit */int) (unsigned char)30))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21923
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
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 66846720)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned int) (signed char)-2));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -66846716)) && (((/* implicit */_Bool) 119385155593622348ULL))));
        var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) 7250432727311934949LL))), (522240U)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (signed char)127);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (signed char)118);
                    var_18 *= ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))) / (max((-7250432727311934950LL), (((/* implicit */long long int) 1948782238))))))));
                    var_19 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)36971)) : (((/* implicit */int) (unsigned char)229))))) & (((((/* implicit */unsigned long long int) -66846716)) ^ (6991371047826934180ULL)))))));
                    var_20 = ((((/* implicit */int) (short)-32752)) + ((((-(((/* implicit */int) arr_5 [i_0] [i_0])))) * ((-(((/* implicit */int) (signed char)-2)))))));
                }
            } 
        } 
    }
    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) + (-5104188093260650455LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-31777))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)31780))))) + (((((/* implicit */unsigned int) var_8)) * (1776819668U)))))));
}

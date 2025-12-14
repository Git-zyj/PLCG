/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236802
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [(unsigned char)6] = ((/* implicit */unsigned int) 1780839689545013053ULL);
                    var_14 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)21547))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - ((-(4294967295U)))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)54)), (var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) | (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)51014))))))) : (1479737752U)));
                    var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), ((unsigned short)21530)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51145)) ? (-12) : (((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_12))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43968))) | (2580394030U))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 673451916U)) ? (((/* implicit */unsigned long long int) 2126655583U)) : (10422357613075432069ULL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) var_0)) | (7943924360833513964ULL))), (((/* implicit */unsigned long long int) ((13U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) | (var_12)));
    var_18 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1078170986855075158ULL)) ? (max((7943924360833513964ULL), (((/* implicit */unsigned long long int) -748822038564673557LL)))) : (((/* implicit */unsigned long long int) (-(576600386))))))));
    var_19 ^= ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 2147483647)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    var_20 ^= ((/* implicit */unsigned short) 1000186253408477598LL);
}

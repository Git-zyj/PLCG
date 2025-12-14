/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211977
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3008)) > (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (1526815311U)))), ((short)2998))))));
    var_15 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = var_11;
        var_17 &= ((/* implicit */_Bool) max((((signed char) (~(((/* implicit */int) (short)3016))))), (((/* implicit */signed char) max(((_Bool)1), (arr_0 [i_0] [i_0]))))));
        var_18 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) 10110598740361340434ULL))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) (unsigned char)63))))), (((long long int) var_6))))));
        var_19 &= ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) (short)-7185);
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)3008)) - (((/* implicit */int) var_1)))) % (((/* implicit */int) arr_3 [i_1]))))) >= (var_8)));
        var_21 = ((/* implicit */signed char) var_5);
        var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (8186127714162408388LL)))) && (((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_2 [(unsigned short)11] [i_1])), (7015657466851410453LL))) / (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        var_23 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned char) var_11))) ^ (((/* implicit */int) (short)11568))))));
    }
    for (short i_2 = 4; i_2 < 11; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            var_24 -= (unsigned short)10157;
            arr_9 [10ULL] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)66))))))), ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_7 [(unsigned char)0])))))));
            arr_10 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [0U] [i_3])) << (((/* implicit */int) (short)5))));
        }
        arr_11 [i_2] [1U] = ((/* implicit */unsigned int) (~(((long long int) min((449515288U), (((/* implicit */unsigned int) (unsigned short)7472)))))));
    }
    var_25 = ((/* implicit */_Bool) ((long long int) var_1));
    var_26 = ((/* implicit */signed char) ((var_6) >= ((+(var_10)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231422
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -636005595)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)3448))))));
        var_17 -= ((/* implicit */_Bool) arr_1 [(_Bool)1]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-950526150) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (signed char)0))))) : (0ULL)));
    }
    for (int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */_Bool) (signed char)8);
        arr_4 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12774))) / (4294967295U));
        var_20 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) (+(-2381117380276844253LL)))) : (((16ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_21 = (((-(0))) | ((+(((/* implicit */int) arr_2 [i_1 + 2] [i_1])))));
    }
    var_22 = ((/* implicit */unsigned short) var_9);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_2) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (arr_8 [i_3] [i_3] [i_3 + 1]) : (10LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65530)))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4663149226981986446LL)) ? (65535) : (((/* implicit */int) arr_6 [i_2] [i_3]))))))))))));
                var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (2996807093U)));
            }
        } 
    } 
}

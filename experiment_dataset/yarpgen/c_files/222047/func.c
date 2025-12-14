/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222047
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
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((((long long int) (~(1966080U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1966089U)) || (((((/* implicit */_Bool) -508642693199134287LL)) && (((/* implicit */_Bool) 1966094U)))))))));
        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)199)) != (((/* implicit */int) arr_1 [i_0 + 2]))))))))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) (unsigned char)90))))), (var_1)));
        arr_2 [(short)3] [i_0 + 3] = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((int) 1966094U));
        arr_5 [i_1] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (1966069U)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)68)) ? (arr_4 [i_1 + 1]) : (((/* implicit */int) ((_Bool) (unsigned char)71)))));
        arr_6 [i_1] = ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) var_7)) : (0));
    }
    for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            var_23 = ((/* implicit */signed char) ((unsigned int) (~(3994581320U))));
            arr_12 [i_3] [5] [i_2] = ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) -1198097064)) : (4293001202U))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) 3492006383U);
            arr_14 [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3 + 1] [i_2])) ? (2218465524U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : ((~(3492006373U)))));
        }
        arr_15 [i_2 + 2] = ((/* implicit */unsigned int) arr_1 [i_2 - 1]);
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (1966094U)));
    }
    for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        arr_19 [i_4 - 4] [i_4 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4 - 3] [i_4 - 1] [i_4 - 2])) ? (max((((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)7296)))), (((/* implicit */int) arr_9 [i_4] [i_4] [i_4 - 4])))) : (((((/* implicit */int) arr_18 [i_4 + 1])) * (((/* implicit */int) arr_18 [i_4 - 2]))))));
        arr_20 [i_4 - 1] [0U] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_4]))));
        arr_21 [i_4] = min((min((1966094U), (arr_10 [i_4 - 2] [i_4 - 3]))), (max((802960924U), (((/* implicit */unsigned int) arr_9 [i_4 - 2] [i_4] [(short)1])))));
        arr_22 [i_4 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((int) (!((_Bool)1)))))));
    }
    var_24 *= ((/* implicit */short) min((((((/* implicit */int) ((-6365833782803827357LL) >= (((/* implicit */long long int) 4293001203U))))) << (((var_2) + (4154998479509934777LL))))), (((/* implicit */int) var_4))));
}

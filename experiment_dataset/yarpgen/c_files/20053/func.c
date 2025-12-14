/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20053
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) << (((((/* implicit */int) (unsigned char)178)) - (174)))))) ? (((arr_3 [i_0 + 3]) ? (((/* implicit */unsigned long long int) -9223372036854775803LL)) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (var_14))))));
                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21415))) : (9223372036854775802LL)))));
                arr_7 [(unsigned short)9] [i_0] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_4 [i_0]))), (18446744073709551615ULL))) ^ (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_13))))));
                var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2022595243)))) ? (((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) 1488219344)) : (-9223372036854775803LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (arr_5 [i_1]) : (((/* implicit */int) (short)-32763))))) && (((/* implicit */_Bool) -1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((min((max((var_10), (((/* implicit */long long int) (unsigned short)0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)12))))))), (((/* implicit */long long int) var_15))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (signed char)39)), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) - (2985820129164754625LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */int) (short)1496))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((2147483647) != (((/* implicit */int) (signed char)37))))), (1521245141U)));
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) var_9)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44132))));
        arr_17 [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1729382256910270464LL)) ? (1521245141U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), (min((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (short)-32002))))), (max((var_14), (((/* implicit */int) var_2))))))));
        arr_18 [i_3] [13] = ((/* implicit */short) var_9);
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) var_15)) - (arr_15 [i_3])))), (min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (short)32762))) / (-2402003114486059936LL)))))));
    }
    var_22 *= ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_1)))), (2147483647)))) ? (-9223372036854775803LL) : (((/* implicit */long long int) (-(var_4))))));
}

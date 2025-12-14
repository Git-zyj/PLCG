/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227818
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
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(3726733669U)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (signed char)20)) & (((/* implicit */int) var_9)))))), ((+(((/* implicit */int) var_13))))));
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6973))) : (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) min((((/* implicit */short) var_9)), ((short)6968)))))) : ((-(((/* implicit */int) arr_4 [i_0 + 3]))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) ? (arr_3 [i_0] [1ULL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)6973)))))))) ? (((/* implicit */long long int) min((((-1607494840) / (((/* implicit */int) (short)6976)))), ((-(((/* implicit */int) (short)32170))))))) : (((((arr_2 [i_0]) >= (((/* implicit */int) (short)2076)))) ? (((/* implicit */long long int) (-(-2040957814)))) : (((((/* implicit */_Bool) (unsigned short)45763)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14510))) : (-6814629722819144311LL)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32171))) == (arr_3 [i_0] [i_0 + 3]))))))) ? (max((((/* implicit */unsigned long long int) (-(arr_1 [i_0])))), (max((17451903489387337780ULL), (((/* implicit */unsigned long long int) (short)-6977)))))) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])))))));
                var_20 = ((/* implicit */unsigned short) (-(min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 4])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)29847)) != (((/* implicit */int) (short)-32171)))))))));
}

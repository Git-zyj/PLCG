/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211482
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [(signed char)15] [(unsigned short)14] |= ((/* implicit */signed char) (~(max(((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27406))) == (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) min(((+(671065221))), (max((min((arr_2 [i_1]), (arr_2 [i_1]))), ((~(((/* implicit */int) arr_5 [(unsigned short)8]))))))));
                var_17 = ((/* implicit */unsigned int) (+(17555761557198812166ULL)));
            }
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_1)))), (min((((/* implicit */unsigned long long int) var_6)), (333177559143286158ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 32767ULL))))), (var_15))))));
    var_19 |= ((/* implicit */unsigned long long int) ((min((min((((/* implicit */long long int) var_4)), (var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))) | (((/* implicit */long long int) var_1))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208734
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */int) min((((/* implicit */long long int) (+((-(arr_4 [9] [i_1])))))), (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))), (min((var_13), (((/* implicit */long long int) 2969349252U))))))));
                var_17 += (-(((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_3)))) ? (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14657)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [3U] [i_1]))))))));
                var_18 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(arr_0 [i_1 + 2])))) ? ((+(-1048509218))) : ((~(((/* implicit */int) arr_1 [i_0] [i_1 - 1])))))), ((-(((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1 + 3] [i_0])), (-1048509219)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [9U]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1908886333U))))))))));
                arr_6 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [7ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [(unsigned short)14] [(signed char)5]))))), ((-(arr_4 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048509217)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7943886541540441908LL)))) ? (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)2))))) : ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))))) : (max((((/* implicit */unsigned int) 1705478171)), (1701541417U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) (short)-31124)) ? (1908886333U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_13)))))))));
}

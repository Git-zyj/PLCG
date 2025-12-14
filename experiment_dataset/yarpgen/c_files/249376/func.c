/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249376
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [3U] [i_0 + 3])), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (7696830168207681696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) 4U)))) : ((((_Bool)1) ? (7696830168207681699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6269)))))));
                var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 1])), (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_16 *= ((/* implicit */short) min((min((arr_1 [i_2] [i_2]), (((/* implicit */long long int) var_4)))), (arr_1 [i_2] [i_2])));
        var_17 &= ((/* implicit */signed char) (~((-(3092504309U)))));
    }
    var_18 *= ((/* implicit */unsigned char) (signed char)-107);
    var_19 |= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (unsigned short)14186)), (7696830168207681696ULL)))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) 3405013267U))));
}

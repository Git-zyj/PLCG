/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192459
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
    var_18 &= ((/* implicit */long long int) ((unsigned int) ((long long int) (signed char)(-127 - 1))));
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned long long int) -9095152241558038723LL))))))) ? (var_0) : (((unsigned int) min((var_12), (((/* implicit */unsigned long long int) 6000788550016043775LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_5 [i_0])))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775788LL)) ? (381562488U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0])))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))))) : (arr_7 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */long long int) ((((/* implicit */int) ((short) min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_2])))))) >= (min((((((/* implicit */_Bool) (short)-24062)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (signed char)(-127 - 1)))))));
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_2]) + (arr_4 [i_2])))) ? (arr_4 [i_2]) : (min((arr_4 [i_2]), (arr_4 [i_2])))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */long long int) min((arr_5 [i_3]), (((/* implicit */unsigned short) (((-(var_17))) >= (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))))));
        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : (17154813777080351471ULL))), (((/* implicit */unsigned long long int) ((arr_7 [i_3] [i_3]) < (arr_11 [i_3] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((unsigned short)23379), (((/* implicit */unsigned short) (signed char)125))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)13))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) & (min((1291930296629200144ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_17 [i_3] [i_3] |= ((/* implicit */short) min((arr_14 [i_3]), (((((/* implicit */_Bool) 3499966817U)) ? (((/* implicit */long long int) 645535008U)) : (0LL)))));
    }
}

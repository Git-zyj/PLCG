/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20232
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10U] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [6U] [i_2]))) : (arr_1 [2U] [i_0 + 1])))) ? (((((/* implicit */_Bool) (unsigned short)2365)) ? (1046130325U) : (((/* implicit */unsigned int) 1122696314)))) : (((((/* implicit */_Bool) 8046120814650291265LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) : (((((/* implicit */_Bool) arr_0 [i_0] [6LL])) ? (1477763403U) : (var_8)))))));
                    arr_10 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)46)) | (((/* implicit */int) (((+(-8046120814650291266LL))) != (4251516145421134851LL))))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-8556431720047593370LL) / (((/* implicit */long long int) -1900656706))))) ? (2371932835U) : (205660608U)));
                    var_11 *= ((/* implicit */unsigned int) ((((((((/* implicit */long long int) arr_0 [i_0] [2])) / (arr_3 [13U]))) != (((((/* implicit */_Bool) 3166435945U)) ? (5152990788059796661LL) : (((/* implicit */long long int) 2723828237U)))))) ? (min((arr_4 [i_0 - 2]), (((/* implicit */long long int) (signed char)-46)))) : (((/* implicit */long long int) (+(arr_5 [0LL]))))));
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */unsigned int) min((var_0), (((((/* implicit */_Bool) 1293871748U)) ? (((/* implicit */long long int) var_7)) : (max((((/* implicit */long long int) var_2)), (1658814478034947010LL)))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) & (7747835519920066340LL))))));
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30935)) != (((/* implicit */int) (unsigned short)47471))));
                var_14 = max((((arr_13 [i_3] [i_3]) * (var_8))), (min((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_3]))));
                var_15 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_3] [i_3]) <= (((/* implicit */long long int) 1089717138U)))))) <= (arr_9 [i_3] [i_3] [i_3])))));
            }
        } 
    } 
}

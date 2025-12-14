/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229716
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) 1663999133);
                arr_6 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) >= (((/* implicit */int) max((arr_3 [i_0] [i_0] [(unsigned short)0]), (arr_4 [i_0] [i_0] [i_0])))))))) < (((((/* implicit */_Bool) var_12)) ? (arr_0 [7U]) : (((/* implicit */unsigned int) min((-1843557679), (((/* implicit */int) arr_1 [i_1])))))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 539081137538459348LL)) ? (1663999133) : ((-(((/* implicit */int) (unsigned short)15))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((max((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (min((((/* implicit */unsigned long long int) arr_10 [i_2] [i_3])), (((((/* implicit */unsigned long long int) var_13)) / (9ULL))))) : (((((/* implicit */_Bool) (-(1666161985U)))) ? ((-(arr_9 [20ULL] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_2] [i_3]))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((arr_14 [i_6] [i_5] [i_3] [i_3]) ? (max((((1419101263) ^ (((/* implicit */int) arr_16 [(unsigned char)5] [i_2] [i_4] [i_4] [14LL] [i_4 + 1])))), (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65505)))))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_9 [2U] [i_6])))) << (((((/* implicit */int) (unsigned short)65512)) - (65488)))))));
                                arr_19 [i_2] = ((/* implicit */int) (~((~(0ULL)))));
                                arr_20 [i_6] [i_3] [i_2] [i_3] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13760)) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_5] [i_6])) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5]))))));
                                arr_21 [i_2] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */short) (+((((_Bool)0) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) -1663999133))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

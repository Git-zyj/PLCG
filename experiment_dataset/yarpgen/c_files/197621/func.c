/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197621
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (unsigned short)20932))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [(unsigned short)14] [19ULL] [i_2] [i_2 + 1] [19ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4216722250U)), (-8002943979138704917LL)))) || (((/* implicit */_Bool) (short)31295))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)60)) && (((/* implicit */_Bool) 2147483647)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))))))));
                                arr_15 [i_1] = ((/* implicit */unsigned short) ((min((144114913197948928ULL), (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_1] [10U])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)53))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned long long int) 2742910024476395070ULL))))) ? (2597901274U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2507082174169935074LL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))) != (771670573U)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_11))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)28672)) ? (4961788154871836744ULL) : (((/* implicit */unsigned long long int) 9052603121973172122LL)))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))), (var_4))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) ((int) var_16))))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) - (1003404651390734496ULL)))) && (((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_5 - 1]))));
                arr_21 [i_5] [i_6] = ((/* implicit */unsigned char) min((arr_18 [i_5 + 2]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)210)) >> (((((/* implicit */int) (unsigned char)255)) - (246))))))));
            }
        } 
    } 
}

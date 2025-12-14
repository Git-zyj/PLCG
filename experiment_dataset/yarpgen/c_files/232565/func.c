/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232565
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
    var_11 -= ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (signed char)-12)) : (((((/* implicit */_Bool) (short)14753)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (short)(-32767 - 1))))))) < (((/* implicit */int) max((((/* implicit */short) ((14729335843727609612ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))), (var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1824061197U)), (-3568648484071364691LL)))) ^ (((0ULL) ^ (6813500970606969578ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)12582)))) : (((long long int) 472051633U)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (298894923U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))), (max((((((/* implicit */_Bool) (unsigned char)221)) ? (-6249461238788638589LL) : (((/* implicit */long long int) 3822915662U)))), (((/* implicit */long long int) (short)-32750))))))));
                                arr_11 [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((3717408229981942003ULL) >= (((/* implicit */unsigned long long int) 3822915656U))))), (((2139095040U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)63290)))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((+(((3822915663U) >> (((472051651U) - (472051626U))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)7310))))) != (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32474))))))))))))));
                                arr_12 [i_4] [i_1] [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)64326))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

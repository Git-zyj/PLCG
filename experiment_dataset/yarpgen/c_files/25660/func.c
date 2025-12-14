/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25660
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned char) (signed char)47))) ? (max((((/* implicit */unsigned long long int) (unsigned short)44528)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) << (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)56839)) ? (0ULL) : (18446744073709551615ULL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */long long int) (((+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_13)) - (35))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)20994))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15484237129508036872ULL)) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((var_11) << (((((/* implicit */int) (signed char)-43)) + (64))))))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14))))))) ? ((-(((/* implicit */int) (signed char)-86)))) : (((/* implicit */int) ((unsigned char) var_5)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) min((var_14), (((/* implicit */unsigned long long int) var_16)))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (-(var_14)))) ? (min((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (195516547U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))));
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 19; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) var_9)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((var_3), (min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])) >= (((/* implicit */int) var_1))))))))))));
                                arr_19 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2921493654U)) ? (195516547U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2041595920913249684ULL)) ? (((/* implicit */int) (unsigned short)21029)) : (((/* implicit */int) (signed char)-27)))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (unsigned char)117))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_10)), (var_14))) >= (((/* implicit */unsigned long long int) ((unsigned int) var_17)))))) : (((/* implicit */int) var_16))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3901
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
    var_11 = ((/* implicit */short) var_10);
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 += ((((/* implicit */_Bool) max((arr_8 [i_2 - 1] [i_1] [i_2 + 1]), (arr_8 [i_2 + 1] [i_1] [i_2 + 1])))) && (((/* implicit */_Bool) ((arr_8 [i_2 - 2] [i_2 - 2] [i_2]) & (arr_8 [i_2 - 1] [i_1] [i_2 - 1])))));
                                arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned long long int) max((arr_2 [i_2] [i_3]), (((/* implicit */long long int) (~(((/* implicit */int) (short)32750)))))));
                                var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)3785)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-18)) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (((((-8497956306011438184LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (-8497956306011438191LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_2))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)1))))));
}

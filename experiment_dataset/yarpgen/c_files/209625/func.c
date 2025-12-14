/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209625
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1314236310)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)41323)) : (((/* implicit */int) (unsigned short)55651)))) : (((((/* implicit */int) (unsigned short)4168)) % (((/* implicit */int) (unsigned short)61151))))))) || (((/* implicit */_Bool) ((unsigned short) min((var_19), (((/* implicit */unsigned char) (_Bool)1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0 + 1]))))), ((-(((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2])) : (arr_4 [i_2] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 7961896476815539291ULL));
                                arr_13 [10ULL] [i_1] [10LL] [i_4] [i_1] &= ((((/* implicit */int) ((unsigned char) (+(arr_3 [i_0] [i_2 + 1] [i_4]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)20))))) || (((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) >> (((arr_8 [i_0] [i_2 + 1] [i_2] [i_3 - 1]) - (2238057444366932364ULL))))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)15))))) && (((((/* implicit */_Bool) arr_7 [(signed char)0] [(signed char)0])) && (((/* implicit */_Bool) -948192950)))))))) : ((((-(4294967295U))) >> (((((/* implicit */int) (signed char)52)) - (43)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

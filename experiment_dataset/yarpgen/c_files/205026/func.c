/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205026
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
    var_18 = ((/* implicit */unsigned short) ((signed char) ((var_15) | (((/* implicit */long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -243459640)), (arr_2 [i_0] [i_0 - 1])))) ? (4226616233U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))))));
        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) var_2);
                    arr_8 [(signed char)1] [(signed char)1] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((signed char) 4226616231U));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4226616248U)) ? (68351062U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_11 [(unsigned char)20])))))) ? (((/* implicit */int) max(((short)-17310), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)58991)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_11 [13LL]))))) : (((/* implicit */int) (unsigned char)186))))));
        var_22 += ((/* implicit */signed char) ((var_7) << (((min((68351062U), (((/* implicit */unsigned int) (signed char)-78)))) - (68351040U)))));
        var_23 = ((/* implicit */unsigned long long int) var_0);
    }
    for (short i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (((/* implicit */unsigned long long int) max((arr_13 [i_4]), (((/* implicit */long long int) (signed char)-76))))) : (((unsigned long long int) arr_13 [i_4])))), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4]))));
        arr_16 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2025451061U)), (((unsigned long long int) arr_10 [(short)10]))));
    }
    var_25 = ((/* implicit */int) var_17);
}

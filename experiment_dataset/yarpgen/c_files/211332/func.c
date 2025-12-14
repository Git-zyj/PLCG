/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211332
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
    var_12 -= ((/* implicit */_Bool) (~(18446744073709551615ULL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)-31229)), (10ULL))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((int) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_4])) < (((/* implicit */int) (_Bool)1)))))))))));
                                arr_12 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-(max((arr_5 [i_0] [i_2] [i_2]), (arr_5 [i_1] [i_2] [i_2])))));
                                arr_13 [(unsigned short)9] [i_2] [i_3] [7U] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (~(-987265860)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) arr_9 [i_2] [i_1] [2U] [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((max((((((/* implicit */_Bool) (signed char)-53)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 1008806316530991104LL)))), (((/* implicit */unsigned long long int) (short)29779)))), (((/* implicit */unsigned long long int) var_3))))));
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */long long int) (-(var_8)));
    var_18 = ((/* implicit */unsigned char) ((int) max((var_8), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) max((((int) arr_3 [i_5] [i_5] [i_5])), (((/* implicit */int) max((arr_10 [(unsigned short)18] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-39))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54654))) : (((unsigned int) 18446744073709551602ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [18LL] [i_5])))))) : (var_4)));
        var_20 = (+(((unsigned int) 1246510011)));
    }
    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
    {
        arr_19 [i_6 - 2] [6U] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 + 4] [i_6])) + (((((/* implicit */_Bool) 1458328064U)) ? (max((3394750878U), (((/* implicit */unsigned int) (unsigned short)53159)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) arr_9 [i_6] [i_6] [i_6 + 3] [i_6] [i_6] [i_6])), (arr_17 [4ULL])))));
        arr_20 [i_6] = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_18 [i_6 + 4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53072))) : (1234191274406726373LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 4] [i_6 - 2] [i_6]))) : ((+(var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    }
}

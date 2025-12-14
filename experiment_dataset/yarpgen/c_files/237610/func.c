/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237610
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(1656946051U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) : ((-(min((1363065269370812409LL), (-2002770587560485274LL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) 2002770587560485273LL);
                                var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(-2102040655))), (((/* implicit */int) (!(((/* implicit */_Bool) -2102040655))))))))));
                                var_15 = ((/* implicit */unsigned char) ((((_Bool) ((-2002770587560485274LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) != (((/* implicit */int) (_Bool)1))))) : (((int) min((((/* implicit */long long int) 3270904311U)), (2002770587560485273LL))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)6))))), (min((((/* implicit */unsigned long long int) ((_Bool) var_2))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))) & (var_4)))))));
                                arr_14 [i_0] [9] [1] [i_0] [4] [i_0] [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)56)))) : (min((-2112295459), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)200)), (((((/* implicit */int) (signed char)96)) - (((/* implicit */int) (_Bool)0))))))) >= (((min((-2002770587560485274LL), (((/* implicit */long long int) 2794778973U)))) | (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 6; i_6 += 2) 
                        {
                            {
                                var_18 = ((((((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (var_1)))) <= (((((/* implicit */_Bool) 32505856)) ? (715164999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) 6720278963134394532LL)));
                                var_19 |= ((/* implicit */long long int) var_5);
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_5] [i_6] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)254)))), (min((((/* implicit */int) (unsigned short)59504)), (32505856)))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [8LL] [2] [i_6 - 3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) -2002770587560485274LL)))))));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)179)) != (1356332276)))) | (min((var_8), (67107840)))))), (1066347244U)));
                            }
                        } 
                    } 
                    arr_22 [i_0] [2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((signed char) ((long long int) ((_Bool) (unsigned short)9989))));
                }
            } 
        } 
    } 
}

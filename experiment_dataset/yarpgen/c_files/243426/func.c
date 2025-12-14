/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243426
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) min((var_5), (((/* implicit */short) var_0))))) + (28399)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-1374524263) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2748547645541368436LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) var_0)))))))));
    var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) (_Bool)1))))) ? ((-(-2748547645541368446LL))) : (((/* implicit */long long int) var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)84))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */int) ((signed char) (-(-1717263089))))) : (var_3))))));
                var_18 = max((((/* implicit */long long int) ((((((/* implicit */_Bool) 7329913498817358937ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-14513))))))), (min((2748547645541368450LL), (((/* implicit */long long int) arr_2 [i_1] [i_0 + 2])))));
                var_19 = ((/* implicit */long long int) min((var_19), (var_12)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_2 - 2] [(_Bool)1] [i_3 + 1] [i_2] = ((/* implicit */short) ((((((arr_7 [i_0 + 1] [i_1] [2U] [i_1]) < (((/* implicit */int) (signed char)48)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14508)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) && ((_Bool)1)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_4] [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 - 1]))))))) : ((~(((((/* implicit */_Bool) (unsigned short)29855)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2989690808U)))))));
                                arr_15 [(unsigned short)9] [(unsigned short)9] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) 4194303U)) ? (arr_7 [(unsigned char)0] [i_2 - 1] [(_Bool)1] [i_4]) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_2] [i_1] [i_2]))))) + (arr_7 [i_1] [i_2] [i_3 - 2] [i_3 - 2])));
                                arr_16 [i_0] [i_2] [i_2] [i_3 + 3] [i_2] = ((/* implicit */short) min((((((((/* implicit */_Bool) 1792)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) (-(var_2)))) : (((((/* implicit */long long int) var_14)) ^ (arr_11 [i_4 - 2] [i_2] [i_1] [i_1] [i_2] [i_0]))))), (((/* implicit */long long int) ((arr_0 [i_0 + 2]) || (((/* implicit */_Bool) 4294967295U)))))));
                                arr_17 [i_2] [i_2] = ((/* implicit */_Bool) min((max((((arr_11 [i_0] [i_4] [i_2] [(short)0] [i_2] [i_2]) ^ (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (999438574)))))), (((/* implicit */long long int) (-((((_Bool)1) ? (arr_4 [i_0] [i_0 + 2] [i_0 + 2]) : (var_14))))))));
                                var_20 = ((/* implicit */short) arr_0 [i_2 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) var_11);
}

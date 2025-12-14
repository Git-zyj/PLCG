/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35228
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (unsigned short)42424)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_1]))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (unsigned short)42422)) : (((/* implicit */int) (unsigned short)23112)))))));
                                var_10 |= ((/* implicit */int) var_3);
                                var_11 += ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) ((signed char) var_1))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [(_Bool)0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (var_5)))) ? ((-(((/* implicit */int) (short)30971)))) : (((((/* implicit */_Bool) (unsigned short)42449)) ? (-1383688390) : (((/* implicit */int) arr_4 [0] [i_1] [i_1]))))))) ? (((/* implicit */int) min((arr_10 [(unsigned short)4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6184871665462218153ULL)))))))) : (((((/* implicit */_Bool) arr_10 [(short)0])) ? (((/* implicit */int) arr_10 [6ULL])) : (((/* implicit */int) arr_10 [4]))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)42423));
                    var_13 = ((/* implicit */unsigned short) arr_7 [i_2] [i_1] [i_0]);
                    var_14 = ((((/* implicit */_Bool) ((unsigned short) arr_1 [(_Bool)1] [(_Bool)1]))) ? (max((arr_5 [i_0]), (((/* implicit */long long int) var_4)))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (var_0) : (((((/* implicit */_Bool) (short)30955)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30971))) : (var_9)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) var_8))), (max(((unsigned short)10205), (((/* implicit */unsigned short) (short)-4953))))))) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9202531973356131733LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-4963)))))), (max((10916955445550503331ULL), (((/* implicit */unsigned long long int) (short)17041))))))));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */short) (signed char)22)), ((short)4963)))), (var_2))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), ((-(((/* implicit */int) (short)-4964)))))))));
    var_19 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)229)), (1023)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4953)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)0))))) ? (var_1) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42418))) : (var_1)))))));
}

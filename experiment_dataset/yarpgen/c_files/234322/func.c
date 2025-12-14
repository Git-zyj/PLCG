/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234322
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
    var_12 = var_5;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] = max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2]))))) / (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)8652), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) << (((((((/* implicit */_Bool) (unsigned short)8652)) ? (((/* implicit */int) (short)1148)) : (((/* implicit */int) (_Bool)1)))) - (1139)))))));
                                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned char)109);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2323836204U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)-1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4575657221408423936LL) : (var_3)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-32765), ((short)32765)))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_0]))))) / (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2])), (var_0)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((min((max((var_0), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_3))))))));
    var_16 = ((/* implicit */int) max((var_16), (min((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_11))))), (min((min((780024607), (((/* implicit */int) (unsigned char)59)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)21))))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(var_3))))));
}

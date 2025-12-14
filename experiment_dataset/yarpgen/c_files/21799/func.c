/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21799
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
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */_Bool) (unsigned short)8212);
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_1)) * ((-(((/* implicit */int) (short)0)))))), ((((!(var_1))) ? (min((var_10), (((/* implicit */int) var_7)))) : (var_10)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */int) (short)0)))))) + (((/* implicit */int) ((unsigned char) (short)-1)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((unsigned char) var_0))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_1]);
                                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min(((unsigned short)56779), (((/* implicit */unsigned short) (unsigned char)0)))), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? ((~(((/* implicit */int) ((signed char) var_1))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_3]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_6)), (var_2))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) != (((((/* implicit */_Bool) arr_10 [i_0] [i_4])) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((((/* implicit */_Bool) 1646504080)) ? (((/* implicit */int) (short)-13917)) : (((/* implicit */int) (short)32757))))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) (signed char)-48)), (var_3)))))));
                }
            } 
        } 
    } 
}

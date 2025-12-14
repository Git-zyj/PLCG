/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236570
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
    var_16 = ((/* implicit */short) var_12);
    var_17 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [8ULL] [i_0] [i_2] = ((/* implicit */long long int) (~(var_12)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [0] [i_0] [(unsigned char)4] [0] [4] [4] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0 - 3]))));
                                arr_16 [i_0 + 1] [i_0] [i_2] [8U] [0] = ((/* implicit */unsigned short) min(((~((-2147483647 - 1)))), ((+(((/* implicit */int) (unsigned char)85))))));
                                var_18 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32766))) : (-2369942824068143313LL))), (((/* implicit */long long int) (unsigned short)35889)))) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0 - 1] [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (short)-32766)) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-65))))))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_4))) >> ((((-(((/* implicit */int) (short)-3923)))) - (3900)))))) ? (((/* implicit */int) arr_12 [i_1] [i_2])) : (((((/* implicit */int) (short)13961)) & (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1] [i_0] [(signed char)7] [i_0 + 1] [i_2])) >= (var_8)))))));
                    var_20 -= arr_1 [i_0 + 1] [i_1];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_11)))))) >= (((((/* implicit */_Bool) -4780511503353690238LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16619992601066274116ULL))) * (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) min((-373263488), (((/* implicit */int) (short)7206))))))))));
}

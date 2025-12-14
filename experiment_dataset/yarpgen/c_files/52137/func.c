/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52137
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 = (((~(var_6))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_1 - 1] [i_1 + 1] [i_2 - 1])))));
                                arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [1U] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 11425645932327283760ULL))) ? (((((/* implicit */_Bool) 302093132U)) ? (3992874164U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)768))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) < (3512606334U)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_1 - 1] [i_1 - 1] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))));
                var_13 = ((/* implicit */unsigned char) ((unsigned int) ((short) ((unsigned long long int) var_2))));
                var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_0])))) <= ((+(((/* implicit */int) arr_7 [(unsigned char)12] [(unsigned char)10] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(11123665031339202099ULL))))))))));
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (302093132U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((unsigned char) var_2)))))))));
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)11702))))))))));
}

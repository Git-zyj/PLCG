/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207507
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned long long int) (short)-19153)))));
                                var_17 = arr_4 [i_4] [i_1];
                                var_18 -= ((/* implicit */unsigned long long int) (+(var_12)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((int) var_8)))));
                            arr_17 [i_6] [i_6] [i_6] [i_0] &= ((/* implicit */short) (+((-((+(var_12)))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) (unsigned short)53114)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0])) && (((/* implicit */_Bool) ((short) (unsigned short)63748)))))));
            }
        } 
    } 
}

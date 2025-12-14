/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205647
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) var_5);
                var_18 += ((signed char) 4658803621807919817LL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) var_13);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)16449)) : (((/* implicit */int) (short)-8378))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_6])) ? (((/* implicit */int) (short)-12654)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 2])))))));
                                var_20 = ((/* implicit */short) (+(max((((/* implicit */int) arr_2 [(_Bool)1])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) arr_8 [i_2] [i_3] [i_3]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225972
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [0U] [i_3] [i_1] = ((/* implicit */int) ((max((2428965469693222903LL), (((/* implicit */long long int) ((int) (unsigned short)61746))))) - (((/* implicit */long long int) (+((+(1860379134))))))));
                                arr_14 [i_0] [i_1 + 1] [i_2] [4LL] [i_2] [i_4] &= ((/* implicit */unsigned short) (-((-(max((((/* implicit */int) (signed char)-21)), (-222882650)))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */unsigned short) (((+((-(222882629))))) < ((-(((/* implicit */int) (short)15379))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)45542)) >= (((/* implicit */int) (signed char)93)))))))) > ((+(var_4)))));
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 8; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            for (short i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) 168997776U);
                    var_14 = ((/* implicit */short) ((int) min((((/* implicit */unsigned int) (short)-15388)), (4294967281U))));
                    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-39))));
                    var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((short) 7145514257870292542LL))))));
                    var_17 = ((/* implicit */unsigned int) (+(min((222882649), (((/* implicit */int) ((unsigned short) (signed char)-82)))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */short) 222882650);
    var_19 = ((/* implicit */signed char) (short)15379);
}

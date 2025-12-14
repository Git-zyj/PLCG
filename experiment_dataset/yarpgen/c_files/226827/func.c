/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226827
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned char) 9622847592980595710ULL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) (_Bool)1);
                                arr_13 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_0] [i_4 - 2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)435))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))));
                                arr_14 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 15934162)) || (((/* implicit */_Bool) 1298162385U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_19 [(_Bool)1] [(unsigned char)7] [i_2] [i_0] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 2097088U))) ? (268435455) : (min((((/* implicit */int) (_Bool)1)), (-9477299)))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_5))))));
                }
            } 
        } 
    } 
}

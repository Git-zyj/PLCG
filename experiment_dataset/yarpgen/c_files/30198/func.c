/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30198
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
    var_19 &= ((/* implicit */int) (-(var_16)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                                var_20 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_18));
                                arr_13 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))));
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
                                var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) (_Bool)1))))));
                    arr_15 [i_1] [i_2] = ((((/* implicit */_Bool) 3662445524652183727ULL)) ? (((/* implicit */int) (unsigned short)55640)) : (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_16)))) ? ((+(var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                                var_24 = (+(var_7));
                                arr_22 [i_0 - 3] [i_1] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                }
                arr_23 [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4))))));
                var_25 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_6)), (var_18))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18)))))));
            }
        } 
    } 
}

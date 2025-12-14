/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238162
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
    var_12 = ((/* implicit */_Bool) ((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) var_2)), (var_11))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((2888243021U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (14U)));
                                var_14 &= ((/* implicit */_Bool) max((min(((signed char)-124), ((signed char)(-127 - 1)))), (((/* implicit */signed char) ((_Bool) (_Bool)1)))));
                                var_15 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_9)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)-32)))) : (((/* implicit */int) (short)-1)))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-22)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21304)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        var_16 |= ((/* implicit */_Bool) max(((signed char)24), (((/* implicit */signed char) (_Bool)0))));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] |= ((/* implicit */int) var_5);
                        var_17 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_1)))));
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_18 &= arr_18 [i_0] [i_1] [i_2] [i_6];
                        var_19 ^= 331494060;
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) ((signed char) arr_15 [i_0] [i_1] [i_2] [i_6]))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_24 [i_0] = ((/* implicit */signed char) ((_Bool) ((signed char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_21 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (2U)))), (min((((/* implicit */unsigned int) (signed char)112)), (var_9)))))));
                        arr_25 [15] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))));
                    }
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
}

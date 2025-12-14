/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203304
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_1 + 2] [i_1 - 1]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */long long int) var_0);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_6 [i_2]))))))) ? ((-(arr_9 [7U] [4LL] [i_2] [i_2] [i_1] [i_1 + 3]))) : (((/* implicit */unsigned long long int) (~((~(var_12))))))));
                                var_21 = ((/* implicit */long long int) (-(arr_9 [i_0] [0ULL] [i_0] [i_2] [i_3] [0U])));
                                var_22 = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */signed char) (~((((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_2] [(_Bool)1])) : (6857136))) - (229)))))));
                    arr_13 [i_2] = (unsigned short)25909;
                    arr_14 [i_2] = ((/* implicit */unsigned char) -6857152);
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)25909)) : (((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */int) var_13))))))));
    var_25 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) var_9)) | (var_12))) ^ (((/* implicit */int) ((signed char) var_1)))))));
}

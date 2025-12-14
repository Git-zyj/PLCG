/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27802
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
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((unsigned int) (unsigned char)198)) <= (min((var_4), (((/* implicit */unsigned int) var_2))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)30269))))));
    var_12 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((min((var_6), (3533467216U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [3U]))))) < (761500065U)));
                                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44363))))) ? (((((/* implicit */_Bool) ((signed char) (signed char)-36))) ? (((/* implicit */int) min(((unsigned short)22606), (((/* implicit */unsigned short) var_0))))) : (((arr_9 [i_0] [8LL] [(unsigned char)8] [i_2] [i_3] [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [(_Bool)1] [(signed char)8] [(signed char)8] [i_0])))))) : (((/* implicit */int) arr_0 [i_1]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((var_3) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned short)21172), (((/* implicit */unsigned short) arr_10 [i_2])))))))) / (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31384))) : (-6850224475114405216LL)))))));
                    var_15 = ((/* implicit */unsigned int) arr_6 [i_2] [i_0] [i_0] [(short)6]);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)0] [i_1] [i_2]))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_9))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_1);
}

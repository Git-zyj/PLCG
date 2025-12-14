/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189957
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)5)) : (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (signed char)-120)) : (var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((arr_1 [i_0]) ^ (((/* implicit */int) var_8)))) + (2147483647))) >> (((((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)28796)))) - (46)))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (unsigned char)250);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_4 [20ULL] [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned short)65533)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))))), (max((0U), (((/* implicit */unsigned int) (_Bool)1))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (signed char)0);
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)198)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_2])) != (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49510)))))))) : (((((/* implicit */int) (signed char)62)) >> (((((/* implicit */int) (unsigned char)91)) / (((/* implicit */int) (unsigned char)127)))))))))));
                                arr_16 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)119)) * (((/* implicit */int) (short)-4108))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_20 [i_5] [i_6])))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)18)) == (((/* implicit */int) (unsigned char)36))))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) min((arr_13 [8U] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned char) ((var_3) >= (var_0))))))) <= (((/* implicit */int) (signed char)88))));
                var_21 = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) 3531199253U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (463991174U)))), (min((var_12), (((/* implicit */long long int) (unsigned char)186)))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-32752)), ((unsigned short)0))))));
            }
        } 
    } 
}

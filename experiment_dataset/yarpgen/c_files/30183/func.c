/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30183
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */long long int) 1380979189U)) : (-2964119220324033706LL)))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2519118646U)) ? (((((/* implicit */_Bool) (unsigned char)57)) ? (var_8) : (((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */_Bool) (-(25165824U)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) var_5)) ? (2519118650U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? ((-(min((var_1), (((/* implicit */unsigned int) var_16)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                                var_22 &= ((/* implicit */unsigned long long int) min((2519118650U), (25165816U)));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_8))) << (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : ((+(var_5))))) : (max((((/* implicit */unsigned int) var_17)), (var_4)))));
                            }
                        } 
                    } 
                } 
                var_24 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) (unsigned char)121)) : (((((/* implicit */_Bool) 2519118646U)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)41349))))))), (max((((/* implicit */unsigned long long int) var_14)), (((var_13) - (((/* implicit */unsigned long long int) var_12)))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2519118650U)))) ? (max((((((/* implicit */_Bool) var_4)) ? (1775848661U) : (((/* implicit */unsigned int) var_17)))), (var_12))) : (((/* implicit */unsigned int) max((var_17), ((~(((/* implicit */int) (unsigned char)8)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 4; i_5 < 15; i_5 += 3) 
    {
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) min((var_7), (((((/* implicit */_Bool) (unsigned short)19011)) ? (var_8) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) var_16))))) << ((+(((/* implicit */int) (_Bool)1))))))) : ((-(max((var_11), (((/* implicit */unsigned long long int) var_17)))))));
                var_27 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1775848668U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_19))))) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) 2519118625U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (2519118645U))));
                var_28 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1775848644U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (1775848661U))), (((((var_8) != (1775848645U))) ? (min((25165824U), (((/* implicit */unsigned int) var_14)))) : (var_7)))));
            }
        } 
    } 
}

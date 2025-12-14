/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208961
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
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (4294967292U)));
                            var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                            var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    arr_13 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))) ? (4294967287U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1973048497U)) ? (var_2) : (((/* implicit */int) var_12)))))))));
                    arr_14 [i_0] [i_4] = ((/* implicit */int) var_8);
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) var_6);
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_2))));
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) (+(var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((2268420699U), (((/* implicit */unsigned int) ((unsigned short) var_10)))))) ? (((/* implicit */unsigned long long int) var_1)) : (max((var_0), (((/* implicit */unsigned long long int) var_14))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5418676648153024593ULL)) ? (((((/* implicit */_Bool) (unsigned short)54321)) ? (var_1) : (91570072))) : (((int) var_13)))))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        }
                        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_4))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))), (((/* implicit */unsigned int) var_7))))) ? (max((((((/* implicit */_Bool) 2064217234040526798LL)) ? (var_4) : (((/* implicit */long long int) 2268420707U)))), (((/* implicit */long long int) 144131539)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) (unsigned short)3467)) : (var_13))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_3))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_34 [i_10] [i_7] [i_6] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((var_10) ? (var_13) : (((/* implicit */int) (signed char)-15))))) : (((((/* implicit */_Bool) var_14)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))));
                            var_27 = ((/* implicit */signed char) 2268420699U);
                        }
                    }
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (-253653266)))))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) max((550076506U), (((/* implicit */unsigned int) -2007406443)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_30 = ((signed char) ((int) max(((signed char)-15), (((/* implicit */signed char) var_10)))));
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_10))));
                                var_32 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 29LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                                var_33 = ((/* implicit */long long int) min((var_33), (((((/* implicit */_Bool) max((((long long int) var_11)), (((/* implicit */long long int) var_16))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_9);
}

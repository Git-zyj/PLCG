/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19581
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_3)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))), (max((var_6), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_10))));
                    var_15 = (~(((/* implicit */int) var_11)));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = var_9;
                    var_17 = ((/* implicit */short) ((var_1) && (var_0)));
                }
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    var_18 = ((/* implicit */short) var_7);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_3), (((/* implicit */short) var_11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) min((var_0), (var_9))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((max((((/* implicit */signed char) var_11)), (var_4))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                }
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                    var_24 += (+(((/* implicit */int) ((signed char) var_8))));
                    arr_19 [i_0] [i_0] [i_1] [i_6] |= ((/* implicit */_Bool) var_5);
                }
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)180))))) ? (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (((long long int) var_10)))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_11)) >> (((/* implicit */int) var_0)))))))));
                arr_20 [i_0] [(unsigned short)7] = min((((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
        {
            {
                var_26 = ((/* implicit */signed char) ((unsigned long long int) var_9));
                var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_10), (var_11))))))));
                var_28 = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */signed char) var_9))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
}

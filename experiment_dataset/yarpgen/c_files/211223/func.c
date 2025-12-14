/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211223
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_4 - 2] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))), ((-(var_3)))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), ((+(((/* implicit */int) var_4))))))));
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((var_6), (var_6)))))) ? (max((min((((/* implicit */unsigned int) var_1)), (var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) var_4);
                    var_12 -= (-((-(min((var_3), (((/* implicit */unsigned int) var_8)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) var_9))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned int) var_1)), (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (min((var_2), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) (!(var_7))))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (var_2) : (var_2))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) : ((-(min((var_6), (((/* implicit */unsigned int) var_5)))))))))));
                                var_18 ^= ((/* implicit */signed char) var_7);
                                arr_35 [i_10] [i_11] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) max((var_7), (var_7))))))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_10))))))), (max((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))));
                            }
                        } 
                    } 
                    arr_36 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_6);
                    arr_37 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))), (((max((var_10), (var_5))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(var_7))))))));
                }
            } 
        } 
    } 
}

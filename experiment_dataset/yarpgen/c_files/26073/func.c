/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26073
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
    var_10 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-11086))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    }
    for (short i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 6; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_2] = (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                    arr_13 [i_1] = ((/* implicit */short) ((signed char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)22207)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2] [i_4] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)554)))))))));
                                arr_21 [i_1] [i_1] [i_1 - 3] [i_1] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-13241)))))))) ? (max((((/* implicit */unsigned long long int) 4LL)), (((unsigned long long int) -1735433155816323416LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((+(var_9))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                                arr_22 [i_5] [9] [i_3] [i_2] = ((short) (~(min((-2569082026572041197LL), (-2435594861175665129LL)))));
                                arr_23 [i_1] [i_2] [(unsigned char)6] [i_2] [i_2] = ((((/* implicit */_Bool) (~(-6071530561535437147LL)))) ? (min((var_2), (2435594861175665128LL))) : (((((/* implicit */_Bool) -5373622660121752658LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                arr_24 [i_5] = (-(((((/* implicit */_Bool) min(((unsigned char)48), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-40)), ((short)-30758)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)78))))))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12474)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21689)) ? (((/* implicit */int) (short)-2224)) : (((/* implicit */int) (unsigned char)63))))) ? (var_9) : (((long long int) (signed char)-59)))) : (((((/* implicit */_Bool) (short)14336)) ? (-2569082026572041197LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
        var_11 = ((long long int) (-(min((((/* implicit */long long int) (_Bool)1)), (var_4)))));
    }
}

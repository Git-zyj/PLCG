/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23804
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) << (((arr_3 [i_0] [i_0 - 1]) - (8893382797013516828LL))))) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */int) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 801554633774803332LL))))))));
                        arr_12 [i_0 - 2] [(_Bool)1] [(unsigned short)3] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2 - 1]))));
                        var_13 = ((/* implicit */long long int) ((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_8))) / (((/* implicit */unsigned long long int) ((int) (short)-1)))));
                    }
                    arr_13 [i_0] [i_0] [i_1 + 1] [i_1] = ((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) >> (((-2446594270451295417LL) + (2446594270451295437LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (801554633774803332LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((2323767663U), (((/* implicit */unsigned int) (unsigned char)44))))) ? ((-(1971199632U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) (_Bool)0)))))))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) var_4))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_16 = ((/* implicit */unsigned char) max((var_11), (1916229575)));
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (max((((((/* implicit */int) (unsigned char)211)) / (((/* implicit */int) (unsigned short)12608)))), (2147483625))) : (((((/* implicit */int) ((signed char) var_10))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))))));
}

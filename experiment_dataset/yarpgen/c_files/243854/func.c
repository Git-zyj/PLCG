/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243854
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
    var_15 = ((/* implicit */unsigned char) (+(var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((7052652440223941554LL), (((/* implicit */long long int) (unsigned char)206))))) ? (((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)12] [(unsigned char)1] [i_1] [i_1]))) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) == (var_14))))))));
                                arr_12 [i_0] [i_1] [9LL] [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_8 [(unsigned short)17] [16] [(unsigned short)17] [i_4])) & ((~(16757342050417616253ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)220), ((unsigned char)212)))) << (((/* implicit */int) arr_7 [(unsigned char)18] [i_0] [i_2] [i_0] [i_1] [i_0])))))));
                                var_17 &= ((/* implicit */unsigned char) var_10);
                                var_18 = ((/* implicit */short) (unsigned char)21);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)29)), (arr_4 [i_0] [0] [i_0] [18])))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))), (arr_8 [i_0] [15LL] [(unsigned short)2] [(unsigned short)2]))) : (arr_8 [i_1] [i_1] [(unsigned short)0] [i_0]));
                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((var_8) << (((((/* implicit */int) var_1)) - (52))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((var_7) + (9223372036854775807LL))) << (((max((-1613932946007458553LL), (((/* implicit */long long int) (unsigned char)204)))) - (204LL)))))));
                arr_14 [i_0] [i_0] [17] = ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_0])), ((unsigned char)194)))), (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) arr_10 [i_0]))))));
                var_20 -= (unsigned char)37;
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_11);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232530
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2 - 1])))))))) << (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 &= ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) >= (7400755949024859311LL)))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_15 = (+(((/* implicit */int) var_2)));
                        arr_13 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) 6748670718220867654ULL);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 2] [i_4 - 2])) ? (arr_14 [i_0] [i_0] [i_2 + 1] [i_2] [i_0] [i_4]) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43423))) - (arr_8 [i_0] [i_0] [i_2])))));
                        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [6] [i_1] [i_4])))))) & (arr_7 [i_0 + 3] [(_Bool)1] [i_2 + 3] [i_4])));
                        arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0 - 1])) % (((/* implicit */int) arr_9 [i_0] [i_0 + 1]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((0) << (((1187908775801136549LL) - (1187908775801136524LL)))))), ((+(max((((/* implicit */unsigned long long int) (unsigned char)31)), (arr_2 [i_1])))))));
                        arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-24))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)43412))))));
                    }
                    arr_22 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 14; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned short) min(((unsigned char)236), (var_0)));
                var_20 |= ((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) >> (((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) - (2306697542U)))));
            }
        } 
    } 
}

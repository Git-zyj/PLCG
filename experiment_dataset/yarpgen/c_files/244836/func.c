/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244836
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15091)) ? (((/* implicit */int) (unsigned short)50452)) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned short)9941))))))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)50445))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)32))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)45)) - (45)))))) ? (((((((/* implicit */int) (unsigned char)209)) / (((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_0))))));
                                arr_12 [(unsigned char)9] [i_0] [(unsigned short)4] [i_0] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (unsigned char)54))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))) << (((((/* implicit */int) var_9)) - (27256))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned short)15091))))));
                                arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_7))) << (((((unsigned long long int) (unsigned char)128)) - (107ULL)))));
                                var_13 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 13587033884636730604ULL))))), (var_10));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) ((unsigned short) min((max((var_6), ((unsigned short)51267))), (var_8))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_2))) << (((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)173)))) - (393)))))) > (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_5))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53248)))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17108295639123169051ULL)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)13928)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) - (var_5)))));
                    arr_26 [(unsigned short)0] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11172546543294384436ULL)) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)73))))));
                }
            } 
        } 
    } 
    var_18 = var_2;
}

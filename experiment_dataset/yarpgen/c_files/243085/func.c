/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243085
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [(unsigned short)16] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-103)))) : (((int) arr_11 [i_1] [i_4]))));
                                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_3);
                                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3444358041U))))) >> (((((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0]) : (arr_10 [i_0] [i_1] [i_2] [i_1] [(signed char)11]))) - (201754924989533196LL)))));
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))));
                }
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17574)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (short)-32257))))) % (var_2)));
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) min((3444358041U), (((/* implicit */unsigned int) (short)-32257))))) <= (15612214318673786866ULL))))));
                }
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)205)) - (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */unsigned long long int) 1554926395U)) : (15612214318673786878ULL)))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (short)-32257)) / (((/* implicit */int) (short)28024))))))) : (max((min((((/* implicit */long long int) var_3)), (arr_8 [i_0]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 849756873)), (3095040428U))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_24 [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) >> ((((-(var_1))) - (3813397155341055317LL)))))) ? (max((var_0), (((/* implicit */unsigned int) arr_18 [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53834)) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6]))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((long long int) (-(753822325753688875ULL)))))));
                                var_15 = ((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned long long int) arr_26 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_8] [i_6])))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_26 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_8] [i_8])), (var_5))))));
                                arr_29 [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */signed char) (unsigned short)1983);
                            }
                        } 
                    } 
                    var_16 = (-(((((/* implicit */_Bool) var_0)) ? (((2834529755035764750ULL) + (((/* implicit */unsigned long long int) 1465984813U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (short)14877)) : (var_3)))))));
                    arr_30 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)32267)) ? (((/* implicit */int) arr_0 [14ULL] [i_7])) : (((/* implicit */int) var_7))))))) ? ((-(15903850653116844590ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((8LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32272)))))) + ((+(((/* implicit */int) (short)32266)))))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25442
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_10 ^= ((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2]);
                                arr_14 [(unsigned short)3] [i_1 + 1] [(_Bool)1] [0U] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_12 [i_0]))))) - (((/* implicit */int) (short)-13963))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_7))));
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_3))));
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_6] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)9] [i_2]))) * (1048575LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 268435456)) * (var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 520093696U)) ? (((/* implicit */int) (short)9167)) : (((/* implicit */int) var_0))))) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2050240493)), (1099377410048LL)))))) : (((arr_15 [i_2] [i_1 + 1] [i_1 - 1] [i_6] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) : (arr_12 [i_2]))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) arr_7 [i_0]))))) : ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6]))))))) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))))))));
                        var_14 = ((/* implicit */short) min((var_14), ((short)1023)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [5] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (-1629993108)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2])), ((unsigned short)23054)))) : (((/* implicit */int) ((unsigned short) 451027745))))) - (max((max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_7]), (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_1))))))));
                        arr_23 [i_0] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_15 [i_0] [i_1 - 1] [i_0] [i_1] [i_1 - 1])), (arr_21 [1LL] [i_0])))), (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) : (5836466909571439410ULL)))));
                    }
                    var_15 = ((/* implicit */long long int) max((arr_5 [i_0] [i_1 - 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-73)) && (((/* implicit */_Bool) arr_20 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0] [i_1] [i_1 - 1])))))));
                    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) 
                {
                    var_17 = ((/* implicit */long long int) arr_24 [i_1] [i_8 + 1]);
                    var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_16 [i_8 - 2] [i_1] [i_1] [i_1 - 1])) ? (arr_16 [(_Bool)1] [i_8] [i_8] [i_1 - 2]) : (arr_16 [i_1 - 1] [i_1] [i_1] [i_1 - 2])))));
                }
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0] [i_0] [i_1 - 2] [i_0]))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0] [i_1 - 2])), (var_0)))) ? (max((9ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)0] [i_1] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))))))));
                var_20 = ((((8762758971506856510LL) << (((((/* implicit */int) (unsigned short)17540)) - (17540))))) <= (((/* implicit */long long int) (~(3328153818U)))));
            }
        } 
    } 
    var_21 += ((/* implicit */short) var_7);
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_9)), (var_8))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) var_8)) : (max((var_7), (((/* implicit */unsigned int) var_2))))))));
}

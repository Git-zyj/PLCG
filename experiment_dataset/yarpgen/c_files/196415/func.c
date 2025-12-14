/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196415
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
    var_14 = ((/* implicit */short) ((unsigned short) 1020U));
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 17919326091869640582ULL)) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned short)62752)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-32747)) && ((_Bool)0))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1020U)))))))) : ((~(min((0U), (3463396658U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [(short)16] [i_4] [i_1] [i_4] [i_4] &= ((/* implicit */unsigned char) 2596321200U);
                                arr_14 [i_4] [i_2] [i_4] [i_4] [i_1] [i_0 - 3] = ((/* implicit */short) min((1047U), (1310125093U)));
                                arr_15 [i_0] [i_1] [i_4] [i_2] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) var_10);
                                var_17 = ((((/* implicit */_Bool) min((2717912450U), (((/* implicit */unsigned int) (unsigned short)62752))))) ? (((((((/* implicit */int) arr_10 [i_0] [i_4] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1])) != (((/* implicit */int) (unsigned char)3)))) ? (min((1698646095U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_4] [i_0 - 3] [i_1] [i_2 + 2] [i_2 + 1]))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [(short)21])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10)))))))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned long long int) max((1698646115U), (max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_6))))), ((~(var_0)))))));
                    arr_16 [i_2] [i_1] [i_1] [i_0 - 3] &= ((/* implicit */unsigned char) var_0);
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 4] [i_0 - 4] [i_2] [i_2] [i_2] [i_1] [i_0 - 3]))) : (1139762366U)))) ? (((((/* implicit */_Bool) (short)-29134)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) arr_12 [i_2 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 4] [(unsigned char)13] [(unsigned char)13]))))) ? (((unsigned int) 2596321200U)) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58538))))) ^ (4294967295U)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) 1701341257U)))) ? (((((/* implicit */_Bool) (short)24584)) ? (((/* implicit */int) (unsigned short)41316)) : (((/* implicit */int) (unsigned char)19)))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) max(((unsigned char)6), ((unsigned char)255)))) ? ((+(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)21))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))))))));
}

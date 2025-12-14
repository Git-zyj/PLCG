/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195437
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned int) arr_4 [i_1]);
                    var_12 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -142952235)) ? (17733846270213820714ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */unsigned int) arr_6 [14U])) : (arr_2 [i_1])))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [15] [i_1] [i_5] [i_5] = ((/* implicit */int) var_2);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-7644)), (var_4)));
                            }
                        } 
                    } 
                    var_13 = (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) * (((unsigned int) 13644640147554675071ULL)))));
                }
                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (arr_8 [i_0] [i_0] [i_1])));
                arr_16 [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) var_10)), (9206286893762302369ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)210)), (var_3)))))) << (((min((var_7), (((/* implicit */unsigned long long int) var_3)))) - (1878282806ULL)))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_1))))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2675358117U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187)))))) || (((((/* implicit */int) var_2)) < (((/* implicit */int) var_0)))))))));
}

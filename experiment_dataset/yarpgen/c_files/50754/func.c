/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50754
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
    var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4504)) ? (((/* implicit */int) (unsigned short)45753)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1460296815)))) ? (((12718741574250428490ULL) / (6702050066212638943ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8191)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) 2096213534U);
                                arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) (~(2198753778U)));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2 - 1]))));
                    var_14 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2])))) & (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2])) / (((/* implicit */int) (unsigned short)36867))))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) > (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))))));
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((-54799921) / (arr_11 [i_5] [i_5] [i_5] [i_1] [i_1] [i_1] [i_0])))) > (max((30533514U), (((/* implicit */unsigned int) (unsigned char)66)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) > (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) & (4035225266123964416ULL))))))));
                    var_17 = ((/* implicit */unsigned short) (~(-1)));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 ^= (((-(((12U) / (2096213519U))))) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 365777588961068484ULL)) ? (((/* implicit */int) (unsigned short)28687)) : (((/* implicit */int) arr_10 [i_7] [i_6] [i_5] [i_1])))) & (arr_3 [i_5] [i_7])))));
                                arr_21 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) (~(arr_2 [i_0])))) : (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_7]))) : (2096213534U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)67)) & (arr_4 [i_0] [i_5] [i_6])))))))));
                            }
                        } 
                    } 
                }
                arr_22 [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) (-(2147483630))))), (min((min((var_1), (((/* implicit */unsigned int) (signed char)63)))), (((/* implicit */unsigned int) var_4))))));
}

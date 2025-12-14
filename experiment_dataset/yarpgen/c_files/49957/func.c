/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49957
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((+(arr_5 [i_0 - 3] [i_0 - 1] [i_0 - 3]))) & (arr_5 [i_0] [i_0 - 4] [i_0 - 4])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((max((arr_0 [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (unsigned short)41847)) : (((/* implicit */int) (_Bool)1))))))) <= (3027144681U)));
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 3820135509U))));
                                arr_14 [i_0] [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [(unsigned short)8] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)45)) ? (3027144709U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24102)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)0)))))))) ? (max((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_9 [i_2] [8LL] [8LL]) : (((/* implicit */unsigned long long int) 5085027222590847761LL)))), (((/* implicit */unsigned long long int) (signed char)-86)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))));
                }
                for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    var_14 += ((/* implicit */signed char) ((((-5LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0 - 3])))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)98)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) min(((unsigned short)20140), (((/* implicit */unsigned short) (short)-32341))))) : (((/* implicit */int) ((unsigned short) 127))))))));
                }
            }
        } 
    } 
}

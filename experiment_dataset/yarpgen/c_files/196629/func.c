/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196629
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_10)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) max((((arr_0 [i_0]) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (unsigned short)15))))) : (((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) & ((~(6108518838279900675LL))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_2 - 1] [i_1] [i_0] |= ((/* implicit */short) ((8456194844793868466ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2897543390U))))))));
                                arr_13 [i_4 + 1] [i_1 - 2] [i_2] [12ULL] [i_4 + 1] = ((/* implicit */short) (-(((-6108518838279900675LL) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 3] [i_1 - 2] [i_1 - 1] [i_1 + 1])))))));
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2 + 4]))))) || (((var_16) >= (var_5)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37))))) * (1221816280U)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_0 [i_0]) ? (1307492497U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1])))))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-6108518838279900655LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_6])), (arr_18 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) arr_15 [i_5]))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (unsigned short)65535))));
            }
        } 
    } 
}

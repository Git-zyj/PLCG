/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203545
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 |= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9191961933853763463ULL)) ? (((/* implicit */int) (short)-28129)) : (((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */signed char) arr_1 [13U]);
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [9] [i_2 + 1] [i_3 - 2] [i_4 - 2]))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) -795535117)) : (133858353U))) : (((max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [15ULL] [i_0] [i_0])), (var_8))) << (((((((/* implicit */_Bool) 570249205U)) ? (((/* implicit */long long int) 910463232U)) : (var_4))) - (910463218LL)))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) -1093560709)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3724718090U))))));
                                arr_11 [17] [i_1] [i_1 - 4] [5LL] [i_2] [i_1 - 4] [i_1 - 4] = ((/* implicit */unsigned int) arr_4 [i_3 - 2] [i_1 - 4]);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)210)) ? (5237704418892346748ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (short)-26631)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_1] [(signed char)15] [i_4 - 2])) : (((/* implicit */int) arr_10 [i_0] [(signed char)6] [i_0])))))))));
                            }
                        } 
                    } 
                    var_15 &= 4238668307U;
                    var_16 += ((/* implicit */signed char) (~(max((arr_1 [i_2 - 2]), (var_6)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((int) arr_9 [i_7] [i_7] [3] [i_5] [i_0])))) ? (min((3408316797U), ((~(570249205U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)18742)) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_1 [i_5]))) - (3829467425U))))))));
                        var_18 = ((/* implicit */signed char) ((unsigned int) max((arr_9 [i_5 + 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7]), (((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_0))));
                arr_25 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_4 [i_8] [i_8]), (((/* implicit */unsigned char) arr_3 [i_8] [i_8] [(signed char)20])))))));
            }
        } 
    } 
}

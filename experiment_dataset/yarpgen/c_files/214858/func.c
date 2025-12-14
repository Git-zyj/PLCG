/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214858
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((34902897112121344LL), (((/* implicit */long long int) var_5))))) ? ((-(-4107099110422904340LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (8388544LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3711891477U))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */_Bool) (signed char)-4);
                    var_13 = ((/* implicit */long long int) (~(-2136102473)));
                    var_14 = ((/* implicit */long long int) max((var_14), ((-(((long long int) -4107099110422904340LL))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 1471591651U)))) && (((/* implicit */_Bool) (-(var_8)))))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) var_9);
                        var_17 = ((/* implicit */_Bool) arr_17 [i_3 - 1]);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_8 [14U] [i_3]))));
                        arr_21 [i_3] [i_3] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3 - 1])) ? (((/* implicit */int) arr_17 [i_3 - 1])) : (((/* implicit */int) arr_17 [i_3 - 1]))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((int) var_4));
                        var_20 ^= ((/* implicit */short) (signed char)-113);
                    }
                    var_21 *= ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-32494)), (-2023143292)))) && (((/* implicit */_Bool) (unsigned char)54))))), (arr_16 [i_3 - 1] [i_3 - 1] [i_5])));
                }
            } 
        } 
    } 
}

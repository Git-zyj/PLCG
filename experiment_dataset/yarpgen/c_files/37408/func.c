/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37408
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) (~(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))));
                    var_13 = ((/* implicit */unsigned int) ((long long int) ((var_0) || (((/* implicit */_Bool) min((1356467469), (var_8)))))));
                    var_14 *= ((/* implicit */long long int) min((var_11), (((/* implicit */short) ((min((var_6), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_2])))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    var_15 = ((unsigned char) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((unsigned long long int) (+(var_2))));
                                var_17 = ((/* implicit */_Bool) min((arr_7 [i_0] [i_3 + 2] [i_2] [15ULL]), (min((arr_7 [i_0] [i_3 + 1] [i_2] [i_3 + 1]), (arr_7 [i_0] [i_3 + 2] [(unsigned char)15] [i_3 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = (-(var_8));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((long long int) ((-9223372036854775800LL) / (-819203420251426611LL))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
                }
            } 
        } 
        var_21 = var_7;
        var_22 = ((/* implicit */short) 9223372036854775806LL);
    }
    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
}

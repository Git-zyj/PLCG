/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189761
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
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(unsigned short)9] [9] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1])) != (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2])))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((max((((/* implicit */unsigned long long int) (unsigned short)51111)), (var_3))) == (max((9736227972685441564ULL), (((/* implicit */unsigned long long int) 1)))))));
                    var_22 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((int) arr_8 [i_2] [i_1]))), (((((/* implicit */_Bool) (unsigned short)14444)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14444))) : (arr_13 [i_1] [1] [i_1] [(unsigned short)10])))))));
                }
            } 
        } 
        arr_14 [i_1] = arr_10 [i_1];
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (var_5)));
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_20 [i_4] [i_4] [i_7])))) ^ ((+(((((/* implicit */_Bool) (unsigned short)63720)) ? (arr_6 [i_4] [i_4]) : (((/* implicit */int) arr_8 [i_4] [i_5]))))))));
                            arr_27 [i_4] [i_4] [i_6] [i_5] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9066667452063677387LL))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) ((unsigned short) min((max((((/* implicit */unsigned long long int) arr_26 [i_4])), (arr_13 [0U] [i_5] [i_4] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))))));
            }
        } 
    } 
    var_26 = var_18;
}

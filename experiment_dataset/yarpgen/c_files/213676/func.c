/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213676
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
    var_11 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = max((((/* implicit */long long int) (_Bool)0)), (-4091037644670853009LL));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))) / (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))))));
        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) + (((/* implicit */int) min(((unsigned char)147), (((/* implicit */unsigned char) (_Bool)1)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) | (376700114U)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) ((_Bool) (_Bool)0))))) <= (((/* implicit */int) (unsigned char)187))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_3))));
    }
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0)))) <= (max((arr_7 [i_1 + 1]), (((/* implicit */unsigned long long int) var_3))))));
        var_15 = ((/* implicit */long long int) ((unsigned int) arr_5 [i_1 - 4] [i_1]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16011788810077119828ULL)))) ? (arr_6 [i_1 - 3]) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
            var_17 += ((/* implicit */short) ((unsigned char) var_5));
            arr_12 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17978))));
        }
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            arr_17 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)1) || ((_Bool)1)))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-60))))))) || (((/* implicit */_Bool) var_0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((unsigned short) arr_22 [i_1] [i_3] [i_4 + 1] [i_5 + 2] [i_6] [i_4]));
                            var_19 -= ((/* implicit */signed char) (~(arr_21 [i_3] [i_3] [i_3 + 1])));
                        }
                    } 
                } 
                arr_25 [i_1 - 2] [i_3] [i_4 + 2] [i_4] = ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((2275458657U) - (((/* implicit */unsigned int) var_7)))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_20 = ((/* implicit */signed char) (+(var_8)));
                arr_28 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((unsigned long long int) (_Bool)1))));
            }
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26659
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
    var_10 = min((var_9), (((((/* implicit */_Bool) ((((/* implicit */int) (short)5419)) + (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : ((~(var_6))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0)))));
                                var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_1]))))) ? (max((1669585187U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_1] [i_3 + 1] [i_0] [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 1317070706)) : (1162616549311875658LL))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) - (4294967295U)))))))));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_12 [(short)11] [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) (unsigned short)65535))))), (arr_13 [i_0] [i_1] [i_0]))))));
                                var_13 = ((/* implicit */short) (unsigned short)65535);
                                var_14 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) -7384289519735730854LL))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_30 [i_7] [i_6] [i_7] = ((/* implicit */signed char) (-((+(arr_0 [i_5])))));
                                arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30108)) ? (var_7) : (((/* implicit */int) (short)-30108))))) ? (((/* implicit */long long int) (+(var_9)))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_6))))))) ? (506654132) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31669))))) >= (((((/* implicit */int) (unsigned short)65522)) % (((/* implicit */int) arr_9 [i_6] [i_6] [i_7] [i_8])))))))));
                                var_16 += ((/* implicit */unsigned short) min((((/* implicit */int) arr_15 [i_8] [i_6] [i_8] [(unsigned short)0])), (min(((((_Bool)1) ? (((/* implicit */int) arr_9 [i_6] [i_7] [i_6] [(unsigned char)0])) : (506654132))), ((-(arr_0 [i_5])))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
                var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned short)65535)), (((((/* implicit */long long int) ((/* implicit */int) (short)30107))) | (88192080016495932LL))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_6] [i_5] [i_5] [i_6])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)4096)), ((unsigned short)46973)))) : ((+(((/* implicit */int) (unsigned short)5893)))))))));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

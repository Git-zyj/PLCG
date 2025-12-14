/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214888
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) ((_Bool) var_7))))) ? (((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) + (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) var_17)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = (!(((/* implicit */_Bool) var_3)));
                var_20 = ((/* implicit */long long int) min((((((-1077991878) + (2147483647))) >> (((var_6) - (6616894470658948052ULL))))), (((((/* implicit */int) var_1)) / (((/* implicit */int) ((signed char) -2972902988358175113LL)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_2 - 1])) ? (arr_6 [i_0 + 3] [i_2 + 1]) : (arr_6 [i_0 - 1] [i_2 + 1]))), (((/* implicit */int) ((_Bool) var_8)))));
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_16)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_5] [3U] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_10))), (2972902988358175135LL))));
                            var_23 = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_16))))), (((/* implicit */long long int) var_9)));
                            var_24 -= ((/* implicit */signed char) ((_Bool) ((signed char) ((3658256254U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            arr_18 [i_5] = var_1;
                        }
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (var_6)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (4862642257867999432ULL)))) ? ((+(((((/* implicit */_Bool) arr_20 [i_8])) ? (12042818520498017950ULL) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (511U))))))));
                    var_25 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) 0U))))))) * (((/* implicit */int) ((unsigned char) ((var_6) + (((/* implicit */unsigned long long int) arr_25 [i_7])))))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_14))) != (((-1) & (((/* implicit */int) arr_24 [i_9] [i_8] [i_7])))))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34359
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (505303087U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (var_15))))));
                var_21 = ((/* implicit */unsigned short) 3789664227U);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_2] [5U] [i_0] = ((/* implicit */unsigned short) var_8);
                            var_22 = ((/* implicit */unsigned long long int) (unsigned short)16301);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) max((-8406747518495422683LL), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) == (((/* implicit */int) (short)4)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45036))))) : (((/* implicit */int) arr_19 [i_4] [(short)22] [i_4] [i_4])))) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (short)-13115))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) arr_13 [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */short) (unsigned char)218);
                                var_26 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_14 [i_4] [i_8 - 4])))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_23 [i_4] [(unsigned short)4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51255))) - (268435454U)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_17))))) + (((/* implicit */unsigned long long int) ((int) 68717379584LL)))));
        arr_26 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_22 [24] [i_4] [18LL] [i_4] [i_4])))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_27 [i_4] = 2015270819U;
    }
}

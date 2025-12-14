/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40468
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) var_6);
        var_16 = ((/* implicit */unsigned short) ((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_6 [1LL]))) & (min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (var_9)))) || (((/* implicit */_Bool) 0LL)))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_12 [i_0] [13LL] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((3359876597U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172)))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 193718762U)) ? (((((((/* implicit */int) var_6)) + (((/* implicit */int) arr_4 [i_0] [i_0] [12U] [i_0])))) % (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_6 [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 0U)))) < ((+(0U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned int) (+(((/* implicit */int) min((((arr_13 [12U] [(unsigned short)14] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))), (((((/* implicit */_Bool) 193718741U)) || (((/* implicit */_Bool) var_8)))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (2695440227U)))) ? (((((/* implicit */_Bool) max((13799500461819670787ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (3993722749U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)138)) <= (((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [i_0] [(short)0])))))))))))));
    }
    var_23 = ((/* implicit */unsigned int) var_8);
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)-14211))))) & (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((var_7) ? (var_10) : (var_0)))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) var_11)) : (7629056866844149244ULL))))) : (((/* implicit */unsigned long long int) var_11)))))));
}

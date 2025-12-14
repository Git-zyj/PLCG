/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199702
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 7230663754051245344ULL))) + (var_13)))) ? (max(((-(var_3))), (((/* implicit */unsigned long long int) ((var_5) == (var_5)))))) : (var_15)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 2147483647)) ? (var_14) : (((/* implicit */unsigned int) arr_3 [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0 + 1]))))));
                var_19 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_3 [i_0])))));
                arr_6 [11LL] [0ULL] [11LL] = ((/* implicit */_Bool) (~(11216080319658306266ULL)));
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)16))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((int) var_2)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_1 + 1])), ((short)11564)))) || ((!(((/* implicit */_Bool) (-(11216080319658306289ULL))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_1 [i_0]))));
                                var_24 ^= ((/* implicit */_Bool) ((int) ((min((var_3), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 + 1])))) & (((var_15) ^ (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3])))))));
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? ((+(var_3))) : ((+(11216080319658306254ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_3] [i_3] [i_1 + 1] [i_3])), (((short) var_13))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 -= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54681))))) != (((/* implicit */int) ((11216080319658306246ULL) <= (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))))));
    var_26 = ((/* implicit */unsigned long long int) var_0);
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-8742))));
}

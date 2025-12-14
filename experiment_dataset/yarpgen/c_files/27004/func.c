/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27004
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), (max((min((arr_0 [i_0] [i_0]), (((/* implicit */int) (unsigned short)27134)))), (max((2147483647), (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max(((~(arr_0 [i_0] [i_0]))), (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) + (201326592))))))))));
        var_19 = ((/* implicit */_Bool) var_10);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) ? (((((/* implicit */_Bool) var_16)) ? (-2147483632) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_1]))))) ? ((-(var_7))) : (((/* implicit */long long int) (-(-806124727))))));
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) var_2)) % (((int) arr_1 [i_1]))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))));
        var_22 ^= ((/* implicit */short) (_Bool)1);
        arr_5 [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (423954572) : (((/* implicit */int) arr_1 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) var_5))))) ? (((int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)86))))) : ((-(((/* implicit */int) (unsigned char)21))))));
        arr_9 [1ULL] [i_2] = ((/* implicit */_Bool) max(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_7 [i_4] [i_3])) : (var_7)))) ? (((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_14 [i_3] [i_4] [i_5] [i_3]))))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -2147483645)) ? (9223372036854775807LL) : (((/* implicit */long long int) -2147483637)))) : (((/* implicit */long long int) -1607606533))));
                                arr_24 [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_2])), (max((arr_10 [i_4]), (arr_10 [i_2])))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((_Bool) ((var_7) | (((/* implicit */long long int) 2147483617))))))));
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((_Bool) arr_19 [i_3] [i_2])) ? (min((2147483644), (((/* implicit */int) (short)-7310)))) : ((+(var_6)))));
                }
            } 
        } 
    }
    var_27 = ((unsigned char) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (unsigned short)23826)) ? (((/* implicit */int) var_12)) : (1985845923)))));
}

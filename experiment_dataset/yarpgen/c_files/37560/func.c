/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37560
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_8)))) * (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_10)) : ((~(var_13)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_2 [i_2] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)18] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) -5820850932091047514LL))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_3 [i_2 + 1] [i_1] [i_0]))) ? (((((/* implicit */_Bool) ((arr_0 [7] [7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : ((+(1426714693697787980ULL))))) : (((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21599))))))));
                        var_15 = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (max((((((/* implicit */_Bool) arr_9 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_0 [i_2 + 2] [i_0]))))))));
                        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), ((((-(var_6))) / (max((arr_9 [i_2] [i_2]), (((/* implicit */long long int) var_1))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 2] [(short)22])) && (((/* implicit */_Bool) (short)-1538)))))));
                        var_18 = (_Bool)1;
                        var_19 = arr_3 [i_1] [i_2] [i_1];
                        var_20 = ((/* implicit */short) (-((-(4057084982253128651LL)))));
                        var_21 = min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (288230376151711744ULL))) * (((/* implicit */unsigned long long int) arr_12 [i_4] [i_2 + 1] [i_4] [i_2 + 2] [i_2 + 1])))), (((/* implicit */unsigned long long int) -488929533379013059LL)));
                    }
                    var_22 = min((((/* implicit */long long int) (~((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_0]))))))), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) : (((((/* implicit */_Bool) var_8)) ? (5768014142877804786LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [19]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
}

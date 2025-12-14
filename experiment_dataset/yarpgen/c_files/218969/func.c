/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218969
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
    var_12 *= max((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) > (var_2))) ? (var_0) : (((/* implicit */unsigned long long int) -752700011)))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_6)) == (17378336949720696418ULL))) ? ((~(var_10))) : (((/* implicit */int) var_11))))));
    var_13 *= ((unsigned int) ((((/* implicit */_Bool) 924094067U)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (var_5))))));
    var_14 *= var_9;
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)58)), (439548918)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    arr_8 [6U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (-8498479594356228270LL) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) (short)-28296)) : (var_5))))));
                    var_16 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1125406143U))))), (min((var_7), (((/* implicit */unsigned long long int) var_2))))))));
                    arr_9 [i_0] [(unsigned char)4] [i_2] [(unsigned char)4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4629385409361036102LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42585))) : (arr_1 [i_0 + 1])));
                    var_17 += ((/* implicit */unsigned char) (+(2539929076960323158ULL)));
                }
                arr_10 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) (-((~((-(((/* implicit */int) (unsigned char)96))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */short) var_3);
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((short) ((unsigned long long int) max((var_9), (((/* implicit */unsigned int) (unsigned char)187)))))))));
                            var_20 += ((_Bool) (((!(((/* implicit */_Bool) (signed char)64)))) ? (((/* implicit */int) (short)27645)) : (((int) (unsigned char)152))));
                        }
                    } 
                } 
            }
        } 
    } 
}

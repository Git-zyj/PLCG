/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190010
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) -1215964408))));
        var_13 |= ((/* implicit */long long int) arr_1 [0LL]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((unsigned int) (-(var_0))));
        arr_4 [i_1] = ((/* implicit */unsigned char) max((min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) arr_6 [i_2] [i_2]);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((18446744073709551583ULL) >> (((/* implicit */int) (_Bool)1)))))))));
                    var_16 = (unsigned char)227;
                    var_17 ^= ((/* implicit */unsigned short) 12ULL);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) 44ULL))))) >> ((((~(((/* implicit */int) arr_10 [i_2])))) + (49734)))));
                                arr_19 [i_2] [13] [13] [i_5] [2] = var_5;
                                var_19 ^= ((/* implicit */signed char) arr_9 [i_4] [i_4]);
                                arr_20 [i_3] [i_3] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) 18446744073709551598ULL)) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1])), (max((((/* implicit */int) (unsigned char)227)), (var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */signed char) -4001160326308960276LL);
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 1850083864179688400LL)) ? (11ULL) : (((/* implicit */unsigned long long int) -1513920293)))));
    }
    var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) -1LL)), (12830711334411688718ULL))) << (((var_2) - (8624765317089944195LL))))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (12830711334411688702ULL)));
}

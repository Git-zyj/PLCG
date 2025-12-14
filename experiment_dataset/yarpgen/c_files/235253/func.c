/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235253
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_0);
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_3)) >> (((((var_11) >> (((var_13) - (252826489890510041ULL))))) - (350515672459486ULL))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10865))) : (5202303611166076386LL))))));
                                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_19)))));
                                arr_12 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(var_5))) && (((/* implicit */_Bool) var_14))))) ^ ((-(((((/* implicit */int) var_7)) & (var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (5202303611166076386LL) : (-5202303611166076376LL)))) / (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        var_24 = ((/* implicit */short) (+((-(((/* implicit */int) var_8))))));
        var_25 -= ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))));
    }
}

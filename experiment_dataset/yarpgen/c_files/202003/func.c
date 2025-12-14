/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202003
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
    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) var_17))))))) ? (((((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) (unsigned short)2282))))))) : (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_3)))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)98)) && (((/* implicit */_Bool) arr_3 [i_1 + 1]))))))))));
                                arr_16 [i_0] [i_1] [i_0] [i_1 + 2] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_2 [i_0]))))) == (((((/* implicit */_Bool) (unsigned short)10546)) ? (-5763542957557797431LL) : (-6816305779098553982LL))))) ? (((((/* implicit */int) var_18)) >> (((((/* implicit */int) (unsigned char)103)) - (86))))) : (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned char)94)))) : (((/* implicit */int) (!((_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned short) max((((int) (unsigned short)30720)), (((/* implicit */int) ((((/* implicit */int) (signed char)6)) != (((/* implicit */int) (unsigned char)109)))))));
                arr_18 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (((unsigned int) -2381451160862885235LL))));
                arr_19 [i_0] [i_1] [i_0] = (~(max((((/* implicit */long long int) arr_3 [i_0])), ((-(arr_5 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_26 [i_5])), (var_14)))) && (max((arr_26 [i_7]), (var_11)))));
                    var_23 = ((/* implicit */unsigned long long int) var_10);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)65)) ? (1426272776U) : (((/* implicit */unsigned int) -1845361565)))))));
}

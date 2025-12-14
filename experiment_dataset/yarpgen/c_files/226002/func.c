/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226002
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-12946))))))) ? ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (var_5) : (arr_6 [i_1] [i_1] [16ULL]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0] [i_3] [(_Bool)1] [i_1] [i_0]))));
                                var_20 &= ((/* implicit */int) arr_6 [i_3] [i_1] [i_3]);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) arr_13 [i_2 + 1] [i_1] [i_2] [i_2 + 1] [i_1] [i_2 - 1])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_2 + 1] [i_1] [i_2 + 1])))))));
                    var_21 = ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_10 [i_0] [i_0])))) | (((/* implicit */int) arr_1 [i_0]))))) : ((+((-(arr_4 [i_0] [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_11);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((-((-(var_3)))))));
    var_24 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1530923465)) ? (32796495U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))));
    var_25 = ((/* implicit */unsigned long long int) var_12);
}

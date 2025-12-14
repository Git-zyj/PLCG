/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29751
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || ((!(((/* implicit */_Bool) var_7))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(max((((((/* implicit */unsigned long long int) var_6)) & (var_7))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) & (9223372036854775798LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(9223372036854775807LL)));
                                arr_16 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((_Bool) (short)-30271)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_1] [i_2] [i_0] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (4123168604160LL)))))), (((unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)-105)))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_5] [i_5]);
                    var_14 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (-4123168604160LL))))));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    var_15 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? (var_0) : (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6 - 1]))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned short)41564))));
                    var_17 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((9223372036854775798LL), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_10)))));
                    arr_23 [i_1] [i_6] [i_1] [i_0] = ((max((arr_9 [i_0] [i_0] [i_6 - 1] [i_0]), (((/* implicit */int) (unsigned char)230)))) | ((~(var_10))));
                }
            }
        } 
    } 
}

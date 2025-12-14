/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41057
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_0]))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_7 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(arr_9 [i_0] [i_2] [i_0])))), (arr_7 [i_0 - 1] [i_1 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (short)-31407);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))))));
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */int) (_Bool)1)) & (arr_6 [i_2]))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_3 [i_2])) - (42996))))))) : (((((/* implicit */int) arr_9 [i_1 + 1] [i_0 + 2] [i_0 + 2])) / (arr_6 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)62268), ((unsigned short)62268)))) ? ((+(((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4] [i_3] [i_2] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_2] [i_4] [i_4] [i_4] [i_1 - 1] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                                var_14 *= ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / (-9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57060)))))) : (max((((/* implicit */unsigned long long int) -9223372036854775807LL)), (15051210646738382293ULL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)28466)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (unsigned short)28466);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (!((_Bool)1))))))) != (min((((((/* implicit */_Bool) (unsigned char)155)) ? (514441125U) : (456103492U))), (((/* implicit */unsigned int) ((_Bool) var_9)))))));
}

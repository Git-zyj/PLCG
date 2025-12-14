/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210095
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
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (unsigned short)48792)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16743))) : (3750896444U)))) || (var_11)));
                        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 2] [i_2 + 1]))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) 4194303)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_4 - 2])))))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4187951096U))))));
                        var_18 &= ((/* implicit */long long int) max((((arr_4 [i_0] [i_0 - 2] [i_0 - 2]) ? (((/* implicit */int) arr_4 [i_0 - 1] [12U] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_4)))))));
                    }
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 1] [13U] [i_0 - 2] [i_0 - 1] [i_0 - 2]))) ? (((((/* implicit */_Bool) (short)10384)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48815))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_5))) > (((/* implicit */int) var_11))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)10))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (72055395014672384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2 - 2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 12421360666399749419ULL))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55975)) - (((/* implicit */int) arr_3 [i_0 - 2] [(short)3])))))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) var_12);
    var_22 -= ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) ((short) (signed char)(-127 - 1)))), (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (short)-1544)) : (((/* implicit */int) (unsigned short)19028))))))) ^ (var_6)));
}

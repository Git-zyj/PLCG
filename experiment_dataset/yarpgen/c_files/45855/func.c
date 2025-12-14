/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45855
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_3] [i_2 - 1] [i_0] = ((/* implicit */signed char) ((unsigned char) var_6));
                        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(2001947555167991855LL)))), ((+(((((/* implicit */_Bool) 1832208520)) ? (10474403861334759636ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_5] [i_5] [2U] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_19)))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_18 [(short)10] [i_5] [i_2] [i_4] [i_5] [i_2 - 1] [i_5])) ? (arr_3 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(2001947555167991865LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_4])) ? (((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_1] [i_2 + 1] [i_5])) : (58693186U))))))))));
                            arr_21 [i_4] [i_0] [i_0] [7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 560391895)) / (-2001947555167991856LL)));
                            var_21 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -402094157)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30501))) : (2001947555167991855LL)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            arr_25 [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_19 [i_0]));
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (-2001947555167991855LL)));
                            var_23 = ((/* implicit */unsigned long long int) ((short) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_1] [i_0]))))));
                            var_24 = ((/* implicit */unsigned int) var_6);
                            var_25 = ((/* implicit */short) arr_18 [i_0 + 2] [i_0] [i_2] [i_0 + 2] [i_6 + 2] [i_1] [i_0 + 2]);
                        }
                        arr_26 [i_0] [(short)20] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / ((+(((/* implicit */int) (signed char)72))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) -2001947555167991857LL)) > (((((/* implicit */_Bool) var_3)) ? (6425119177460954558LL) : (-2001947555167991834LL))))))) : ((~(var_6)))));
                    }
                    var_26 = ((short) min((min((((/* implicit */unsigned long long int) (signed char)41)), (arr_12 [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((~(6378308017076011072ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2001947555167991855LL)))))));
    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((5053039068359644781ULL), (var_10))))))));
    var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) - (((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */unsigned long long int) 6635566022882402603LL)))))));
    var_30 = ((/* implicit */short) var_18);
}

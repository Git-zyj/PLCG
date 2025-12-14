/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25352
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+(-1356272582))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [6U] [i_0] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (var_0))), (((/* implicit */long long int) ((1U) % (((/* implicit */unsigned int) 1345084692))))))), (((/* implicit */long long int) -1345084693))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        arr_10 [i_0] = ((/* implicit */short) (unsigned short)65535);
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_9))));
                        var_13 = max((18U), (((((1345084689) == (1356272576))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) -9)) ? (((/* implicit */unsigned int) 1864032935)) : (6U))))));
                        var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (max((arr_4 [i_0 - 3] [11LL]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_2])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_1 + 1] [i_1])) << (((((-1520141898) + (1520141928))) - (17))))))));
                    }
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) (((-(727562419U))) != (var_9)))), (((((/* implicit */_Bool) (unsigned short)8692)) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_2] [i_2] [i_2])) : (((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) ((arr_11 [20U] [i_4] [(unsigned short)0] [20U]) + (((int) ((var_9) == (var_10))))));
                            arr_15 [i_0] [i_5 - 2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((min((arr_4 [i_1 - 1] [i_0 - 2]), (((/* implicit */long long int) arr_12 [i_5 - 1] [i_0] [i_0 + 1])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) -1575664058))))));
                        }
                        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (532618026317456258LL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (var_9))) : ((-(var_2)))))), ((+(-9223372036854775797LL)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_9)));
                        var_19 = ((/* implicit */unsigned long long int) (~((+(0U)))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1718163016555019171ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) (unsigned short)65535)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (1425142899U)))) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)12148)))))));
}

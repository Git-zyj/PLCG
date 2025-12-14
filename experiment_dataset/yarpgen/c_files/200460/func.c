/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200460
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
    var_14 = ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */long long int) min((min(((~(9880144029386998866ULL))), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 927176548408952164LL)) ? (6825313580037492412LL) : (927176548408952164LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)31067))))))))));
    var_16 = ((/* implicit */long long int) (-((~(((((/* implicit */int) (_Bool)0)) - (2147483647)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(964015603007044367LL))) : (((-964015603007044367LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-10216)))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10216)))))) ? (((((/* implicit */_Bool) -6958462006997135062LL)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-29580))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2795981631868368938LL)) ? (((2155094888182888814ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                }
            } 
        } 
        arr_15 [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) -2795981631868368938LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [10LL])))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14878995219107719049ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)51624))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (16291649185526662801ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) % (((/* implicit */int) (short)-29580))))) : ((+(3567748854601832566ULL))));
    }
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 898488528U)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) max((-5680391000007288488LL), (2199023255551LL)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)41)) || (((/* implicit */_Bool) var_5))))))))));
}

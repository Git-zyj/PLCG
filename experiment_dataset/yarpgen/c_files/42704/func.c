/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42704
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) 212743177022644718ULL))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_11 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (((_Bool)0) ? (var_2) : (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))))) >= (((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_0 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_1] [i_0])))))))));
                    var_12 = ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)-20354))))) | (((arr_3 [i_3] [i_0]) << ((((((-2147483647 - 1)) - (-2147483630))) + (35)))))))));
                    arr_11 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0])))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (short)30787))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (2491106659354404133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
                var_13 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_4 [i_0 - 1]))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 78890673))) ? (((/* implicit */int) ((arr_3 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)26855)))))) : (((/* implicit */int) ((short) var_0)))))) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [(unsigned short)8] [i_0 - 2]))) : (((((/* implicit */int) var_6)) << (((arr_1 [i_0 - 1] [i_0 + 1]) - (1430266055U)))))));
                var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(arr_7 [i_0 + 2] [i_1] [i_0 + 1] [i_0])))) + (max((var_3), (var_3))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((var_3) & (((/* implicit */unsigned long long int) min((var_2), (1491036762)))))), (((((/* implicit */unsigned long long int) (-(var_2)))) + (max((((/* implicit */unsigned long long int) var_2)), (13959068025189655533ULL)))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+((~(((/* implicit */int) var_7)))))) : (((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */unsigned int) var_0);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49037
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)52521)), (var_5))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_0 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((15941014067003632176ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21927)))))));
    }
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) & (1438469002U)));
    var_14 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) min((((5171674075946183257LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34164))))), (((/* implicit */long long int) min((1837798854U), (((/* implicit */unsigned int) (short)-1))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44921)) ? (((/* implicit */int) (unsigned short)20916)) : (((/* implicit */int) (signed char)-81))))) | (-5716555647697577210LL)));
        var_16 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-2))))));
        arr_8 [i_1 + 1] [i_1 + 3] = ((/* implicit */signed char) ((short) arr_1 [i_1 + 1]));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (+(-7469502464634989041LL)));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 3074850845U))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29154)) ? (8876693700070119412ULL) : (15329307702308111207ULL)));
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203962
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
    var_16 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_5)))) % (max((var_1), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0]))))))) && (((/* implicit */_Bool) max((arr_1 [i_0] [i_0 + 1]), (8870469361985443387LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) && (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */long long int) var_15))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */int) var_3))))))), (max((((/* implicit */unsigned long long int) (-(var_0)))), (((((/* implicit */_Bool) 8870469361985443398LL)) ? (((/* implicit */unsigned long long int) -8870469361985443381LL)) : (12540250924776542091ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (short i_3 = 3; i_3 < 14; i_3 += 4) 
            {
                {
                    var_19 += max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_1 + 4]))))), ((+(max((((/* implicit */long long int) var_11)), (-8870469361985443387LL))))));
                    arr_10 [i_1] [i_3] = ((/* implicit */signed char) ((arr_9 [i_1 + 1] [i_2 - 1] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) >= (arr_9 [i_1 + 3] [i_2 - 2] [i_3])))))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) (+((~(arr_5 [i_1])))))) % (max((((/* implicit */long long int) var_12)), (min((arr_4 [(signed char)15]), (((/* implicit */long long int) var_12))))))));
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_21 = ((/* implicit */signed char) arr_11 [i_4]);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_15), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_4])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (8870469361985443390LL)))))))) : (max((((((/* implicit */_Bool) 485040233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / (-8870469361985443399LL))))))));
    }
    var_23 |= (+(((/* implicit */int) (short)25815)));
}

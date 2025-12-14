/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204421
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
    var_19 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 2060927336)) ? (-1303089265) : (25))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) var_18);
        var_21 -= ((/* implicit */signed char) -869866830);
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            arr_4 [i_0] [(signed char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_1 [i_1 + 3]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
            var_22 = ((long long int) ((((/* implicit */unsigned int) arr_1 [i_1 + 3])) >= (arr_2 [0U] [i_0])));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = 3072136963U;
            var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) 1253532966)) ? (((/* implicit */unsigned int) -869866830)) : (3522149003U))), (((/* implicit */unsigned int) max((-869866842), (((/* implicit */int) (signed char)0)))))));
            arr_9 [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) || (((/* implicit */_Bool) 0U))))), ((~(892135459)))))) ? (max((1862750875318723216LL), (((/* implicit */long long int) 1059061529)))) : (((/* implicit */long long int) max((arr_3 [i_0]), (1303089265))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_3 [i_3]))));
            arr_12 [i_0] [i_0] [6U] = ((((/* implicit */int) arr_7 [i_0] [i_0])) & (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))));
            var_26 ^= ((int) (-(var_8)));
        }
    }
    for (signed char i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_27 &= ((/* implicit */unsigned int) (signed char)-6);
                    var_28 = ((/* implicit */unsigned int) min(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : ((~(var_8))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-18)))))))));
                }
            } 
        } 
        arr_19 [i_4] = ((long long int) ((((/* implicit */_Bool) 1421737688U)) ? (((/* implicit */unsigned int) arr_17 [i_4] [i_4] [i_4 + 1] [i_4])) : (arr_14 [i_4 + 1])));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-25)))) ? (max((((/* implicit */unsigned long long int) arr_17 [i_4 - 2] [(_Bool)1] [i_4 - 2] [i_4])), ((+(arr_16 [i_4] [i_4 + 1] [i_4 - 2]))))) : (((/* implicit */unsigned long long int) max((1253532971), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)13)))))))));
    }
    var_30 = ((/* implicit */signed char) ((1417944591U) >> (((16550370028405338205ULL) - (16550370028405338194ULL)))));
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0) & (25)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)6))))) : (((((/* implicit */_Bool) var_16)) ? (11099969464295576084ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
}

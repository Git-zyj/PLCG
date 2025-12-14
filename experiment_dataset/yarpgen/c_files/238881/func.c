/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238881
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~((-(var_9)))))))))));
    var_18 -= ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = arr_0 [i_0];
                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_1 + 3])))) ? (((/* implicit */long long int) ((3624191592U) % (((/* implicit */unsigned int) 1210790783))))) : (min((((/* implicit */long long int) var_12)), (var_6)))));
                var_21 = ((/* implicit */int) max((var_21), (arr_1 [i_1])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_22 = arr_5 [i_2 + 2];
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(1210790783)))) / (min((min((((/* implicit */long long int) var_12)), (4526256948330337552LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1210790784)) ? (((/* implicit */unsigned int) 237937556)) : (var_14))))))));
    }
    for (long long int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_24 = min((1210790783), (1488967257));
        var_25 = ((/* implicit */unsigned int) max((1210790795), (arr_5 [i_3])));
        var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) -5762422960727340781LL)) ? (((/* implicit */unsigned int) 1210790795)) : (8U))), (((/* implicit */unsigned int) (!(((var_11) > (8593720736543713878LL))))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) max((((arr_7 [i_3 + 3]) | (((((/* implicit */unsigned int) var_8)) % (12U))))), (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_3]) : (arr_6 [i_3 + 4]))))))));
        var_28 = ((int) 7119674591674976280LL);
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) ((int) ((unsigned int) 1210790775)));
        var_30 = arr_1 [i_4];
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1073741824)) ? (12U) : (((/* implicit */unsigned int) 1210790783))));
        var_32 *= ((/* implicit */unsigned int) (+(arr_11 [i_4] [i_4])));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_33 = ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_5] [i_5])), (3716502490U)))) : ((+(var_6))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_13 [i_5] [i_5]))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_35 = ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_16)), (var_13))) > (((/* implicit */unsigned int) var_2))))) << (((max((2536689388U), (4294967283U))) - (4294967256U))));
            var_36 = ((/* implicit */unsigned int) min((var_36), (min((35U), (((/* implicit */unsigned int) (~(1253849772))))))));
        }
    }
    var_37 |= ((/* implicit */int) 3969428896U);
}

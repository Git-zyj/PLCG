/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226812
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
    var_16 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-31)) || (((/* implicit */_Bool) (signed char)117))))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (1705159441U))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)-127))))))), (min((var_8), (((/* implicit */unsigned int) var_11))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-7))))) : (2438436785U))) + (min((((((/* implicit */_Bool) var_6)) ? (183235317U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-72)))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)2))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) + (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2620660288U))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), ((signed char)64)));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121))))) ? ((~(max((4294967290U), (((/* implicit */unsigned int) (signed char)103)))))) : (((311162432U) | (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_15)))))));
            arr_8 [(signed char)5] [(signed char)7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967291U)))) ? (max((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))), ((~(((/* implicit */int) (signed char)(-127 - 1))))))) : ((~(((/* implicit */int) ((127U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))))))));
        }
        arr_9 [5U] [0U] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)93)) || (((/* implicit */_Bool) (signed char)-120))))) << (((arr_6 [i_0] [i_0] [i_0]) - (394217663U)))));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((((unsigned int) 4018705481U)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [0U] [i_2]))) & (((1392713533U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [6U])))) >= ((~(((/* implicit */int) max(((signed char)-6), (var_11)))))))))));
        var_24 = min((((/* implicit */unsigned int) arr_0 [i_2] [i_2])), (min((4294967289U), (((/* implicit */unsigned int) (signed char)3)))));
    }
}

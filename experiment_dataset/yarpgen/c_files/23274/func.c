/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23274
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
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (~(3335302788712991449LL)));
        var_17 = ((/* implicit */unsigned short) (+(2860836217743071435ULL)));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_13) | (((/* implicit */int) max((var_1), (((/* implicit */short) arr_2 [8])))))))))))));
        var_19 = (~(((/* implicit */int) ((_Bool) 3335302788712991449LL))));
        var_20 *= ((/* implicit */short) ((var_11) & (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 2860836217743071444ULL)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned char)15]))));
            arr_9 [i_1] |= ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2]))))), (2860836217743071435ULL))));
            arr_10 [i_1] = ((/* implicit */long long int) ((int) 2860836217743071427ULL));
        }
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 15585907855966480180ULL)) || (((/* implicit */_Bool) -4634975608847212676LL))))))) : (((((/* implicit */_Bool) var_12)) ? (arr_4 [i_1]) : (((int) 2860836217743071437ULL))))));
    }
    var_21 = ((/* implicit */unsigned char) var_4);
    var_22 = min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (unsigned char)255))))) | (min((((/* implicit */unsigned long long int) var_9)), (2860836217743071465ULL))))));
    var_23 |= ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) 3423808433U))))));
}

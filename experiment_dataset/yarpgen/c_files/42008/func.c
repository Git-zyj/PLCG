/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42008
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((signed char) max((max((((/* implicit */unsigned short) (signed char)-62)), (var_8))), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_8)))))))))));
    var_13 = ((/* implicit */short) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 72109344562197947LL)) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -72109344562197945LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_16 = ((/* implicit */long long int) ((unsigned short) var_2));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (max((2136611710426127242LL), (-72109344562197928LL)))));
        var_18 = var_11;
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) (_Bool)1);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_3) : (((/* implicit */int) arr_9 [i_4 - 1] [(signed char)15] [i_4]))))) : (((((-5882162420551283035LL) + (9223372036854775807LL))) >> (((-839997838) + (839997851)))))));
        var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_13 [i_4])))) >= (((((/* implicit */int) (signed char)94)) - (((/* implicit */int) (unsigned short)50623))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) (((-(-72109344562197947LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 69818988363776LL)) ? (((/* implicit */int) arr_10 [i_5] [i_5] [13ULL])) : (((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) 1684873507)));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), ((signed char)-101)))))));
}

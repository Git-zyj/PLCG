/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3266
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7))))) | ((~(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 653085192)) ? (var_6) : (((/* implicit */int) (signed char)122))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_10))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))) : (var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 &= ((((/* implicit */_Bool) (~(67108856)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (-1419442013)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -67108857)) ? (5747354923372341990ULL) : (((/* implicit */unsigned long long int) -67108856))));
                            arr_15 [i_0] [22] [i_2] [(signed char)0] [i_4] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 1002957857489079424ULL))))));
                            var_13 += ((/* implicit */int) (-(((8ULL) << (((((/* implicit */int) (signed char)-84)) + (142)))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_9 [i_0] [2] [i_1] [i_1 + 2]))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-31)) : ((~(-1419442012))));
        var_16 = (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((var_6) | (var_9)))) : (((((/* implicit */_Bool) var_7)) ? (arr_9 [19] [i_5] [i_5] [i_5]) : (arr_12 [i_5] [13ULL] [i_5] [i_5] [i_5]))));
        arr_18 [i_5] = ((((/* implicit */_Bool) (signed char)123)) ? (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))));
    }
    var_17 = (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || ((!(((/* implicit */_Bool) 0ULL))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 9223336852482686976ULL)))))) && (((/* implicit */_Bool) var_4))));
}

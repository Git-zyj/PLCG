/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216670
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (var_2))))));
        arr_2 [i_0] [(signed char)2] = ((/* implicit */unsigned char) var_5);
        arr_3 [3U] = ((/* implicit */unsigned int) ((((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) + (9223372036854775807LL))) >> (((var_6) + (5989156935798391475LL)))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) | (((/* implicit */int) var_4))))))))) : (((((min((var_3), (-3015137715902957742LL))) + (9223372036854775807LL))) >> (((arr_0 [i_0]) - (1716432916U)))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        for (long long int i_2 = 4; i_2 < 17; i_2 += 4) 
        {
            {
                arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [12U] [i_1]))) * (var_1)))) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) ((signed char) var_10))))) : (var_8)));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) var_8);
                            arr_17 [(_Bool)1] [(unsigned char)12] [i_2] [i_2] [10] [i_1] &= ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) -3015137715902957742LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_4]))) : (arr_7 [i_2])))))));
                            arr_18 [i_1] = (-(((arr_8 [i_1 + 1] [i_1] [i_2 + 1]) ? (arr_15 [i_2] [i_2] [i_2 + 1] [4LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 1] [i_2 - 3]))))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_2] [i_2]) ? (var_6) : (3015137715902957742LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) * (var_3)))))) ? (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1]))) : (arr_12 [i_1] [i_1 - 2] [i_1 - 1] [i_1]))) : (min((((/* implicit */long long int) arr_13 [i_2 - 1] [i_1] [i_2 - 4])), (3015137715902957742LL)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) 3015137715902957742LL)) ? (3015137715902957742LL) : (((/* implicit */long long int) arr_7 [i_1])))))), ((((_Bool)1) ? (-3015137715902957735LL) : (arr_5 [i_2 + 1] [i_1 - 2])))));
                arr_19 [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1] [0])) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 2] [i_1 + 2]))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3015137715902957760LL)))))) : (((((/* implicit */_Bool) var_0)) ? (-3015137715902957743LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_5 [i_1 - 1] [i_2 - 3]), (arr_5 [i_2 - 1] [i_1 + 1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((unsigned int) var_6))) != (((var_2) | (((/* implicit */unsigned long long int) var_0))))))));
}

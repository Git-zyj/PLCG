/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37555
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
    var_20 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 1]), (arr_5 [i_0] [i_1 - 1]))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1]))))) / (((/* implicit */int) arr_7 [i_2] [i_1 + 1] [23LL]))));
                    var_23 = (i_1 % 2 == 0) ? (((((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_1 [i_0] [18U]) + (2147483647))) >> (((arr_5 [i_1] [i_1]) - (55466278U))))))))) >> ((+(((/* implicit */int) (signed char)8)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_1 [i_0] [18U]) + (2147483647))) >> (((((arr_5 [i_1] [i_1]) - (55466278U))) - (3323545142U))))))))) >> ((+(((/* implicit */int) (signed char)8))))));
                    arr_9 [(signed char)13] [i_1] [i_1] [i_2] = ((/* implicit */int) ((-1049290744) >= ((-2147483647 - 1))));
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (~(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))) || (((((/* implicit */int) arr_0 [i_3] [i_0])) >= (arr_8 [i_1] [i_1] [i_0] [i_1])))))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) ^ (var_15)));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((unsigned int) 1003837258)) + (((/* implicit */unsigned int) (-(arr_1 [(signed char)14] [(signed char)9])))))) * (((/* implicit */unsigned int) ((arr_8 [i_0] [i_1 + 1] [i_0] [i_1]) / (arr_8 [i_0] [i_0] [i_1 + 1] [i_1]))))));
                    arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1 + 2] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(3820612807347019797ULL))))));
                        var_25 = ((/* implicit */int) (unsigned short)65522);
                    }
                }
                var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-106)), (min((max((((/* implicit */unsigned long long int) 2147483633)), (3994451427052448306ULL))), (((/* implicit */unsigned long long int) ((-1003837259) < (-1003837283))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (arr_8 [(signed char)18] [i_5] [i_5] [(signed char)18]) : (arr_8 [10] [i_5] [i_5] [10])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_28 = ((/* implicit */int) (-(((arr_5 [i_5] [i_6]) * (arr_5 [i_5] [i_6])))));
            var_29 = (((_Bool)1) ? (arr_3 [i_5]) : (((/* implicit */int) ((arr_18 [i_5] [i_5]) >= (((((/* implicit */_Bool) arr_8 [i_5] [(_Bool)1] [(_Bool)1] [8ULL])) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_6])) : (arr_1 [i_5] [i_6])))))));
        }
    }
    var_30 = ((/* implicit */signed char) var_3);
}

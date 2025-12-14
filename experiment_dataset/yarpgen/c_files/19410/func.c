/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19410
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */int) arr_0 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)3312))));
        var_15 = ((/* implicit */int) (_Bool)1);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */int) arr_7 [i_3] [i_3]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            var_17 += ((/* implicit */unsigned long long int) ((int) arr_3 [i_4 + 2]));
            var_18 = ((/* implicit */int) max((var_18), (arr_8 [(signed char)6])));
            var_19 = ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118)));
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                arr_20 [i_3] [i_3] = ((/* implicit */_Bool) arr_9 [i_3]);
                arr_21 [14] [i_5] [i_5] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_19 [(short)5] [i_4 + 2] [i_5])) & (arr_16 [i_4 + 2] [i_5] [i_5 + 3])));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_3] [(short)7] [i_3] = ((/* implicit */signed char) 1822545558);
                arr_25 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((arr_2 [i_4 + 4] [i_4 + 3]) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_2 [i_4 + 1] [i_4 + 4]))));
            }
        }
        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(arr_11 [i_3]))))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_14 [i_7] [i_3]))) | (((/* implicit */int) min((((/* implicit */signed char) arr_22 [i_3])), ((signed char)117))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))))) : (((((/* implicit */_Bool) 1822545558)) ? (((/* implicit */int) (_Bool)1)) : (-338723590))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (signed char)124))))))));
        }
    }
}

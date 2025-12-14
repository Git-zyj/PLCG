/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29924
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */signed char) min((0), (((/* implicit */int) (unsigned short)58372))));
                    var_12 = ((/* implicit */short) arr_0 [i_0]);
                    var_13 = ((/* implicit */long long int) arr_6 [i_0 - 1] [i_1 - 2] [i_1 - 1] [i_1]);
                    var_14 &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-114)) && (((/* implicit */_Bool) (unsigned short)7171)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [(signed char)6])))) ? (((unsigned long long int) arr_11 [(signed char)7] [(signed char)7] [i_4])) : (((/* implicit */unsigned long long int) 5312501428308802874LL))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) + (-7239270154804732528LL)));
            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4])) << (((/* implicit */int) arr_7 [i_3 - 2]))));
        }
        for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            var_19 = ((/* implicit */int) arr_13 [i_3] [i_5 - 1]);
            var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 2] [i_5 - 1] [i_5 + 2]))) % (arr_9 [i_3 + 2] [(signed char)14] [(signed char)16])));
        }
        var_21 ^= ((/* implicit */signed char) ((arr_10 [i_3 - 1] [i_3 + 2]) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 3])) : (((/* implicit */int) arr_10 [i_3 - 2] [i_3 + 1]))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) 5872780289036493055LL)) ? (((long long int) (unsigned short)58370)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_23 |= ((/* implicit */unsigned short) var_7);
}

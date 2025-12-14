/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224735
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_0 [i_2])));
                    var_11 = ((/* implicit */signed char) (unsigned char)208);
                    var_12 = ((/* implicit */short) (-(var_3)));
                }
                arr_8 [13U] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0]))) ? (arr_1 [i_0] [i_1]) : ((+(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) 5533546263322547336ULL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 6353473672618917200ULL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((int) arr_10 [i_3]));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)65347), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_9 [i_3] [(short)3])))))))) < (((/* implicit */int) (signed char)-106))));
                arr_14 [i_3] [i_4] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) ((arr_11 [i_4 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 6353473672618917222ULL)))) ^ (14388200400463553762ULL)))));
                var_15 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) ((unsigned char) arr_9 [i_4] [i_3]))) < ((((_Bool)1) ? (((/* implicit */int) (short)-28153)) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
}

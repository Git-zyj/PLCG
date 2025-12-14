/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214500
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((var_19) ^ (((/* implicit */unsigned long long int) 0U)))) ^ (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_10)))))))));
            var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)16)) && (((/* implicit */_Bool) arr_2 [i_1]))))))));
        }
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(signed char)4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((((/* implicit */_Bool) (unsigned short)41776)) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (4294967291U))) : (((/* implicit */unsigned int) arr_2 [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_4 [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_3 + 2])), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_3]))))))) : (((arr_5 [i_2] [6]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3 - 1])) ? (arr_9 [i_3] [i_3 - 1]) : (arr_13 [8] [i_3] [i_2]))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_9 [i_5 - 2] [i_5]) << (((arr_9 [i_5 - 1] [i_5 - 1]) - (619052737))))))));
                            var_24 -= ((/* implicit */signed char) (-(arr_9 [i_2] [i_2])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-84)), (var_10)));
}

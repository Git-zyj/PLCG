/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43946
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
    var_14 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59474)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_13) != (((/* implicit */long long int) var_2)))))))) : (var_0));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((max((15239713192151093557ULL), (((((/* implicit */_Bool) 3571957209U)) ? (3207030881558458058ULL) : (15239713192151093539ULL))))) | (((/* implicit */unsigned long long int) (~(min((arr_5 [i_1 + 1]), (((/* implicit */long long int) 325140595U)))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) var_0))))), (var_1)))) && (((/* implicit */_Bool) ((unsigned int) 15239713192151093586ULL)))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) var_5);
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_3] [i_3]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_19 = ((/* implicit */int) arr_17 [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 3]);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) : (15239713192151093571ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (var_8)));
                }
                var_21 = ((/* implicit */int) (-(3969826680U)));
            }
            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) arr_12 [i_3]));
        }
        for (short i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) var_4);
            var_24 = (~(((((/* implicit */int) (short)8206)) >> (((var_9) - (1868498764))))));
            var_25 = ((/* implicit */unsigned short) var_5);
        }
    }
}

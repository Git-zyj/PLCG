/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199865
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
    var_12 &= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (!(var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (short)31);
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((arr_0 [i_0 + 2]), (((/* implicit */short) var_9))))) : ((-(((/* implicit */int) var_9))))))) : (var_2)));
            }
        } 
    } 
    var_15 ^= var_7;
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_16 = var_6;
                        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [(signed char)17] [2ULL] [(short)1] [i_5])))) ? (max((var_7), ((-(((/* implicit */int) var_8)))))) : (arr_8 [i_2] [i_3] [i_4])));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (short)57);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) var_4))));
                        var_20 = ((/* implicit */int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_6] [i_3]))))))));
                    }
                    var_21 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((1270875588U) - (1270875582U)))))) ? ((-(3024091707U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)130))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36)))))));
                    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 256)) ? (3024091679U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_18 [(signed char)18])))))))));
                }
            } 
        } 
    } 
}

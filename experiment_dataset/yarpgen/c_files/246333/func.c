/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246333
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (-2039586089913939082LL)));
    var_15 ^= ((/* implicit */unsigned long long int) 1748973645U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [12LL] [12LL])) >= (((/* implicit */int) (_Bool)0))))) << (((arr_0 [i_0]) + (1877422962765570144LL)))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned long long int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_17 = ((/* implicit */_Bool) arr_4 [i_1] [15LL]);
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3 - 2] [2U] [i_1])) ? (arr_9 [i_3] [i_1] [i_3 - 2] [i_3] [(signed char)13]) : (arr_9 [i_0] [i_1] [i_3 - 2] [i_3] [(_Bool)1])));
                            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((arr_11 [i_0] [i_4] [i_3] [i_3 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3] [i_1] [i_2] [i_3 + 2]))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        }
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_4 [i_5] [i_5])))))) ? (max(((~(((/* implicit */int) arr_13 [i_5] [i_5])))), (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5])))) : ((~(((int) 4181842350U))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (((/* implicit */int) ((5701069612807548353ULL) >= (((/* implicit */unsigned long long int) arr_3 [i_5]))))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_5] [i_5])), (arr_6 [3U]))))))))));
        var_23 = ((/* implicit */int) min((arr_10 [i_5] [(unsigned short)0] [10LL] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5])))))));
    }
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 5701069612807548382ULL)))))))));
}

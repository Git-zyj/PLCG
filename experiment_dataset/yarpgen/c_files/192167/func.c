/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192167
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
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (signed char)57)) : (var_8))) < (((/* implicit */int) var_6))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0 - 3] [i_1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */short) var_0)), (arr_5 [i_1] [i_0])))))), (min((arr_4 [i_0 + 1]), (arr_4 [i_0 - 1])))));
                arr_7 [i_0] [(unsigned short)11] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)6))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((int) ((((/* implicit */_Bool) (unsigned short)57353)) ? (((/* implicit */int) (signed char)-2)) : (arr_4 [i_1])))) : (((((/* implicit */_Bool) max((-1695796840), (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) min((min((((/* implicit */short) (unsigned char)251)), (arr_8 [i_4]))), (((/* implicit */short) ((signed char) arr_1 [i_4])))))), (arr_11 [i_3 - 1])));
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) | (((((/* implicit */unsigned int) var_4)) % (arr_11 [i_3 + 1])))))) && (((/* implicit */_Bool) max(((~(var_4))), (((/* implicit */int) arr_8 [i_2])))))));
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) - ((-(((16592563254063686021ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) arr_4 [10]));
                }
            } 
        } 
        var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((1854180819645865589ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8193))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_2] [i_2] [i_2]), (var_1)))))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_5)));
        arr_16 [i_2] = ((/* implicit */short) min(((((~(((/* implicit */int) var_1)))) >= (max((((/* implicit */int) (unsigned char)6)), (1408523188))))), (((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)47)))))))));
        arr_17 [4] = arr_5 [i_2] [i_2];
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned long long int) var_7);
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) && (((/* implicit */_Bool) var_5))));
        arr_24 [i_5] = arr_14 [i_5] [8] [(signed char)17];
    }
}

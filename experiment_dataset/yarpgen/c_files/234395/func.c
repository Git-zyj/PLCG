/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234395
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
    var_19 ^= ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */_Bool) (signed char)40);
        var_21 = ((/* implicit */unsigned char) min((((arr_3 [i_0 - 4] [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)4080), ((short)4080))))))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [(_Bool)1]))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((var_1), (((/* implicit */signed char) min((arr_2 [i_0 - 4] [i_0]), (arr_2 [i_0 - 3] [i_0]))))));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) | ((+(((/* implicit */int) arr_6 [i_1] [i_1]))))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1])), (arr_7 [i_1 + 2] [i_1])))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [20ULL] = ((/* implicit */unsigned long long int) (short)2040);
                        arr_18 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_10 [i_4])) & (((/* implicit */int) arr_6 [i_1] [i_1])))) ^ (((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) var_7)))))) ^ (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-34))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */short) min((arr_19 [i_5 - 1] [i_5]), (min((min((((/* implicit */unsigned long long int) arr_20 [(unsigned char)10])), (arr_19 [i_5] [i_5]))), (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38)))))))));
        var_22 = ((/* implicit */unsigned char) var_2);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_11))));
    }
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_11))))) : (((var_14) ^ (((/* implicit */unsigned int) var_17))))))), ((~(20LL))))))));
}

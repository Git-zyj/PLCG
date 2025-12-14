/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37110
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
    var_12 |= ((/* implicit */unsigned long long int) var_1);
    var_13 *= (+(((long long int) (_Bool)1)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) max((((var_11) - (((/* implicit */int) (unsigned short)53874)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_0 [0U])))))))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)11662))))) ^ (-8714839156027918247LL)));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1 - 1])), (var_11)))) ? ((-(arr_2 [i_1]))) : (((/* implicit */unsigned long long int) var_3))))));
        arr_6 [8ULL] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_3 [i_1] [i_1])))))) * (var_7)))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (-1818146458906565027LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27620)) && (((/* implicit */_Bool) (unsigned char)0))))), (min((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_2 + 3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2 + 2]))))), (((long long int) arr_13 [i_2] [i_3] [0]))))) ? ((~(((/* implicit */int) arr_1 [i_2 + 3])))) : (max(((+(((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) var_2))))))));
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)53874))));
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (-(0ULL)));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205334
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) ((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) > (((/* implicit */int) ((signed char) ((((((/* implicit */int) arr_1 [i_0] [(unsigned char)7])) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1] [i_2] [i_2]) && (((/* implicit */_Bool) var_10)))))) + (2790395770307385890ULL)));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) (unsigned short)63979);
        }
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1])), ((unsigned short)63982)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_4]))))));
                        arr_23 [i_6] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31221)) % (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_13 [i_5])), (7001341416758385095ULL)))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */signed char) var_13);
    }
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (max((((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)9029)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
}

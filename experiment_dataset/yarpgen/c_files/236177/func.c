/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236177
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
    var_14 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-64))));
    var_15 = ((/* implicit */long long int) ((unsigned short) (short)-26914));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1]))))), (arr_8 [i_0] [i_1] [i_1]))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2]))))) / ((+(((/* implicit */int) arr_1 [i_1] [i_1]))))))));
                    arr_9 [3LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-85)), (3065070322692946221LL)));
                    var_18 = ((/* implicit */signed char) min((min(((-(((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) max((arr_7 [i_0]), (arr_0 [i_0])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)45)), (-3065070322692946221LL)))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) min((max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned short) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_19 = ((/* implicit */long long int) (-(((arr_5 [8U] [(signed char)6] [i_3]) >> (((arr_5 [i_3] [0LL] [i_3]) - (1709982598U)))))));
        arr_13 [i_3] = ((/* implicit */int) (+(((long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [0U] [12ULL])))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)54)), ((unsigned short)30084)))), ((~(arr_3 [i_3]))))))))));
    }
    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((short) min((((/* implicit */int) ((unsigned short) arr_14 [(unsigned char)8]))), (((((/* implicit */int) arr_15 [i_4])) >> (((arr_16 [i_4] [i_4]) - (1280976478684579951ULL))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_4] [i_4 - 1] [i_4] = ((/* implicit */int) ((min((min((((/* implicit */unsigned long long int) arr_17 [i_4] [i_5] [(unsigned char)1])), (arr_14 [i_4]))), (((/* implicit */unsigned long long int) ((int) arr_14 [i_4]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_18 [i_4 - 1] [i_4] [i_5])))))))));
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) arr_16 [i_4 + 2] [i_5]))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) - (((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_5]))) + (arr_14 [i_4])))))));
            var_22 = (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [(short)7]))) / (arr_16 [i_4 + 2] [i_5]))), (((/* implicit */unsigned long long int) arr_15 [i_4 + 1])))));
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned char) arr_16 [i_4 - 1] [i_4 - 1]);
        }
        var_23 = ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) (signed char)64)), (3065070322692946210LL))));
    }
}

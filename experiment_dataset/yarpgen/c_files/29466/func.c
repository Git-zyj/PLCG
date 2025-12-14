/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29466
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
    var_12 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((arr_0 [i_0] [i_0]), (((/* implicit */short) var_9)))), (arr_0 [i_0] [(short)11]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_10);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_5 [i_1])))));
        arr_6 [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) - ((((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_1))))));
        var_14 = ((/* implicit */short) arr_1 [(short)7]);
        arr_7 [(_Bool)1] [i_1] = ((/* implicit */short) (((+(((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1])))))) - (((/* implicit */int) (short)11960))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [3ULL])) ? (1534147458748932468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2]))))) : (arr_8 [i_2] [(short)0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29704)))));
        var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_11 [i_5] [(short)0])))) & (((/* implicit */int) ((16912596614960619153ULL) >= (1534147458748932477ULL))))))));
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_0);
                        arr_19 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) * (var_2)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_25 [i_2] [i_2] [(short)15] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) | (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_15 [i_2]))))))) / (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [(signed char)10]))));
                    arr_26 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [(short)6] [i_6]))));
                }
            } 
        } 
    }
    var_17 &= ((/* implicit */short) ((min((((/* implicit */int) (!(((/* implicit */_Bool) 16912596614960619153ULL))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) == (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-116), (((/* implicit */signed char) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))))));
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) var_1))))));
}

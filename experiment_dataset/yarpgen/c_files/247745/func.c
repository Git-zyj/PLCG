/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247745
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
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) ((int) var_5)))) : (var_11)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [11] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)20060))));
        var_17 = ((/* implicit */signed char) ((long long int) ((_Bool) arr_3 [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [12LL])) : (((/* implicit */int) arr_2 [5ULL]))))))));
        arr_6 [6LL] = ((/* implicit */long long int) ((arr_1 [i_0] [(_Bool)1]) > (((/* implicit */int) arr_3 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            var_18 += ((/* implicit */unsigned int) (signed char)0);
            var_19 = ((/* implicit */long long int) ((signed char) ((short) (-(arr_7 [(unsigned short)9])))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_20 -= max((((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [10] [10] [10] [i_1]))))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_1])))))))), (arr_12 [i_1]));
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) arr_17 [i_5 + 1] [i_1] [14LL] [i_3] [i_1] [i_1]))))) && (((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                            arr_21 [i_1] [i_1] [i_2] [(unsigned short)8] [i_5 - 1] [i_5] [i_5 - 1] = ((/* implicit */_Bool) (-(((((long long int) arr_3 [i_1])) - (((/* implicit */long long int) ((((/* implicit */int) arr_19 [3] [3] [3] [i_4])) << (((arr_7 [i_5]) - (796615318))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_22 += ((/* implicit */long long int) ((((arr_26 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2 - 3] [i_2 + 1]) + (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [(unsigned char)2] [2] [(unsigned char)2] [i_6]))))))) > (((/* implicit */long long int) ((arr_18 [i_2 + 1] [i_6] [i_6] [i_2 + 1]) ? ((-(((/* implicit */int) arr_23 [i_1] [(_Bool)1] [i_6])))) : (((var_7) & (arr_20 [4ULL] [(_Bool)1] [i_6] [7LL] [4ULL] [i_7]))))))));
                            arr_28 [i_1] [i_1] [i_1] [i_7] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_25 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = ((/* implicit */int) max((var_5), (((/* implicit */signed char) arr_18 [i_1] [i_1] [i_9] [i_1]))));
            arr_31 [i_1] [i_9] &= ((/* implicit */unsigned char) arr_3 [i_1]);
        }
        arr_32 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((var_3) | (((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)45484)) : (((/* implicit */int) (_Bool)0)))) - (45484)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
    }
}

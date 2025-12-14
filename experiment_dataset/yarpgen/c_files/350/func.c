/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/350
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
    var_13 = ((/* implicit */signed char) -6548696289967464949LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_14 = (-(((((/* implicit */long long int) 1975505783)) - (var_8))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_4)))))) : (((((/* implicit */int) arr_1 [i_0])) - ((-(arr_0 [i_0])))))));
    }
    var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-329))) : (var_1))))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] [(_Bool)1] = ((long long int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = (!(((/* implicit */_Bool) (-(((arr_0 [i_1]) >> (((((/* implicit */int) var_12)) - (70)))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((int) (+(((/* implicit */int) var_2))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-823349490) == (var_3)))) <= ((+(var_6)))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 12402184338232148441ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0)))))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_1] [14ULL] [i_3] [2] [i_6] = ((/* implicit */_Bool) var_12);
                            var_19 = ((/* implicit */int) var_9);
                            arr_21 [6LL] [i_1] [i_3] [i_1] [i_1] = ((-2029632680) >= (((/* implicit */int) arr_15 [i_6 - 1] [(unsigned char)7] [i_1] [i_1] [i_2] [i_1])));
                        }
                        for (int i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1312511998)))) ? ((-(arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [18LL] [i_7] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_22 [i_7 - 2] [i_7 - 1] [i_7 - 2] [0ULL] [i_7] [7ULL] [i_7]) < (arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [15] [i_7] [i_7])))))));
                            var_21 = ((((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_7)) ? (var_3) : (var_0))) + (1966959114))))) - (((/* implicit */int) var_7)));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_4)))));
                            arr_25 [6LL] [i_1] [i_3] [i_5] [i_7] [11] = (-(((((/* implicit */_Bool) 6044559735477403175ULL)) ? (1003373944591187258LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)108))))))));
                            arr_26 [(_Bool)1] [i_2] [i_3] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_23 [i_1] [i_2] [i_7 + 1] [i_5] [i_7]))));
                        }
                        arr_27 [i_1] [2ULL] [i_1] [(_Bool)1] [i_5] = ((/* implicit */int) 6044559735477403179ULL);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) var_1);
                        arr_30 [i_1] = ((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((arr_23 [i_3] [i_3] [i_8 - 2] [i_8] [i_8]) + (493150567)))));
                        arr_31 [i_1] [i_1] [i_3] = ((/* implicit */signed char) var_1);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_35 [1LL] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_15 [i_1] [i_2] [i_1] [i_9] [i_9] [i_9])))));
                        var_23 = ((/* implicit */unsigned short) (!(var_2)));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))));
                        var_25 = ((/* implicit */short) arr_33 [i_1] [i_1] [i_1] [i_1]);
                    }
                }
            } 
        } 
    }
    for (short i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
        var_26 = ((/* implicit */signed char) (_Bool)1);
    }
}

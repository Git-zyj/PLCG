/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28094
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
    var_19 = ((var_7) != (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_17))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_7))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_0])), (var_1)))) ? (((arr_0 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned short) ((((arr_1 [i_0]) && (arr_0 [i_0] [i_0]))) && ((!(((/* implicit */_Bool) var_1))))));
        var_22 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)16597)))) + (2147483647))) << (((((/* implicit */int) arr_1 [(_Bool)1])) - (1)))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_2);
    }
    var_23 -= ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)32)), ((short)-10423)));
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_11 [0ULL] [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_9 [i_2])))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) (short)-11945)))))));
                        arr_13 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_4] [i_1])) >> (((/* implicit */int) min((arr_10 [7ULL] [i_2] [i_2] [i_2]), (arr_8 [i_3] [(_Bool)1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_5])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned short)9] [i_2] [(unsigned short)9] [(unsigned short)6])) <= (((/* implicit */int) var_13)))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [(_Bool)1]))))) ? (((/* implicit */int) arr_15 [i_5] [i_3] [i_2])) : (((/* implicit */int) var_3))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_5 [(short)9] [i_2] [i_2])))))) * ((~(((/* implicit */int) var_3))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_29 &= ((/* implicit */_Bool) (-((((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_3])))) * (((/* implicit */int) var_5))))));
                            var_30 = ((/* implicit */short) (-(((/* implicit */int) (short)-11933))));
                            var_31 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_1))))));
                        }
                        var_32 = ((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]);
                        var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(var_9)))))) % ((+(((/* implicit */int) arr_14 [(short)8] [i_2] [i_3] [(unsigned char)7] [i_1]))))));
                    }
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_3] [11ULL] [i_2] [i_1] [i_1])), (var_2))))))))))));
                    var_35 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
}

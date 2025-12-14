/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193180
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
    var_13 ^= ((/* implicit */signed char) ((_Bool) var_2));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4 - 1])) ? (((/* implicit */int) var_4)) : (arr_1 [i_0])))) ? (arr_10 [i_0] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4])))))));
                                arr_13 [i_2] [i_2] [i_2 - 2] [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_6 [(unsigned char)17] [(unsigned char)13] [(unsigned char)17] [(unsigned char)13]));
                                var_14 = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_3] [i_3] [i_4 - 1] [i_4] [i_4])), (((((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_4 - 1] [(short)14] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [2] [i_0] [i_4 - 1] [i_4] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) min((var_15), (var_7)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((2619706507U), (((/* implicit */unsigned int) var_10)))))))), ((~((-(((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (int i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_5 + 2]))) ? (var_7) : (((int) 2619706524U))));
        arr_17 [(_Bool)0] [i_5] = var_1;
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (var_9) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_7 [i_5] [(unsigned short)2] [i_5] [i_5] [(_Bool)1]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (max((((/* implicit */int) var_11)), (arr_15 [i_6] [i_6]))) : (((/* implicit */int) ((unsigned char) 2619706508U)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_15 [i_6] [i_6]) : (max((var_9), (((/* implicit */int) var_0))))))));
        arr_22 [10ULL] [10ULL] &= ((/* implicit */int) (~(min((((/* implicit */unsigned int) arr_8 [i_6] [i_6])), (2619706510U)))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (54))))) : (((/* implicit */int) ((var_5) || (var_11))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_6] [i_6] [(signed char)7] [i_6] [(short)4] [i_6]) << (((((/* implicit */int) var_6)) - (156)))))) ? (((/* implicit */int) arr_16 [i_6])) : ((+(((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_23 [i_7])))) ? (((/* implicit */int) ((short) ((arr_23 [i_7]) - (((/* implicit */int) arr_24 [11U])))))) : (((int) arr_24 [(unsigned char)8])))))));
        var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_23 [i_7]) : (((/* implicit */int) arr_24 [i_7])))) < (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_24 [i_7])))))) ? (((/* implicit */int) ((unsigned char) arr_23 [i_7]))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
    }
}

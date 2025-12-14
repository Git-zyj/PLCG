/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236318
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1781038407)) ? (13057661422355612133ULL) : (((/* implicit */unsigned long long int) 1347714971U)))))))), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13)))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) var_8)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 1840652014U)) ? (((/* implicit */int) (signed char)39)) : (-1781038407))))));
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((var_11) ? (((/* implicit */long long int) 2454315299U)) : (4904719341755965074LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) ? (((((/* implicit */_Bool) -1057079445)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4])))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_8)))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3093693693U))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_5))));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) -1057079456);
        }
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_21 [(signed char)8] [i_0] [i_6] = ((/* implicit */signed char) (!(var_1)));
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) var_2));
            /* LoopNest 2 */
            for (long long int i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((6610113583953218759ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) (~(var_2)))))))));
                        arr_30 [i_0] [i_7] [(signed char)6] [i_0] = ((/* implicit */unsigned long long int) ((var_8) * (((/* implicit */int) arr_7 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 2]))));
                        var_24 = ((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                        var_25 = ((/* implicit */signed char) (~(arr_16 [i_7 - 3] [i_7 + 3] [i_0])));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned int) arr_31 [i_9]);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
        arr_36 [i_9] = ((((/* implicit */_Bool) 5600140049747875945LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (7LL));
        var_27 = ((/* implicit */unsigned char) var_1);
        var_28 ^= ((/* implicit */short) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((arr_31 [i_9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    }
    var_29 = (+(((/* implicit */int) var_7)));
}

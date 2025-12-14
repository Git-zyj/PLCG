/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191188
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) 11437961669139388100ULL))))) ? (((/* implicit */unsigned long long int) (-((~(-1299718711823801730LL)))))) : ((-(var_11)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((arr_5 [i_0] [i_1]) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (arr_3 [i_0])))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)14] [i_1] [(short)5])) ? (((/* implicit */int) arr_4 [(unsigned short)13] [i_1] [i_1])) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max(((short)1111), ((short)1110)))) : (((((/* implicit */_Bool) (short)-10752)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? ((+(((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) arr_0 [i_1]))));
                    var_17 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) var_5))))))));
                }
            } 
        } 
        var_18 *= ((/* implicit */signed char) ((unsigned short) ((max((arr_5 [8ULL] [8ULL]), (((/* implicit */unsigned long long int) (short)-10736)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-10736), (((/* implicit */short) var_6)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [12U] [i_3] [i_3]))))));
            var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-10736)) ? (((/* implicit */int) arr_2 [i_0] [i_3])) : (((/* implicit */int) (short)-1112))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) (short)-10736);
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_4])) : (arr_5 [i_0] [i_4]))))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_22 = ((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((_Bool) 5302107139568252968LL)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_5] [i_5] [i_6]))) : (576460752303423488LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) + (17979214137393152LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)52)) != (((/* implicit */int) (short)29876)))))))));
                        var_23 = arr_11 [i_0];
                        var_24 = ((/* implicit */long long int) ((((((((((/* implicit */int) (short)-24925)) * (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((1771582528) - (1771582528))))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_6 [i_5]))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -576460752303423488LL)) ? (((/* implicit */int) arr_20 [(unsigned char)2] [(unsigned char)2] [i_7] [i_7] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_17 [(_Bool)1] [i_7 - 2] [i_7 + 1]))));
        arr_23 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)1114)) >= (((/* implicit */int) arr_17 [i_7] [i_7] [i_7])))))));
        var_26 |= ((/* implicit */unsigned short) arr_15 [i_7 + 1] [i_7]);
    }
    var_27 -= ((/* implicit */long long int) (short)10736);
}

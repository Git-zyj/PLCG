/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216305
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */_Bool) var_8);
            var_15 += ((/* implicit */unsigned char) (_Bool)0);
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)15]))))) : (max((((/* implicit */int) arr_4 [i_0])), (arr_1 [i_1])))));
            arr_5 [i_0] = ((/* implicit */int) var_3);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_14 [i_0] [i_3 + 3] [i_2] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_4]))))));
                        var_17 = ((/* implicit */unsigned char) ((signed char) arr_8 [i_3 + 2]));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */int) (unsigned char)140);
            var_18 = ((/* implicit */long long int) arr_6 [(_Bool)1]);
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_5] [i_0] [i_7] [i_7] [14ULL] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_7)) << ((((((-2147483647 - 1)) + (((/* implicit */int) var_0)))) + (2147483506)))))));
                            var_19 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 1533156004)))));
                        }
                    } 
                } 
            } 
            arr_28 [i_0] = ((/* implicit */signed char) ((max((arr_8 [i_0]), (arr_8 [i_0]))) % (min((arr_8 [i_0]), (65024)))));
        }
        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
        {
            arr_32 [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2188168770U)) ? (520633703U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))));
            arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
            arr_34 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1533156004))));
        }
        /* vectorizable */
        for (long long int i_10 = 1; i_10 < 14; i_10 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_10 - 1])) ? (((/* implicit */long long int) var_10)) : (((var_6) << (((9223372036854775807LL) - (9223372036854775807LL)))))));
            arr_37 [i_0] = ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4248551942U)))) : (((((/* implicit */unsigned long long int) 7)) & (0ULL))));
        }
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), (2147483629))))))) >> (((((((/* implicit */_Bool) (~(var_4)))) ? (((unsigned long long int) 1533156004)) : (((/* implicit */unsigned long long int) max((var_10), (var_12)))))) - (1533155994ULL)))));
        var_22 = ((((/* implicit */_Bool) (+(arr_21 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1533156020)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
    }
    var_24 = ((/* implicit */unsigned char) ((1533156008) == (((/* implicit */int) (_Bool)0))));
    var_25 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-15)), ((unsigned short)65535)));
}

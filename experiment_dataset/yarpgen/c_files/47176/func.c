/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47176
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
    var_15 = ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */short) ((unsigned short) arr_0 [i_0]));
        arr_2 [3LL] [i_0] = ((/* implicit */short) ((long long int) var_3));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_5 [i_0] [i_0] [(short)9]))) - (((/* implicit */int) var_5))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1]))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((1852727749996696523LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28302))))))));
            arr_8 [(short)10] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)0));
            arr_9 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65280))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(var_10))))));
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) != (var_8)));
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_3 - 1] [(unsigned short)15] [i_3 - 1] [i_3 + 1]))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((_Bool) 33554431LL)))));
                    arr_19 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13)) || (((/* implicit */_Bool) (signed char)-100))));
                }
                arr_20 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_3 + 1] [i_3] [i_2 + 2]))));
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)127))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_5] [i_2 - 1]))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_27 [0ULL] [i_2] [(short)15] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 2]))));
                    var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((unsigned char) var_3)))));
                    var_25 = ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_2 + 2] [i_2]));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (arr_29 [i_0] [i_2] [i_5])));
                    var_27 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_23 [i_7])))) + (((/* implicit */int) var_6))));
                }
                arr_30 [i_5] [(unsigned short)13] [i_0] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_21 [i_0] [i_2] [i_5] [i_5]))))));
            }
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((_Bool) arr_26 [i_0] [i_0] [i_0] [i_2 - 1] [i_2])))));
        }
        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            arr_34 [(unsigned char)13] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [(short)12] [i_8 - 1])) == ((-(arr_31 [i_8 + 1] [i_0] [i_0])))));
            arr_35 [(unsigned char)15] [i_8] = ((/* implicit */long long int) (~(var_8)));
        }
        arr_36 [(unsigned char)0] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        arr_37 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0]))));
    }
    for (short i_9 = 2; i_9 < 14; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) min((max((var_4), (((/* implicit */int) min(((short)-13991), (((/* implicit */short) var_6))))))), (((/* implicit */int) ((min((arr_29 [(short)5] [i_9 - 2] [(short)5]), (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65154))))))));
        var_30 *= ((/* implicit */int) ((((long long int) (unsigned short)256)) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_9 - 1] [i_9 + 1] [i_9 + 1]))))));
    }
}

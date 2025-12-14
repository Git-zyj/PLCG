/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203334
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_2 [i_0] [i_0])));
        var_21 = ((/* implicit */_Bool) arr_1 [0U]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)0)) ? (arr_0 [(unsigned short)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35646))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) % (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_2] [(short)17] = ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2 - 1]))) : (arr_8 [i_1] [i_1] [i_2 + 2]));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3])) % (-1387390352)))) + (((((/* implicit */_Bool) arr_17 [i_2])) ? (var_14) : (1622405452U)))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_1] [i_1] [i_3] [i_4 - 1] [i_5]))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (short)0))));
                            var_24 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-1)))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned char i_8 = 4; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3)) << (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (arr_19 [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [i_2] [i_8] [i_7])) ? (((/* implicit */int) arr_6 [i_6 - 1])) : ((-2147483647 - 1))))) : (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned int) -939815850)) : (3783863770U)))));
                            arr_28 [i_8 - 1] [i_2] [i_6] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) (short)0));
                        }
                    } 
                } 
                arr_29 [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((arr_13 [16U] [i_1] [i_2 + 1] [i_6 - 1] [i_6] [i_6 + 1]) + (1080818709)))));
            }
            for (int i_9 = 2; i_9 < 19; i_9 += 3) 
            {
                var_28 = ((/* implicit */short) (~(1534113095U)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_9] [i_9 + 2] [5ULL] [i_9]))));
                            var_30 = ((/* implicit */unsigned short) (signed char)127);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    arr_42 [i_2] [i_1] [i_1] [i_9] [i_1] [12LL] = ((/* implicit */unsigned short) ((_Bool) arr_19 [6]));
                    var_31 *= ((/* implicit */unsigned short) (_Bool)1);
                }
            }
        }
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((max((1848929976U), (var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [15U] [15U] [i_1] [i_1] [(_Bool)1])))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_1])), ((+(((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
    }
    var_33 = ((/* implicit */int) var_6);
    var_34 = ((/* implicit */short) var_15);
    var_35 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60190)))))) : (var_15))));
}

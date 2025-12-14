/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215679
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [(_Bool)1] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (+(var_5)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), (arr_0 [i_0 - 1])))) ? ((~(((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)13] [i_3]))))) : (293890377))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_12 [i_0 + 2] [i_0 + 2] [i_1] [(_Bool)1] [i_0 + 2] [i_0 + 2] [i_4] |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned char)188)))) ? (((((/* implicit */_Bool) min((var_6), ((unsigned char)174)))) ? (arr_8 [i_1 - 3] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)174)))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))));
                            var_16 = ((((/* implicit */_Bool) 2368711221497520505ULL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (_Bool)0)));
                            arr_13 [i_1] [i_3 - 2] [i_1] [i_1] = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) 16078032852212031111ULL)) ? (((/* implicit */int) arr_9 [i_0] [(unsigned char)3] [i_0])) : (((/* implicit */int) arr_11 [i_3] [10] [i_3] [10] [i_3]))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */short) ((((((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))) >= (262143U))) ? (((/* implicit */int) (short)-11446)) : (((/* implicit */int) (unsigned short)2047))));
                        var_18 *= ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_1 [11] [3LL]))))))), (min((arr_14 [i_0 + 2] [i_0 - 2]), (((/* implicit */short) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7])))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((unsigned char) var_8))))), (max((((/* implicit */int) (short)-1)), (arr_6 [i_0 - 3])))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_24 [i_8] = ((/* implicit */unsigned short) ((((1511412610) == (((/* implicit */int) var_6)))) ? (arr_23 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_22 [i_8] [i_8]))));
        var_20 |= ((/* implicit */int) var_13);
    }
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 &= ((/* implicit */short) var_12);
}

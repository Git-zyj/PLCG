/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246842
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (unsigned short)0))));
        var_13 = ((/* implicit */long long int) var_7);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_3] = ((/* implicit */short) (unsigned char)255);
                            var_14 = (unsigned short)26;
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2305843009209499648LL)) ? (arr_12 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_12 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
            }
            var_17 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            arr_17 [i_5] = ((/* implicit */int) (~(arr_16 [i_0] [i_0] [i_5])));
            arr_18 [i_0] [i_5] [i_0] = ((/* implicit */short) (+(arr_4 [i_5] [i_5] [i_0])));
            arr_19 [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((short) arr_16 [(short)12] [i_0] [i_0]));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) (unsigned char)255);
                        var_19 = ((/* implicit */unsigned char) (unsigned short)65535);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [i_0] [i_0])) ? (arr_24 [i_5] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
        }
        var_21 = ((/* implicit */short) ((int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        var_22 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_8]))))) ? (((/* implicit */int) var_1)) : (var_5)))), (((var_8) - (((/* implicit */long long int) (-(arr_4 [(unsigned char)14] [i_8] [i_8])))))));
        var_23 = var_3;
        arr_29 [i_8] = ((/* implicit */unsigned char) max((var_10), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_3)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        var_24 = ((/* implicit */unsigned short) arr_28 [(short)9]);
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            {
                var_25 = 797368819;
                var_26 = ((/* implicit */short) arr_25 [i_9] [i_9] [i_9] [i_9]);
                arr_35 [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (var_11))))) : (arr_15 [i_10] [i_9] [i_9 - 1])))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(var_10)))))) ? (8397667637725589481LL) : (((/* implicit */long long int) (+(var_5))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) & (min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
}

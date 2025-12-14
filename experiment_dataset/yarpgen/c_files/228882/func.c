/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228882
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
    var_15 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) var_7);
                        var_17 = ((/* implicit */unsigned short) (unsigned char)16);
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 1] [i_0] [i_0 - 2])) || (((/* implicit */_Bool) arr_7 [(unsigned short)10] [i_0 - 1] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (short)32767);
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (2608457195U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_1 + 2] [i_4])) : (((/* implicit */int) var_13)))) - (42440)))));
                        var_22 = ((/* implicit */unsigned short) ((short) ((arr_6 [i_5 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                for (unsigned char i_8 = 3; i_8 < 9; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9214364837600034816LL))));
                            arr_24 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)126)) ? (1686510119U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125)))))));
                            var_24 = ((/* implicit */long long int) 2608457220U);
                            arr_25 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 796724717217876922LL)) || (((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_10 [(short)1] [i_6] [i_6] [i_6]))))));
                        }
                    } 
                } 
            } 
            var_25 = (~(((/* implicit */int) arr_13 [i_0] [i_0 + 1])));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_7))));
        }
        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0 - 3] [i_0 - 1])) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2608457220U)))))));
    }
    var_28 = ((/* implicit */unsigned int) (unsigned short)44475);
}

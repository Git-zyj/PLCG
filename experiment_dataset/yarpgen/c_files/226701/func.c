/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226701
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
    var_17 |= ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) -437622368)), (560728010U))), (((/* implicit */unsigned int) var_4))))) ? ((~(3828620801U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) arr_2 [i_1]);
                var_19 *= ((437622352) >= ((-(((/* implicit */int) var_12)))));
                var_20 = -437622368;
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_8 [i_3] [i_3] = ((/* implicit */unsigned int) arr_4 [(unsigned short)8]);
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25918)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_5 [i_6 + 2])));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_15))));
                            arr_17 [i_2] [i_3] [i_5] [i_3] = var_9;
                            arr_18 [14U] [i_3] [i_3] [i_3] [i_3] [i_2] = (~(((/* implicit */int) arr_4 [i_5 - 2])));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_21 [i_7] [i_7] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1]))) : (arr_10 [4U] [(short)8] [(unsigned char)2] [i_2]))))));
            arr_22 [i_2] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_7 + 1])) || (((/* implicit */_Bool) (unsigned char)221))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */_Bool) 437622352)) && (((/* implicit */_Bool) 3458764513820540928ULL))))));
                            arr_31 [i_2] [i_2] [2U] [(unsigned short)9] [i_2] = (!(((/* implicit */_Bool) var_4)));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7])) ? (arr_23 [i_7 + 1] [i_2]) : (((/* implicit */long long int) 437622391)))))));
                            arr_32 [i_10] = ((/* implicit */unsigned short) ((var_2) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13))) : (3828620801U))) : (((/* implicit */unsigned int) ((int) 3372803731U)))));
                            arr_33 [(signed char)3] [i_7] [i_8] [20LL] [i_10] [i_9] [6ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3828620805U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_3)))));
                        }
                        arr_34 [i_7 + 1] = ((/* implicit */_Bool) ((arr_11 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_29 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8] [i_9 - 1] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [21U] [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_9 - 1] [i_9 - 1])))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned int) (~((~(arr_25 [i_2])))));
        var_26 = ((/* implicit */long long int) (-(9273907813808448733ULL)));
        arr_35 [i_2] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)0))))));
    }
    var_27 = ((/* implicit */short) var_5);
}

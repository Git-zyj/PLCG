/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28248
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (((long long int) var_9)))))));
    var_11 = ((/* implicit */signed char) ((int) (short)-14649));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_7)))));
        var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (~((~(var_9))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) 135291469824LL);
                                var_15 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0))))) % (((/* implicit */int) (unsigned char)239)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_5 [(short)16] [(short)16]))));
            var_17 = ((/* implicit */short) 326843322U);
        }
    }
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            {
                arr_20 [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(signed char)12] [i_7]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6]))) ^ (var_2))))) * (((/* implicit */unsigned int) var_9))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_18 = max((((((/* implicit */int) arr_12 [i_6 + 1] [i_6 + 1] [i_7] [i_6 - 1] [(unsigned char)16])) >> ((((~(((/* implicit */int) arr_11 [i_6])))) + (134))))), (((/* implicit */int) ((unsigned short) var_2))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_2)))))) * (((/* implicit */int) min((var_4), (((/* implicit */short) arr_25 [i_6 - 1] [i_7] [i_7 + 1] [i_7 + 1])))))));
                            /* LoopSeq 2 */
                            for (signed char i_10 = 3; i_10 < 19; i_10 += 3) 
                            {
                                var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_26 [i_7] [i_7] [i_8] [i_6 - 1])))));
                                arr_29 [i_7] [i_9] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (max((((/* implicit */unsigned int) arr_4 [i_6] [i_6] [i_10 + 4])), (arr_23 [i_10] [i_8] [i_7]))))), (((/* implicit */unsigned int) 1048575))));
                            }
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                            {
                                arr_32 [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1048337338U))))) : (((/* implicit */int) (_Bool)1))));
                                arr_33 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((var_8) != (((/* implicit */int) var_0))))))), (((((/* implicit */int) arr_5 [i_7] [i_7])) - (max((var_9), (((/* implicit */int) var_0))))))));
                                var_21 *= ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) (short)-32762)) ? (var_6) : (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) arr_6 [i_6] [i_6] [i_8] [i_9]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}

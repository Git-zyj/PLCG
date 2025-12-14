/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28349
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_2)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) max((var_14), ((~((~(arr_3 [i_0 - 1] [i_1 - 4])))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) ((arr_7 [i_2 + 2] [i_2 - 1]) < (arr_7 [i_2 - 3] [i_2 - 1])));
                var_15 = ((/* implicit */unsigned short) ((signed char) var_5));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (arr_5 [i_2])));
                /* LoopSeq 2 */
                for (signed char i_3 = 4; i_3 < 11; i_3 += 2) 
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) & (-1695374402)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0])) & (((/* implicit */int) var_3))))) ? (((((var_8) + (9223372036854775807LL))) >> (((var_9) + (4392043521095162371LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_10))))))));
                    var_19 |= ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((long long int) (signed char)-1)));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_0))));
                }
                for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_4] [i_2] [i_1] [i_0]) : (((/* implicit */int) var_2))))) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_4 + 3] [i_4 - 1]) : ((+(var_6)))))));
                    var_22 = ((/* implicit */unsigned int) arr_8 [i_1] [i_0 - 2]);
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                var_23 = ((((/* implicit */int) arr_18 [i_5] [i_1 - 2] [i_1 - 4])) / (var_5));
                var_24 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_5 - 1]);
                arr_19 [(unsigned char)9] [(unsigned char)9] [i_5] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 4]))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_25 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [(unsigned char)9] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */int) ((unsigned int) (signed char)-17));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_5] [i_5])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((int) arr_23 [i_5] [i_6] [i_6] [i_5] [i_5] [10] [i_5]))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)11] [i_1 - 1])) ? (var_8) : (((/* implicit */long long int) arr_15 [i_7] [(unsigned short)9] [i_5 - 1] [i_1 - 3]))))));
                    }
                    var_28 = ((((/* implicit */int) arr_2 [i_6] [i_5] [i_0])) << (((((/* implicit */int) arr_16 [9U] [9U])) - (62989))));
                }
            }
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7385051078656191308LL)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)120))));
            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [6])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) var_3)))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_10))));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_28 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_8]))) : (min((((/* implicit */long long int) 2064384U)), (var_8)))))))));
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) 2064397U)) ? (2064384U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
                        var_34 = ((/* implicit */long long int) 2147483647);
                    }
                    var_35 = ((/* implicit */unsigned char) var_8);
                    var_36 = ((((/* implicit */_Bool) min(((unsigned char)144), (((/* implicit */unsigned char) arr_27 [i_8]))))) ? (((/* implicit */int) arr_24 [i_8])) : ((+(arr_25 [i_9 + 1]))));
                }
            } 
        } 
    } 
}

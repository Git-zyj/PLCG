/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27934
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
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 3; i_4 < 8; i_4 += 1) 
                    {
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(short)7] [i_3] [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_1] [i_1])) : (arr_6 [i_3 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_8 [0ULL] [i_1])) << (((/* implicit */int) arr_8 [(unsigned char)8] [i_1]))))));
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_1] [i_1] [i_1] [i_1] [i_0])) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [i_0]))) - (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16154)))))));
                        arr_14 [i_3] [(signed char)2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4 - 3] [i_4] [i_4])) ? (((((/* implicit */long long int) var_18)) ^ (4684046545325118166LL))) : ((~(arr_13 [i_0 + 2] [i_0 + 2] [i_0])))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 3])))))));
                        arr_18 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((_Bool) (signed char)19));
                    }
                    var_24 = ((/* implicit */_Bool) (+(var_18)));
                }
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38449)) ? (((/* implicit */int) (unsigned short)38456)) : (-1851008770)));
                            arr_23 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7] [4ULL] &= ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_0 - 1] [(unsigned short)2] [(unsigned short)2] [i_2])) : (((/* implicit */int) arr_9 [i_1] [2LL] [i_2] [i_6])));
                            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                arr_27 [i_1] |= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (5122978758809494974LL) : (((/* implicit */long long int) 1881462258)))) == (arr_1 [i_0 + 2])));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 7; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (+(1673573282)));
                            var_29 = ((/* implicit */signed char) ((305207752U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)22708)))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) arr_28 [i_0 + 1] [(_Bool)0] [i_0] [i_0 + 1]);
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_1] [i_1 + 2] [i_1] [i_1])) ^ (((/* implicit */int) arr_29 [i_8] [i_1 + 2] [i_1] [i_1]))));
            }
        }
    }
    var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))));
    var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (6784729778017192350ULL)));
}

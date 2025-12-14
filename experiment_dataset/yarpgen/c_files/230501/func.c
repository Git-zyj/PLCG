/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230501
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 516469028)) : (var_8)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))))) ? (-1463808551) : ((~((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_14))));
                        arr_14 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_8 [11] [i_1] [i_2] [i_4]))))) && (((/* implicit */_Bool) ((34359738367ULL) >> (((var_10) - (1416740321))))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(7007586211530592672ULL))))));
                        arr_18 [i_0] [i_1] [i_2 + 1] [i_4] = ((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_2]);
                        arr_19 [(signed char)8] [i_1] [i_2 + 1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1926997800)) + (1073741823U)));
                    }
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((2181747725233478192ULL) <= (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18826))) : (var_8)))))))))));
                    arr_20 [i_0] [i_0] = ((/* implicit */int) (+(((long long int) arr_9 [i_0] [i_2 + 2] [i_2 + 1]))));
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))), ((((+(((/* implicit */int) var_13)))) + (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                            arr_29 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) (short)-1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)45170)) : (((/* implicit */int) (short)15511))));
                    var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3418))) : (var_8))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(arr_12 [i_9 + 1]))))));
                                arr_40 [i_7] [i_8 + 2] [i_9] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [(short)7] [i_0] [i_0] [i_0]);
                                var_25 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_15)) < (138934819))))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_15)))))));
                }
            }
        } 
    } 
}

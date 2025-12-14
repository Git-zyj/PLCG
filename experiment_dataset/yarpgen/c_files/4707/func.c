/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4707
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) arr_4 [i_1] [0LL]);
                var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) var_8);
                    var_21 = ((/* implicit */unsigned long long int) var_7);
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_2 [i_0]);
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] = ((/* implicit */unsigned long long int) (~(((var_7) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */int) (-(arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1])));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0 - 2] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0 - 2] [i_3]))));
                            var_23 = ((/* implicit */int) (((~(var_2))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_24 = ((/* implicit */_Bool) arr_9 [i_0] [i_3]);
                            arr_18 [(unsigned char)12] [i_3] [i_4] [(unsigned char)12] [(signed char)5] [(_Bool)1] = ((/* implicit */long long int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 2]);
                        }
                    }
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (signed char)-98)))))) / (max((((/* implicit */long long int) (_Bool)1)), ((~(var_18)))))));
                    var_26 = ((/* implicit */long long int) 2029708715U);
                    var_27 = ((/* implicit */signed char) ((min((max((arr_9 [(unsigned short)13] [i_6]), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_6])))), (((/* implicit */unsigned int) ((signed char) -1482172301))))) << (max((((/* implicit */int) ((_Bool) var_15))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_3)) - (72)))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 1] [i_7])))))));
                    arr_23 [i_7] [i_1] [i_7] = ((/* implicit */unsigned int) arr_2 [(signed char)11]);
                    var_29 = ((/* implicit */unsigned int) (signed char)-63);
                    var_30 = ((/* implicit */unsigned char) ((unsigned short) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_14))) / (max((arr_11 [7] [i_1] [i_1] [3ULL]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_7])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (signed char i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) max((((((/* implicit */int) (short)32767)) + (((/* implicit */int) arr_10 [i_7])))), (((/* implicit */int) max((((/* implicit */short) (signed char)-78)), ((short)23434))))));
                                arr_29 [i_8] [i_8] [i_7] [i_8] [i_8] [i_7] [i_9 + 1] = ((/* implicit */unsigned short) arr_24 [i_0]);
                                var_32 = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_8] [i_0 + 2] [i_9 - 2])) == (((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_9 - 2])))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_3 [i_0] [i_0 + 3] [i_9 - 2])))))));
                                var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_7]))));
                            }
                        } 
                    } 
                }
                var_34 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)164)) + (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [9ULL])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : ((+(2265258587U)))))));
                arr_30 [12] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_4 [i_1] [i_0 - 2]) != (arr_4 [i_0 + 1] [i_1]))))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (2147483647)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) < (var_12))))) : (var_2)));
}

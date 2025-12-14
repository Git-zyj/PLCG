/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44340
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [(short)5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 353000828U)) != (4149585185942599359ULL)));
        var_12 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned char)13])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((var_5), (var_5)))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */long long int) var_7)) | (arr_4 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) % (((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (var_7))))))));
        var_13 = ((/* implicit */long long int) var_9);
        arr_7 [i_1] = (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)61)), (arr_1 [(short)6])))));
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2])))))))), (max((max((var_0), (var_0))), (var_10)))));
        var_15 = (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 1])) > (((/* implicit */int) arr_1 [i_2 + 2]))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_2] [i_5])), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_2 [(unsigned short)9] [i_2 - 1])) : (((/* implicit */int) ((signed char) arr_2 [(_Bool)1] [i_3])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_20 [i_2] [0U] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_16 [i_2] [i_2])))) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) min((((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
                            var_17 -= (~((+(min((((/* implicit */unsigned int) arr_15 [i_2] [i_3] [i_4] [i_4] [i_2] [i_6])), (var_6))))));
                            var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_11))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */int) var_3);
                            var_20 *= ((/* implicit */_Bool) max(((+(min((((/* implicit */int) arr_1 [i_2 + 2])), (arr_14 [i_2 + 2] [i_2 + 2] [i_5] [i_5]))))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2 + 1] [i_5] [i_2] [i_2 + 1] [i_2])))))));
                            arr_23 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(max((var_5), (((/* implicit */unsigned int) var_4))))));
                            var_21 |= ((/* implicit */_Bool) var_8);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) (+(arr_16 [i_2] [i_2])));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((((/* implicit */int) arr_17 [i_4] [i_3] [i_5] [i_8])) <= (((/* implicit */int) arr_2 [i_3] [i_3])))))))));
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_2] [i_8])) ? (var_7) : (((/* implicit */int) arr_10 [i_2 + 2] [i_3] [i_5])))) + (((/* implicit */int) arr_17 [i_2] [i_3] [i_5] [(unsigned char)9]))));
                            arr_27 [i_4] [i_2] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_4] [i_4] [i_2] [i_4] [i_3] [(unsigned short)7]))) : (arr_8 [(_Bool)1] [i_2])))));
                            arr_28 [(signed char)12] [i_4] [(signed char)12] [(_Bool)1] [i_4] [(_Bool)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_17 [i_4] [8LL] [i_5] [i_8]))))) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_5] [i_5] [i_4] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_3] [i_8]))));
                        }
                    }
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((min((((/* implicit */int) arr_5 [i_2])), (var_9))), ((+(var_9)))))) & (max((max((((/* implicit */unsigned int) arr_9 [i_2])), (var_5))), (((/* implicit */unsigned int) (-(arr_25 [i_4] [i_2] [i_3] [i_2] [i_2]))))))));
                    var_25 = (!(((/* implicit */_Bool) ((max((var_2), (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) max((arr_19 [i_4] [i_3] [i_2] [i_3] [i_2]), (((/* implicit */int) var_11)))))))));
                    var_26 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (unsigned short)40473)))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (((unsigned short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((max((var_1), (var_2))), (max((((/* implicit */long long int) (unsigned short)25063)), (144984787494738993LL)))))));
    var_28 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)30)) / (1626545354)))));
    var_29 = ((/* implicit */unsigned int) var_8);
}

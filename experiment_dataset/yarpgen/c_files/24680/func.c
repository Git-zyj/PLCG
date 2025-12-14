/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24680
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) (~(min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-117)))), (((((/* implicit */int) arr_2 [(unsigned short)14])) - (((/* implicit */int) (_Bool)0))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((arr_0 [i_1 - 2]) << (((((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 1])) - (25587))))) > (arr_0 [i_1 + 1])));
                    arr_10 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0] [i_2])))))) >> (((/* implicit */int) var_9)));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_13 [4] [4] |= ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((int) var_8))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                    arr_15 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_0]))))) < (arr_12 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_3]))))) ? (((((/* implicit */long long int) 363432353U)) / (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)6])) ? (-676953102) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38)))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [(unsigned char)7] [i_0] = ((/* implicit */_Bool) -8039486772489716694LL);
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_1] [i_1])) == (((/* implicit */int) arr_8 [i_1 - 1] [i_4 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) * (arr_12 [1] [i_1] [(unsigned char)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0]))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1 + 1])) - (((/* implicit */int) arr_17 [i_1 - 1]))))) ? (((/* implicit */int) arr_17 [i_1 - 1])) : (((/* implicit */int) arr_17 [i_1 - 2]))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (var_9))))))) || (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(signed char)5])), (var_0)))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_0] [i_1 + 1] [i_5] [i_0])), (arr_6 [5U] [i_1]))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 3931534957U))));
                    arr_24 [i_0] [i_0] [i_5 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) 133948234U)) ? (2779860275471157250ULL) : (((/* implicit */unsigned long long int) 3931534957U)))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_6 [i_5] [(short)9])) - (25575))))))))), (((676953101) << (((/* implicit */int) (!(var_2))))))));
                }
                arr_25 [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) 3931534942U);
                arr_26 [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) var_8);
                            arr_32 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 24U)) ^ (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (-(arr_28 [(signed char)14] [i_7 + 1])))) ? (((((/* implicit */int) arr_6 [(signed char)9] [i_6])) * (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_6] [i_1 + 1])))))) : (((/* implicit */int) (unsigned short)65532))));
                            arr_33 [(signed char)14] [(unsigned short)12] [i_1] [(signed char)14] |= ((/* implicit */_Bool) ((14ULL) | (arr_22 [i_1] [i_7])));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((arr_31 [(_Bool)1] [i_1] [i_1 - 2] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned char)10] [(unsigned char)10])))))))))))));
                            var_21 = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_13))));
    var_23 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
}

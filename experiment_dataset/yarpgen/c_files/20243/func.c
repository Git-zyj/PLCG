/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20243
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned char)73))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) 111905535118187539LL);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (-111905535118187540LL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_14 [i_1 - 3] [i_1] [(_Bool)1] [(_Bool)1] [i_2] = (!(((/* implicit */_Bool) (unsigned char)235)));
                        arr_15 [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)223))) > (((/* implicit */int) (signed char)121))));
                        var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_13 [i_1]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)109)) * (((/* implicit */int) arr_4 [i_3 - 1])))))));
                            arr_22 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_1 - 4] [i_2]));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_6 [6U] [(unsigned char)8]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((arr_8 [i_1] [i_1] [5U]) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [(signed char)3] [i_3]))))) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (((/* implicit */int) ((_Bool) (unsigned char)255))))))));
                            arr_25 [i_2] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (3484679137U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))))) ? ((-(((/* implicit */int) (unsigned char)21)))) : (((/* implicit */int) arr_3 [i_1]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_7] [i_3 - 1] [i_2] [i_1 - 1])))))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            arr_29 [7LL] [7LL] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */_Bool) 2049051887U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_2] [i_5] [i_2])))) : ((-(((/* implicit */int) arr_5 [i_8] [i_3 - 1]))))));
                            var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (((arr_19 [i_2] [i_2] [i_3 - 1]) ? (8796093022208LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_30 [i_2] [13U] [i_3 - 1] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_2]));
                        }
                        arr_31 [(unsigned char)12] [i_2] [i_3] [i_5] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)22))));
                    }
                }
            } 
        } 
        arr_32 [i_1 - 2] = ((/* implicit */_Bool) ((arr_7 [i_1 - 3] [0U]) ? (((/* implicit */int) arr_7 [i_1 - 3] [(unsigned char)2])) : (((/* implicit */int) arr_7 [i_1 - 3] [(_Bool)1]))));
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)0))))))))))));
}

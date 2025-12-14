/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224072
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7))))) : (var_0))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_11))) > (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) var_1)) ? (-2702552007147118797LL) : (((/* implicit */long long int) arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    {
                        arr_14 [i_2 + 2] [i_4 - 2] [i_2] [i_4 - 2] = ((/* implicit */unsigned long long int) arr_0 [i_3 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */signed char) arr_10 [i_4] [i_2] [i_3 - 1]);
                            var_14 ^= ((/* implicit */_Bool) var_0);
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_11))))));
                            arr_21 [i_1] [i_6] [(signed char)0] [8U] [8U] |= ((/* implicit */_Bool) arr_4 [i_3]);
                            var_16 = ((/* implicit */unsigned long long int) var_9);
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7))))) ? (arr_10 [3] [(_Bool)1] [i_1]) : (((/* implicit */long long int) -32744039)));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)180)) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)-6578)) : (((/* implicit */int) var_2))))))))));
    }
    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((signed char) (signed char)119));
        var_19 = max((((((/* implicit */_Bool) (unsigned char)48)) ? (arr_1 [i_7 + 1]) : (((/* implicit */int) (unsigned char)3)))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)26)) : (263315172))));
        var_20 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (unsigned char)202)), (966553542U)))));
        arr_25 [(unsigned short)8] [i_7 - 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1208980663111057019LL)))) ? (((/* implicit */long long int) min((3826009769U), (((/* implicit */unsigned int) arr_0 [i_7 + 1]))))) : ((-(var_9)))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)1))))), ((~(((/* implicit */int) (unsigned short)35614))))))) ? (((/* implicit */int) var_5)) : ((((-(((/* implicit */int) var_6)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (var_7)));
}

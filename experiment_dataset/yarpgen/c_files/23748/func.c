/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23748
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((_Bool) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned char)112);
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned short) var_1));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) == (((/* implicit */int) var_9))))) : (((/* implicit */int) (unsigned short)60277)))) : (((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_3)) : (((int) arr_7 [i_1] [i_1]))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) min((min((arr_6 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned short)59418))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5259))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (arr_6 [i_1] [i_1] [i_1])))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)15]))) | (-1086487040831188968LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)3)), (arr_11 [(signed char)18]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (unsigned short)6118))))) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) ((unsigned short) (short)25330)))))) : ((~(max((((/* implicit */unsigned long long int) arr_12 [(short)12] [i_3] [i_1])), (18446744073709551615ULL)))))));
                        arr_17 [(unsigned char)5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_4])) / (((/* implicit */int) ((signed char) min((arr_11 [i_1]), (arr_4 [i_1])))))));
                        var_17 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_7 [i_4] [i_5])))));
                    }
                } 
            } 
        } 
    }
    var_18 = var_10;
}

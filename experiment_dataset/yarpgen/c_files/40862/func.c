/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40862
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_0))));
    var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(10ULL))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [4LL] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-40))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(unsigned char)2]);
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)38211))));
                var_18 = ((/* implicit */int) ((unsigned int) arr_5 [i_0] [(short)3] [i_2 + 1]));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)27324)), (((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) (short)19863))))))), (((unsigned int) min((arr_10 [i_0]), (((/* implicit */long long int) (unsigned short)38211)))))));
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
            for (short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                arr_17 [i_0] [i_0] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_14)));
                var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)75)) ? (arr_7 [i_4 - 3] [i_4 - 2] [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 3] [i_4 - 2] [3]))))));
            }
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 147209612);
            var_21 ^= ((/* implicit */signed char) (unsigned char)88);
        }
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (short)4659)) ? (((arr_1 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (-1757717622)))) >= ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_16 [9U] [i_5] [i_5] [i_5])) : (arr_11 [8])))))))))));
        var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (long long int i_6 = 4; i_6 < 9; i_6 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)27325)) ? (arr_10 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6] [i_6]))))) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))) <= (arr_19 [i_5] [i_6])));
            var_25 = ((/* implicit */unsigned char) 8638974473962621591LL);
            arr_25 [i_5] [i_6 - 3] [i_6] &= ((/* implicit */short) arr_11 [i_6 - 4]);
        }
        var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)231)), ((~(((/* implicit */int) var_3))))))), (3659885917769822864ULL)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204700
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) % (max((((/* implicit */unsigned int) 2147483647)), (1856633375U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)0)))))))))))));
        arr_4 [(unsigned short)6] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)15)))) ? (((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_5 [2U] |= ((/* implicit */int) (_Bool)0);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 262435416U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 15266289749359488980ULL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_1 [7LL]))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_6))) / (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 1]))));
            var_20 = ((/* implicit */signed char) (((_Bool)1) ? (68719214592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25473)))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) (signed char)(-127 - 1))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(var_7))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((68719214594ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */unsigned long long int) var_12);
                            arr_22 [i_1] [i_1 - 2] [i_1 - 2] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_5] [i_1 - 1] [i_5] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_1]))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [9ULL] [i_4] [i_7]))));
                            var_26 += ((/* implicit */int) ((signed char) ((unsigned int) arr_9 [i_1] [(signed char)16])));
                            arr_25 [i_1] [i_5] = ((/* implicit */unsigned char) var_15);
                            arr_26 [(unsigned short)19] [i_5] [i_5] [i_4] [i_5] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 717059426U)) ? (((/* implicit */int) (short)1157)) : (((/* implicit */int) (short)-8))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (short)6)))))));
                            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)31683)) : (((/* implicit */int) (unsigned char)113))));
                        }
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (unsigned short)65531))));
                        var_29 = ((/* implicit */int) arr_8 [i_1] [i_1] [i_5]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                var_30 += ((/* implicit */unsigned short) max((-2706931543058701272LL), (((/* implicit */long long int) (unsigned char)35))));
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) var_8))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_14 [i_8 - 1] [i_8] [i_8])))))))));
                arr_31 [i_9] [i_8 + 1] |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_8] [i_9] [i_8] [i_9] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_24 [6] [i_9] [6] [i_8 - 1] [i_8 + 1] [i_9] [i_9])))));
            }
        } 
    } 
}

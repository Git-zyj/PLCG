/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230025
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
    for (short i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 - 2] [(_Bool)1])))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)190))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (arr_2 [(signed char)0] [(_Bool)1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16327460081719613063ULL))))))))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55976)) ^ (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)4])) ? (((/* implicit */int) (unsigned short)25756)) : (arr_0 [i_0] [4ULL])))))) & (((0U) | (4294967295U)))));
    }
    for (short i_1 = 3; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [(_Bool)0] = ((/* implicit */long long int) var_0);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2119283991989938557ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-5605)) ? (((/* implicit */int) (signed char)-32)) : (-846485344))) < (((/* implicit */int) arr_3 [i_1 - 1])))))) : (4294967291U)));
            arr_11 [i_1] = max((((/* implicit */short) var_8)), (arr_3 [(_Bool)1]));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_17 [(_Bool)1] [i_3] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1] [i_3 + 2] [i_3])), (((arr_0 [(unsigned short)19] [i_2]) & (((/* implicit */int) (unsigned short)16413))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (arr_13 [i_1] [i_3] [i_4])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_20 [15ULL] [i_2] [i_3] [4] [i_3] [(short)5] = ((/* implicit */unsigned int) max((arr_12 [20ULL] [i_3]), (((/* implicit */signed char) ((((/* implicit */_Bool) 17741868424618443938ULL)) || (((/* implicit */_Bool) arr_16 [i_4 + 1] [(short)3] [i_4 + 1] [(short)16])))))));
                            arr_21 [(short)14] [i_2] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */_Bool) max((max((arr_18 [i_1] [i_1] [i_1 - 3] [i_3 + 2] [i_3]), (arr_14 [(signed char)1]))), (((/* implicit */signed char) ((var_3) > (((/* implicit */long long int) (+(((/* implicit */int) (short)-10187))))))))));
                            arr_22 [(_Bool)1] [(short)10] [i_3] [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_1] [2LL]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            arr_26 [(short)18] [i_2] [(signed char)4] [(_Bool)1] [(signed char)14] [i_2] [(_Bool)0] |= ((/* implicit */short) var_3);
                            arr_27 [i_3] [19] [i_3] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) + (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) < (((/* implicit */int) (signed char)-93))))) == ((+(((/* implicit */int) arr_12 [i_1] [i_3])))))))));
                            var_15 = (i_3 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_18 [i_3] [1LL] [11U] [i_4 - 2] [i_3]), (((/* implicit */signed char) (_Bool)1))))) << (((2119283991989938557ULL) - (2119283991989938528ULL)))))) : (((/* implicit */long long int) ((((((/* implicit */int) min((arr_18 [i_3] [1LL] [11U] [i_4 - 2] [i_3]), (((/* implicit */signed char) (_Bool)1))))) + (2147483647))) << (((((2119283991989938557ULL) - (2119283991989938528ULL))) - (29ULL))))));
                        }
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_18 [18LL] [i_2] [12ULL] [2U] [i_2])))) | (((((/* implicit */_Bool) arr_18 [(short)2] [(short)2] [22] [i_2] [i_2])) ? (((/* implicit */int) (signed char)27)) : (-7))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((arr_0 [i_4 + 1] [i_7 + 1]) >> (((arr_0 [i_4 + 1] [i_7 + 1]) - (513814044))))) >= (max((var_4), (arr_0 [i_4 - 1] [i_7 + 1])))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_9)))));
                            var_19 = ((/* implicit */long long int) var_7);
                        }
                    }
                } 
            } 
            arr_30 [(signed char)12] = ((/* implicit */short) (_Bool)1);
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_40 [i_9] [6U] [1LL] [i_8] [i_10] [(short)22] = ((/* implicit */long long int) (+(-1222180835)));
                            arr_41 [i_10] |= ((/* implicit */short) (~(arr_36 [7ULL] [(signed char)16] [(signed char)16] [i_9] [i_9])));
                            var_20 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    var_21 = ((signed char) max(((~(var_5))), (((/* implicit */unsigned int) var_6))));
    var_22 = (+(((var_9) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
}

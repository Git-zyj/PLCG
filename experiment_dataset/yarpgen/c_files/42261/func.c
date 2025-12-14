/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42261
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((-(max((36028788429029376ULL), (14219053993560397604ULL))))) : ((((~(var_15))) >> (((max((var_8), (((/* implicit */unsigned long long int) var_6)))) - (11945862183945982835ULL))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_8 [2ULL] [i_1] [i_0] = ((/* implicit */_Bool) max((var_1), (((int) 14219053993560397606ULL))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((unsigned long long int) (~(arr_7 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_2 + 4] [i_2 + 4] [i_2 + 2])), (arr_0 [i_0])))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_11 [5ULL]))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_3 + 1]))));
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) arr_10 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)40)))) : (arr_1 [i_0] [i_4]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-40)), (min((((/* implicit */int) (unsigned short)18394)), (-1214631813))))))));
            var_22 *= ((/* implicit */unsigned long long int) ((signed char) ((max((((/* implicit */unsigned long long int) arr_14 [i_4])), (arr_13 [i_0] [(signed char)2]))) * (((/* implicit */unsigned long long int) arr_0 [0ULL])))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [i_0] [5ULL] [i_0] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5] [i_5])) ? (((unsigned long long int) arr_13 [i_4] [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_5] [i_0] [i_0]))))))) - ((+(arr_13 [(signed char)2] [i_0])))));
                var_23 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_4] [i_5]);
            }
            var_24 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_4])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (4227690080149154009ULL))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            arr_23 [7ULL] [i_0] [i_0] = (~(((((/* implicit */_Bool) 14219053993560397607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (4298228217357917074ULL))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [5ULL] [i_0] [i_0])) ? (arr_5 [i_0] [i_6]) : (arr_17 [i_6] [i_0])));
        }
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 4; i_9 < 9; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_8] [i_8] [i_10]);
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9])) && (((/* implicit */_Bool) arr_32 [i_9]))))), (min((((/* implicit */int) arr_4 [i_7] [i_7] [i_10])), (((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((915520320U) - (915520320U))))))))))));
                        }
                    } 
                } 
            } 
            arr_36 [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) ((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_0]))))))) * (((unsigned long long int) (_Bool)0))));
        }
        var_28 = ((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(unsigned short)0] [i_0]);
    }
    var_29 = ((unsigned short) (_Bool)1);
}

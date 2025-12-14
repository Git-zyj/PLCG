/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220188
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 *= ((/* implicit */signed char) (+(-1LL)));
        var_16 = ((/* implicit */unsigned int) min((var_16), ((+(arr_1 [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_17 = ((((/* implicit */unsigned int) (-(arr_9 [i_3] [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_2 [i_3] [(signed char)5] [i_0])) ? (((/* implicit */unsigned int) arr_7 [i_3] [i_1] [i_0])) : (arr_2 [i_0] [i_1] [i_3]))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) - (((int) 2653807675U))));
                        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_2 - 3] [i_1])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_12 [4] [i_1 + 1] [4] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (+(7715632284422580190LL)));
                            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)64))));
                            var_21 = -257156320157667138LL;
                            var_22 *= ((int) (!(((/* implicit */_Bool) -787253793))));
                            arr_13 [i_0] [i_0] [i_1 + 4] [i_2 + 4] [i_3] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) arr_7 [i_1 - 3] [i_2] [i_4])) | (arr_2 [i_0] [i_1 + 1] [i_4])))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = 1090055718U;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                arr_17 [i_0] [i_1] [i_0] [i_5] = ((signed char) (signed char)5);
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) ((2527807633U) != (arr_15 [i_1 - 3] [i_5 + 3] [i_0] [i_1 - 3])));
                var_23 = 3921221878U;
            }
            var_24 = ((/* implicit */signed char) (-(-154334070)));
        }
        for (unsigned int i_6 = 4; i_6 < 12; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                for (int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((int) -154334057)))));
                            var_26 = ((/* implicit */signed char) arr_15 [i_9] [i_0] [i_0] [i_6]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */signed char) (~(3930399175141590010LL)));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */_Bool) arr_6 [i_6 - 4] [i_6] [i_0] [i_0])) ? ((+(3204911556U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 3] [i_6] [i_6 - 2] [i_6] [i_6])))))));
            var_29 = ((/* implicit */signed char) arr_16 [i_6 - 3] [i_6 - 3] [i_6]);
        }
        for (unsigned int i_10 = 4; i_10 < 12; i_10 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (signed char)112))));
            arr_31 [i_0] = ((/* implicit */int) ((signed char) (signed char)6));
        }
        for (unsigned int i_11 = 2; i_11 < 13; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) arr_26 [(signed char)11] [i_0] [i_0] [(signed char)11] [i_12] [i_13]);
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_24 [i_0] [i_11] [i_0] [i_13] [i_13])) : (3204911556U)))) && (((/* implicit */_Bool) (signed char)-31))));
                    }
                } 
            } 
            var_33 = ((/* implicit */signed char) arr_4 [i_11 + 2] [i_11 + 2] [i_0]);
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_0] [i_11 + 1] [i_11])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)-115))));
            var_35 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 1090055740U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [6LL]))) : (7715632284422580190LL))));
        }
    }
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))))), ((-(var_2))))))));
}

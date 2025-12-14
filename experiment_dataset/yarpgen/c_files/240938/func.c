/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240938
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
    var_10 = ((/* implicit */_Bool) min((var_5), (((/* implicit */int) max((var_2), ((unsigned char)10))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((short)511), (((/* implicit */short) (unsigned char)246))))) : ((-(((/* implicit */int) (unsigned short)17579)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */long long int) arr_6 [7ULL] [(_Bool)1]);
                            var_12 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_3])) ? (arr_8 [i_0] [i_1] [i_1] [(signed char)4] [i_1]) : (min((arr_7 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]), (((/* implicit */long long int) (short)15702))))))));
                            var_13 = ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_3] [(unsigned char)6]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (signed char)-117))));
                            arr_16 [(unsigned short)9] [(signed char)8] [i_2] [i_1] [(unsigned short)9] [i_2 + 4] [i_2] = ((/* implicit */unsigned char) arr_9 [i_1] [i_3]);
                            arr_17 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 4; i_6 < 10; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        arr_25 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_1 [i_8]);
                        var_15 |= ((/* implicit */unsigned char) arr_21 [i_8]);
                        arr_26 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((min((arr_21 [i_6 - 4]), (((/* implicit */unsigned long long int) arr_2 [i_7])))) + (((/* implicit */unsigned long long int) (+(arr_7 [i_6 + 2] [(_Bool)1] [i_6 - 2] [(short)4] [i_6] [i_6 - 4]))))));
                        var_16 = ((/* implicit */unsigned char) (-(var_0)));
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */short) var_2);
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            arr_30 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -2117776028)) : (((((/* implicit */_Bool) (unsigned short)2601)) ? (-7561404420600833649LL) : (((/* implicit */long long int) 2117776017))))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_4 [i_11] [i_9] [i_9]);
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_19 [i_11 + 1] [i_11] [i_11]), (arr_19 [i_11 + 1] [i_0] [(_Bool)1]))))));
                    }
                } 
            } 
            var_19 ^= ((/* implicit */long long int) ((_Bool) (((-(arr_35 [(signed char)4] [i_9] [i_9] [i_9]))) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_9] [i_0]))))));
        }
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 7561404420600833652LL))))), ((~(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) min((((/* implicit */long long int) (short)26870)), (1029538002115122099LL))))));
    }
    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_0) / (7561404420600833645LL))))));
}

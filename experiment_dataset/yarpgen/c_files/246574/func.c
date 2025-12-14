/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246574
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned int) ((unsigned char) (_Bool)1)));
        var_21 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) var_10))))) || ((!(((/* implicit */_Bool) arr_0 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (((0LL) * (0LL)))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) -29LL));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_2] [i_2]))), (max((((/* implicit */unsigned long long int) -8LL)), (arr_7 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (int i_5 = 4; i_5 < 8; i_5 += 2) 
                {
                    {
                        var_23 -= ((/* implicit */signed char) 0LL);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_12 [(signed char)5] [(signed char)5]))) > (((/* implicit */unsigned long long int) 14LL))))))));
                        var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) min(((~(3899855117U))), (((/* implicit */unsigned int) (signed char)-6))))), (((((/* implicit */_Bool) max((arr_3 [i_2] [i_4]), ((unsigned short)7)))) ? (((((/* implicit */_Bool) var_12)) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)65))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2] [i_2])))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_4] [i_5 - 2] [i_2])) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (arr_15 [i_2] [i_3] [i_4] [i_5 - 2] [i_2]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (7LL)));
            var_28 *= ((/* implicit */_Bool) ((unsigned short) (signed char)119));
        }
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_29 = ((/* implicit */_Bool) min((arr_19 [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8] [i_6])) && (((/* implicit */_Bool) arr_25 [i_6] [i_8])))))));
            var_30 = arr_22 [i_8] [i_6];
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 4; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_31 = max((((((/* implicit */int) arr_18 [i_9 - 1])) >= (((/* implicit */int) arr_18 [i_9 - 1])))), (var_4));
                        var_32 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (unsigned short)46493)), (arr_32 [i_10] [i_8] [i_10] [i_10 - 3]))), (arr_30 [i_10] [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 1] [(unsigned short)6])));
                        var_33 = ((/* implicit */_Bool) var_8);
                        arr_34 [i_6] [i_8] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_27 [i_8] [i_8] [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_9 - 1]))))) : (((/* implicit */int) min((arr_18 [(_Bool)1]), (arr_18 [8U])))))), (((/* implicit */int) (!(((((/* implicit */_Bool) 7370368041439318679ULL)) || (((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            arr_37 [7LL] [7LL] [i_11] = ((/* implicit */signed char) arr_17 [3LL]);
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(arr_32 [(short)0] [i_11] [i_6] [i_11])))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_6])) ? (arr_23 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_11] [i_11])))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            arr_40 [i_6] = ((/* implicit */int) arr_23 [i_6] [i_12] [i_12]);
            var_36 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_17 [9]))))));
            var_37 += ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) 3021398354476589174LL)) ? (((/* implicit */int) (short)7429)) : (((/* implicit */int) (_Bool)1)))))));
            arr_41 [(short)6] = ((/* implicit */signed char) var_17);
        }
        var_38 ^= ((unsigned char) arr_27 [(signed char)4] [i_6] [(_Bool)1]);
        arr_42 [i_6] = ((/* implicit */long long int) ((short) arr_22 [i_6] [i_6]));
    }
    var_39 = ((/* implicit */unsigned long long int) var_7);
}

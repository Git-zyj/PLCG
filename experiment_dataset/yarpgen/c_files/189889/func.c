/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189889
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [12LL]);
        arr_3 [9U] [(signed char)0] &= ((/* implicit */unsigned int) max((((18216565150720281267ULL) & (arr_0 [i_0]))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max(((+(var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)92))))))))));
        var_12 = ((/* implicit */signed char) max((863673043682978718ULL), (17583071030026572906ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1]))))) == (((/* implicit */int) arr_4 [i_1])))))));
        var_14 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_7 [(short)20] [i_1])))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (var_2)))));
    }
    var_15 = var_9;
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned short) var_6);
                        arr_20 [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2 + 1])), (arr_15 [i_2 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) & (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_16 [i_4 + 3] [i_3] [i_4 + 3] [i_5])) : (((/* implicit */int) ((signed char) (signed char)127)))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((17583071030026572913ULL), (((/* implicit */unsigned long long int) (signed char)127)))), (arr_11 [i_5])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) arr_7 [i_2] [i_3]))))), (var_3)))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) arr_15 [i_2]);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = (signed char)-18;
        arr_24 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6 + 1])) ? (arr_11 [i_6 + 1]) : (arr_11 [i_6 + 1])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-112))));
                                arr_38 [i_7] = ((/* implicit */long long int) var_10);
                                var_20 |= ((((/* implicit */_Bool) arr_13 [i_11 + 1] [i_8 + 1] [i_7 + 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11 + 1] [i_8 + 1] [i_7 + 1]))));
                            }
                        } 
                    } 
                    arr_39 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1959280076141429887ULL)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)17))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        arr_42 [i_7] [i_8] [i_9] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) == (var_1)));
                        arr_43 [18LL] [22ULL] [22ULL] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_8 + 1])) ? (((/* implicit */int) arr_4 [i_8 + 1])) : (((/* implicit */int) arr_4 [i_8 + 1]))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_9] [i_8])) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_9] [i_9]))))))));
                        var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) var_9)))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_7 + 1])) ? (((/* implicit */int) arr_10 [i_7 + 1])) : (((/* implicit */int) arr_10 [i_7 + 1]))));
        var_25 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) arr_27 [i_7] [i_7])));
    }
    for (unsigned int i_13 = 2; i_13 < 17; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max((arr_1 [i_14 + 1] [i_13 - 1]), (min((var_5), (arr_1 [i_14 + 1] [i_13 + 1]))))))));
                    var_27 = ((/* implicit */unsigned short) max(((signed char)-124), ((signed char)0)));
                }
            } 
        } 
        arr_52 [i_13] = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned long long int) arr_41 [i_13] [i_13 - 1])), (min((arr_17 [i_13]), (var_5))))));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 4; i_16 < 17; i_16 += 4) 
        {
            arr_57 [i_13] [i_16] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_16 - 2] [i_16 - 4] [i_16 - 3] [i_16 + 1])))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_13])) ? (max((((/* implicit */unsigned long long int) arr_45 [i_16 + 1])), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 863673043682978718ULL)) ? (((/* implicit */int) (unsigned short)40287)) : (((/* implicit */int) (signed char)106)))))));
        }
        var_29 *= ((/* implicit */unsigned long long int) ((unsigned short) (short)32760));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))))), (var_2)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_1)) ? (16152210546166336387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))))));
    var_31 += ((/* implicit */long long int) var_6);
}

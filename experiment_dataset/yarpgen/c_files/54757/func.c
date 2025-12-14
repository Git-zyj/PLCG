/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54757
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), ((+(arr_1 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)8]))));
        var_13 = ((/* implicit */int) max((((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_10))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_1])), (max((((/* implicit */short) arr_4 [i_1] [i_1])), (var_4)))))) ? ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_5 [i_1] = ((/* implicit */short) (~(max((((/* implicit */int) max((var_11), (((/* implicit */short) arr_4 [i_1] [(signed char)6]))))), ((+(((/* implicit */int) var_1))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2 - 3] [i_2 - 1])))))));
            var_16 = ((/* implicit */signed char) ((arr_6 [i_2 - 3] [i_2] [i_2 - 4]) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(signed char)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_11)))))));
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51250)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (0LL)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_8 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 4]))) : ((+(arr_9 [i_3] [i_5 + 1])))));
                            arr_18 [i_2] = (-((-(((/* implicit */int) var_8)))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
                            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_1] [i_2]))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 - 3])) ? (((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2 - 3] [i_2 + 1] [i_2 + 1]))));
        }
        var_21 &= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    var_22 = (-(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) var_11);
                    var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(signed char)13] [i_6])))))) ? (arr_25 [i_8 - 1] [0U] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_5)) : (arr_23 [i_6] [i_7]))))))));
                    arr_26 [i_6] [(_Bool)1] [i_8] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_23 [i_8 - 1] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)14297))))) : (max((arr_19 [i_7] [0U]), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */signed char) arr_21 [i_7])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (short i_10 = 2; i_10 < 20; i_10 += 1) 
                        {
                            {
                                arr_31 [(signed char)8] [i_9] [i_9 + 1] [i_8] [i_9] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)253)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))));
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : ((+(7425392754963253638ULL))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (+(min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6])))))))));
                }
            } 
        } 
    } 
}

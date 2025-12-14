/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214328
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) * (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (var_2))) | (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 260046848))))))))));
    var_13 = ((/* implicit */int) min(((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) / (var_11))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_5))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -536160977)) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (unsigned short)6)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) ((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 16994456059122532838ULL))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_0] [i_1] [i_2])));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_15 = arr_3 [i_0];
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [14] [i_1 - 1]), (((/* implicit */long long int) arr_5 [i_2] [i_1] [(short)4]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (signed char)80)))) : (((/* implicit */int) max((min((((/* implicit */short) (signed char)-37)), (arr_7 [i_0] [i_1] [i_0] [(signed char)15]))), (((/* implicit */short) arr_6 [i_0] [i_0])))))));
                    }
                    var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [(short)12] [i_2]);
                    arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)26408)), (arr_11 [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_0] [i_0]))) : (max((min((((/* implicit */long long int) (signed char)30)), (var_11))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) != (0U))))))));
                    var_17 += ((/* implicit */unsigned int) min((max(((unsigned short)6), (arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (max((arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (arr_9 [i_2] [i_2] [i_2] [i_1] [i_0])))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) var_3);
    }
    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_7] [i_7] [(short)12])) + (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_16 [i_4 + 2])))))))));
                        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_7] [i_6] [i_6 - 1])) ? (arr_25 [i_7] [(unsigned short)6] [(unsigned short)6] [i_6 + 1]) : (arr_25 [i_7] [i_7] [i_7] [i_6 + 1])))));
                        var_20 ^= (~(var_11));
                        /* LoopSeq 2 */
                        for (int i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_15 [i_7]);
                            var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_17 [i_8 - 3]), (arr_17 [i_8 + 2])))), (var_2)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (arr_33 [i_5])));
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((+(arr_28 [i_6] [i_5] [i_5] [i_5]))), (arr_22 [i_6 + 1] [i_6] [i_4 - 1])))), (((unsigned long long int) (!(((/* implicit */_Bool) arr_17 [13U])))))));
                            var_25 = ((/* implicit */unsigned long long int) var_8);
                            var_26 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned char) arr_20 [i_4] [8] [i_4]))) ? ((+(var_11))) : (((/* implicit */long long int) max((arr_32 [i_5] [0] [i_5] [0] [i_6]), (((/* implicit */int) var_3))))))) / (((/* implicit */long long int) max((arr_23 [i_4] [i_4] [i_4] [i_6]), (((/* implicit */int) arr_18 [i_4] [i_4])))))));
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_4] [(unsigned char)9] [i_6] [i_6] [i_4] [i_4]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) 
        {
            for (short i_11 = 2; i_11 < 21; i_11 += 3) 
            {
                {
                    var_28 *= ((/* implicit */signed char) min((arr_31 [i_4] [i_4] [(unsigned char)11] [i_4 + 1] [i_4] [i_4]), (((/* implicit */long long int) arr_20 [i_10] [22U] [i_10]))));
                    var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_2) : (((/* implicit */long long int) min((((/* implicit */int) arr_36 [(short)13] [(short)13])), (var_7))))))));
                }
            } 
        } 
        var_30 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 1])) ? (arr_19 [i_4] [i_4 + 2]) : (arr_19 [i_4 - 1] [i_4 + 1]))), (arr_19 [i_4 + 2] [i_4 + 1])));
    }
    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_12] [i_12]))))) ? (arr_8 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_12] [i_12]))))))));
        var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_12] [i_12] [7] [i_12]))))), ((~(arr_23 [i_12] [i_12] [i_12] [i_12])))))), (((max((((/* implicit */unsigned long long int) arr_15 [i_12])), (arr_41 [i_12]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
    }
}

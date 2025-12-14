/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48569
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 *= ((unsigned short) max((((arr_1 [20LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)18] [(signed char)18]))))), (((((/* implicit */_Bool) (unsigned short)1792)) ? (arr_1 [(_Bool)1]) : (var_9)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_12 = (i_0 % 2 == zero) ? (((/* implicit */int) ((((arr_1 [i_0]) / (arr_1 [i_0]))) << ((((+(arr_1 [i_0]))) - (7083810333274538255LL)))))) : (((/* implicit */int) ((((arr_1 [i_0]) / (arr_1 [i_0]))) << ((((((+(arr_1 [i_0]))) - (7083810333274538255LL))) + (7743679300428001958LL))))));
            var_13 = ((/* implicit */unsigned short) var_4);
            arr_6 [i_0] [i_0] [i_1] = (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-863748981)))), (var_7))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_4 [i_3 - 4] [i_3 - 3])) ? (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 4] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2]))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) < (((/* implicit */int) arr_12 [i_0]))))) <= (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_12 [i_3]))))));
                        var_16 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))))) : (max((((/* implicit */int) (short)1843)), (((((/* implicit */int) arr_12 [i_0])) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3])))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25777))) : (var_9))) << (((((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-77)))) + (25504))))), ((+(var_9)))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) > (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_4]))) : (var_7))))) ? (max((((/* implicit */unsigned long long int) (signed char)-87)), (arr_3 [(signed char)14]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(unsigned short)12] [(unsigned short)12]))))))))));
            var_18 = max((((1171473386837657515ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) + (var_4)))))), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (signed char)-103)))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))) && ((!(arr_13 [i_0] [i_0] [i_0] [i_4])))));
        }
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_20 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */int) arr_16 [(_Bool)1])) : (((/* implicit */int) arr_16 [(short)0]))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [1LL] [i_5] [1LL] [i_5])) / (((/* implicit */int) arr_10 [i_0] [i_5] [i_5] [i_5]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_5]))))))))));
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_22 = arr_7 [i_0] [i_6] [i_7];
                arr_25 [i_0] = ((/* implicit */_Bool) (~(((unsigned long long int) max((arr_4 [i_0] [(unsigned short)5]), (((/* implicit */int) var_3)))))));
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    arr_28 [i_0] [i_0] [(unsigned short)17] = ((/* implicit */int) (signed char)84);
                    arr_29 [i_0] [i_6] [i_6] [(_Bool)1] |= ((/* implicit */long long int) arr_4 [i_7] [i_8]);
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(var_4))))));
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_24 += ((/* implicit */unsigned long long int) arr_9 [10]);
                    arr_34 [i_0] [i_0] [i_7] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) arr_5 [i_0]))))), (max((var_6), (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
                    arr_35 [i_0] [i_6] [i_6] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0]))))) ? (((((/* implicit */int) arr_11 [i_7] [i_9])) % (((/* implicit */int) ((signed char) var_0))))) : (((arr_26 [i_0] [i_0] [9ULL] [i_7] [i_9]) ^ (((/* implicit */int) arr_15 [i_0]))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(short)18] [(short)18] [i_6] [i_6] [(unsigned short)0] [i_9])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(_Bool)1] [i_6] [i_7] [i_9] [i_7] [i_6])))))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)10] [(unsigned short)10])))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) arr_0 [(short)2] [(unsigned char)0]))))))))));
                }
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */signed char) -785669487);
            }
            for (short i_10 = 3; i_10 < 21; i_10 += 3) 
            {
                arr_39 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(unsigned short)14] [(unsigned short)14] [i_10 - 1])) * (((/* implicit */int) arr_22 [i_0]))))))) ? (((arr_7 [i_10 + 1] [i_10 - 3] [i_10 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10 + 1] [i_10 - 3] [(unsigned short)11] [i_10]))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_21 [i_0])), (var_4))))));
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_38 [i_12] [i_10 - 2] [i_11] [12LL])) : (arr_19 [i_12]))))))));
                            arr_46 [i_0] [20LL] [i_6] [i_6] [i_11] [i_12] = ((/* implicit */short) max((max((var_0), (((/* implicit */unsigned int) arr_2 [i_11 + 1] [i_11 + 2])))), (((/* implicit */unsigned int) max((arr_2 [i_11 - 1] [i_11 + 1]), (arr_2 [i_11 - 1] [i_11 - 1]))))));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_33 [i_0] [i_6] [i_0] [i_0])), (var_0)))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)36)) % (((/* implicit */int) arr_33 [i_6] [i_0] [i_0] [i_0])))))));
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            {
                arr_52 [i_13] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_14] [i_13] [i_14] [i_14]))) / (var_2)))));
                arr_53 [(unsigned char)17] [i_14] [i_14] = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_5))))) != (var_9))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 2; i_16 < 9; i_16 += 3) 
        {
            {
                var_28 += ((/* implicit */signed char) arr_1 [(_Bool)0]);
                arr_59 [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(var_4)))), (max((((/* implicit */unsigned long long int) var_8)), (var_10)))));
                arr_60 [4U] [4U] = ((/* implicit */int) ((((/* implicit */int) ((((((((/* implicit */int) (short)-1853)) + (2147483647))) << (((((/* implicit */int) arr_5 [16LL])) - (37))))) != (((/* implicit */int) (unsigned short)480))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1)))))) < (max((((/* implicit */long long int) arr_26 [12U] [(_Bool)1] [(_Bool)1] [i_15] [i_16 + 1])), (var_9))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225587
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_8)) : (max((var_5), (((/* implicit */long long int) var_13))))))) ? (((max((((/* implicit */unsigned int) var_2)), (746457597U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((var_2) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_5)))))))));
    var_17 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((_Bool) arr_2 [i_0]));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [(short)9] [i_4])) | ((((_Bool)0) ? (((/* implicit */int) (short)-6061)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_3] [i_2 + 1] [i_1]);
                        }
                        var_19 = ((((/* implicit */_Bool) (~(3002108206U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))) : (arr_7 [i_2 - 1]));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((((_Bool) (signed char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (arr_7 [3ULL])));
            arr_16 [i_0] [3LL] = ((/* implicit */long long int) arr_4 [i_0] [(_Bool)1]);
        }
        var_21 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_10)) < ((~(((/* implicit */int) arr_14 [i_0] [i_0] [5ULL] [i_0] [i_0] [(short)0])))))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            arr_19 [(_Bool)1] [i_5] = max((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_6 [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((-7091021646852336619LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_7] [i_7] [i_7 - 2] [i_7 - 2])))))));
                            var_23 = ((/* implicit */short) var_6);
                            var_24 -= ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_33 [8] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) max((arr_0 [i_9]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_9] [i_9])), ((signed char)68))))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (388369428099164520ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_36 [4ULL] [i_10] [i_10] |= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_9])) + (2147483647))) << (((((/* implicit */int) arr_29 [i_9])) - (6192)))))) ? (var_8) : (((int) (short)32765)));
            var_25 = ((/* implicit */short) (~(796308195)));
        }
        var_26 = ((/* implicit */unsigned long long int) (unsigned char)112);
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    var_27 = min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_9)))), (((short) (signed char)36)));
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_22 [i_9] [i_11] [i_12]))));
                                arr_46 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) == (var_8))) ? (((((/* implicit */_Bool) (unsigned short)15144)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)112)))) : (((arr_25 [4] [2LL] [4] [i_11]) & (((/* implicit */int) (unsigned char)129))))))) || (((max((((/* implicit */unsigned long long int) (_Bool)1)), (131071ULL))) < (max((((/* implicit */unsigned long long int) (signed char)41)), (3115589667657440453ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        for (signed char i_16 = 1; i_16 < 7; i_16 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) var_2);
                                var_30 = ((/* implicit */signed char) min((((long long int) (+(arr_49 [i_9] [9] [(_Bool)1] [i_9])))), (((/* implicit */long long int) var_9))));
                                var_31 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-125)))) <= (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned short)15162)) : (-796308196)))));
                            }
                        } 
                    } 
                    arr_52 [i_9] [(signed char)2] = ((((/* implicit */_Bool) max(((short)-6061), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-69)))))))) ? (((/* implicit */int) arr_8 [i_9] [i_11] [i_12])) : (((/* implicit */int) ((_Bool) (unsigned char)255))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        for (short i_18 = 1; i_18 < 7; i_18 += 1) 
                        {
                            {
                                arr_61 [i_12] [i_12] [0ULL] [i_12] [i_12] [9] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_18 + 2] [1LL] [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 2] [i_18 + 3])) ? (((long long int) (short)-23555)) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [(unsigned short)6] [(unsigned short)6])))))) ? (((arr_43 [i_18 + 2] [(short)5] [i_18 + 2] [(signed char)6] [i_18 + 2]) / (((/* implicit */unsigned long long int) arr_40 [i_18 + 3])))) : (((/* implicit */unsigned long long int) ((arr_60 [i_11] [(_Bool)1] [i_11] [(short)9]) - (arr_60 [i_18 + 1] [i_12] [(signed char)1] [i_9]))))));
                                arr_62 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) max((arr_38 [i_9] [i_9] [6ULL]), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_18] [i_17] [3ULL] [i_12] [7] [(signed char)7]))))))))));
                                arr_63 [(unsigned short)4] = 1803934983U;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

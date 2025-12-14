/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204887
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_11) % ((-(var_3)))))), (((((/* implicit */_Bool) 1435104093)) ? (((/* implicit */long long int) 1971529104)) : (((-5854905950011492288LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [4LL] [i_2] [i_3] [2LL] [8LL] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                                arr_14 [2LL] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 3] [(short)0] [9LL] [i_3 - 1]))))) ? (max((((/* implicit */long long int) ((unsigned int) 299962425416302864LL))), (var_1))) : (((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)248)))) * (((/* implicit */int) (unsigned char)7)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [3] [i_3] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (2126603638) : (((/* implicit */int) (signed char)9))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)23))))), (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) var_7))))))));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -771030007255646660LL))))))))));
                                var_23 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    arr_15 [0U] [0U] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-29)) ? (arr_8 [i_0] [i_0] [i_2] [i_0]) : (var_4)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)233)) & (((((/* implicit */int) ((signed char) (signed char)-37))) * (((/* implicit */int) (unsigned char)85))))));
                                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (+(129375372)))), ((~(2789985772U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) arr_24 [i_7] [i_7]);
        arr_27 [i_7] = ((/* implicit */int) min((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) ^ (var_4))), (arr_25 [i_7] [i_7 - 1]))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ (-771030007255646682LL)))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_24 [(unsigned char)12] [i_8 + 2]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_10] [i_7] = 1920262357U;
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 3766352798U)) ? ((-((+(2374704943U))))) : (((/* implicit */unsigned int) var_10))));
                            var_27 = ((/* implicit */long long int) (~(min((var_16), (((/* implicit */int) arr_28 [i_8] [i_8 + 1] [i_8 + 1]))))));
                            arr_41 [(unsigned char)12] [i_7] [(unsigned char)12] [i_7] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_8 + 2])) ? (((/* implicit */int) arr_28 [i_7] [i_11] [i_11])) : (((/* implicit */int) (signed char)3))))));
                        }
                        for (int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_28 = (+(((/* implicit */int) ((((/* implicit */int) var_12)) <= (arr_38 [i_7 + 1] [i_7 + 1] [i_9] [i_10] [i_12])))));
                            arr_44 [i_7] [i_7] [3] [3] [i_7] = ((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) arr_36 [i_7] [i_7] [i_7])), (arr_35 [i_7] [i_7] [i_7] [i_7])))), (((((/* implicit */_Bool) (unsigned char)15)) ? (1953247718) : (var_11)))))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [4U] [i_12]))) : (var_17))));
                            arr_45 [i_7] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == ((+(((/* implicit */int) (unsigned char)94))))));
                            var_29 = (-(((/* implicit */int) (unsigned char)23)));
                        }
                        arr_46 [(signed char)4] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_37 [i_7] [i_7 - 2] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))), (((((/* implicit */_Bool) arr_37 [i_7] [i_7 + 1] [14])) ? (var_4) : (arr_25 [i_8 + 2] [i_7 - 1])))));
                        arr_47 [i_7] [i_7] = ((/* implicit */int) -4423118337645436437LL);
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_49 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 2] [i_7 - 2])))) ^ (((/* implicit */int) var_9))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_50 [i_10] [i_10] [i_9] [(short)11] [12LL] [i_8])) : (((((/* implicit */_Bool) ((-4602257231109977180LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) arr_50 [i_7] [i_7] [i_9] [i_7] [i_13] [i_9])) | (var_6)))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        var_32 = ((/* implicit */signed char) min((max((max((((/* implicit */long long int) var_9)), (var_17))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_18))))))), (((/* implicit */long long int) var_5))));
        var_33 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (unsigned char)251)))) * (((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)0))))))));
        var_34 = ((/* implicit */int) arr_36 [i_14] [i_14] [i_14]);
    }
}

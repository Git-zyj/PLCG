/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51411
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 2789628113777101634LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (7757432107210156945ULL))) : (((unsigned long long int) var_11)))) << (((((long long int) -1336440934063389867LL)) + (1336440934063389899LL)))));
    var_16 = ((/* implicit */long long int) (+(var_9)));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) min(((~(arr_6 [i_0] [i_0] [i_0]))), ((+(var_10)))))) : (max((14ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3247097281806102313LL)))))))));
                            var_17 = ((((/* implicit */unsigned long long int) (~(max((arr_9 [i_0] [i_0] [i_0] [i_0]), (2265121201909334356LL)))))) % (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (18446744073709551615ULL))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            arr_21 [i_5] [i_5] [i_2] [i_5] [i_0] = max(((+(1008806316530991104LL))), (((0LL) % (((long long int) arr_15 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3])))));
                            arr_22 [i_5] [i_3] [i_5] = max((((/* implicit */unsigned long long int) (((+(var_7))) << ((((+(var_14))) - (6244359173069208994LL)))))), (var_6));
                            arr_23 [i_5] = ((/* implicit */long long int) max((((1400049026928207329ULL) << (((5370360128315377399ULL) - (5370360128315377391ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_3]))))), (0LL))))));
                            arr_24 [i_0 - 2] [i_0 - 2] [i_1] [i_5] [i_3] [i_5] = max((min((max((arr_18 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_2)))), (max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2])), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2789628113777101634LL)) ? (((((/* implicit */_Bool) 1729063541048603815LL)) ? (70368744177663LL) : (1638558693097532241LL))) : ((+(arr_15 [i_0] [i_1] [i_0] [i_3] [i_5] [i_3])))))));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_26 [i_6] [i_3]) % (var_7)))))));
                            var_18 = ((/* implicit */long long int) max((6097992959582717934ULL), (7ULL)));
                        }
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6097992959582717934ULL), (var_4)))) ? (((7164532998317049845LL) % (2135477435352370718LL))) : (((long long int) 10077174510855460806ULL))))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) -70368744177677LL)) ? (arr_8 [i_0 - 4] [i_0 - 2] [i_2]) : (arr_8 [i_0 - 4] [i_0 - 3] [i_1]))));
                    }
                } 
            } 
        } 
        var_20 = 16026026127887554200ULL;
        var_21 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) << (((2924637064989127595LL) - (2924637064989127595LL)))))), (((((/* implicit */_Bool) -3043769485185385392LL)) ? (11912672113119434062ULL) : (18446744073709551609ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) 0LL);
            arr_31 [i_0] [i_0] = ((((arr_9 [i_0 + 2] [i_0] [i_0] [i_7]) + (9223372036854775807LL))) << (((((var_1) % (var_0))) - (298954101128611069LL))));
        }
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                arr_36 [i_9] [i_0] [i_8] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                arr_37 [i_0 + 2] [i_0] [i_0 + 2] = ((long long int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_8 - 1]))));
            }
            arr_38 [i_0] [i_0] [i_8] = ((/* implicit */long long int) 8589814079257381840ULL);
        }
    }
    /* LoopSeq 1 */
    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_11 = 2; i_11 < 21; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_10] [i_11] [i_11])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_9)))) || (((/* implicit */_Bool) -1111130891809840238LL))));
                        arr_50 [i_12] = (+(((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (max((16026026127887554200ULL), (((/* implicit */unsigned long long int) -519707307863273688LL)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_5))))));
                    }
                } 
            } 
        } 
        arr_51 [i_10] = ((((/* implicit */_Bool) arr_48 [i_10])) ? (var_1) : ((-(((((arr_48 [i_10]) + (9223372036854775807LL))) << (((6061435972382668364ULL) - (6061435972382668364ULL))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) max((min((var_3), (((long long int) 9223372036854775807LL)))), (8822473638855270174LL)));
}

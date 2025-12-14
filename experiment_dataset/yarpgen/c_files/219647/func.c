/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219647
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
    var_10 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) 11561453546488389910ULL);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                var_11 = ((max((((/* implicit */unsigned long long int) arr_5 [i_2 - 1] [i_2] [i_1])), (((((/* implicit */_Bool) var_4)) ? (11561453546488389910ULL) : (6885290527221161705ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6885290527221161709ULL)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6885290527221161727ULL)))))))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_11 [i_1] [i_2 + 2] = ((/* implicit */long long int) ((arr_3 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_12 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (6885290527221161705ULL)));
                }
                var_13 += ((/* implicit */unsigned int) min(((~(arr_7 [i_2] [(signed char)6] [i_2 - 1]))), (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                var_14 += ((/* implicit */int) arr_1 [i_0]);
            }
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_14 [i_1] = ((/* implicit */unsigned short) 5824149491972720537LL);
                var_15 = 2510499496U;
                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)3] [i_4] [i_1])) ? (((((((/* implicit */unsigned long long int) var_4)) <= (arr_12 [i_1] [i_4]))) ? (var_2) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (5768849753239565855LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                var_16 = ((/* implicit */signed char) var_1);
            }
            var_17 = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */signed char) var_0);
            var_19 += ((/* implicit */unsigned long long int) arr_0 [(unsigned short)6]);
            var_20 = ((/* implicit */unsigned char) 2390894019U);
        }
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_6] [(signed char)0]));
            arr_22 [i_6] [(signed char)8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)9400), (((/* implicit */unsigned short) (signed char)-90)))))))) > (max((((/* implicit */long long int) arr_5 [i_0] [i_6 + 1] [i_6])), (8695435932330032060LL)))));
        }
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(var_1))))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((arr_8 [i_0] [i_7] [i_7 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [7ULL]))) : (((arr_24 [8U] [(short)8] [6LL]) / (arr_9 [i_0] [i_7] [6U] [(signed char)4]))))))))));
        }
        arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-28);
    }
}

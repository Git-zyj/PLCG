/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239051
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_17 = ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)19715))) : (18373492405477490173ULL));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((arr_3 [(short)5] [i_1]), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)9])) ? (var_13) : (((/* implicit */unsigned int) arr_4 [i_1] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (arr_5 [i_0] [i_1]))))))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */short) arr_0 [i_0] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_15 [i_2] [6ULL] [i_3] [i_4] = ((/* implicit */unsigned char) ((short) (_Bool)0));
                        var_20 = ((/* implicit */short) max((2307743554904158176ULL), (((unsigned long long int) ((unsigned int) (_Bool)1)))));
                        var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) 1828962765))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2307743554904158176ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (2575765337U) : (var_4)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7925))))) : (2307743554904158176ULL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_20 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((9961922648976200045ULL), (((/* implicit */unsigned long long int) max((arr_14 [i_5 + 1] [i_2] [i_5 + 2] [i_5 + 2]), (arr_14 [i_5 + 2] [i_2] [i_5 - 1] [i_5 + 1]))))));
                        var_22 = ((/* implicit */short) 2307743554904158165ULL);
                        arr_21 [i_0] [i_2] [4ULL] [i_6] [8U] [i_2] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_23 = ((/* implicit */short) max((((/* implicit */long long int) (~(3030582080U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4238024445404077354ULL)) ? (var_11) : (((/* implicit */unsigned int) arr_18 [i_7] [i_7] [i_0] [i_0]))))) ? (7538957154908826937LL) : (((/* implicit */long long int) arr_10 [i_0] [i_7] [(short)1]))))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned int i_9 = 3; i_9 < 8; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_24 = ((unsigned int) (~(368356374U)));
                            arr_35 [i_9] [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */short) ((((_Bool) (short)-18486)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(((((/* implicit */_Bool) arr_12 [i_0])) ? (var_7) : (((/* implicit */unsigned int) var_10))))))));
                            arr_36 [i_9 - 2] [i_8] [i_9] [i_0] [i_10] = ((/* implicit */unsigned long long int) max((var_13), ((+(arr_14 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1])))));
                            arr_37 [i_0] [i_0] [(unsigned short)7] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (unsigned char)193);
                        }
                    } 
                } 
            } 
        }
        arr_38 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0] [i_0]))));
        arr_39 [i_0] = ((/* implicit */int) (!(((9961922648976200045ULL) > (2307743554904158156ULL)))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        arr_48 [i_0] [i_11] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) arr_24 [i_13] [i_11] [i_0]);
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) 2307743554904158176ULL))))), (arr_28 [i_0])));
                        var_26 = max((var_2), (var_3));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */short) (-(((2307743554904158155ULL) % (16139000518805393448ULL)))));
    var_28 = ((/* implicit */short) var_13);
    var_29 = ((((/* implicit */_Bool) max((max((var_9), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (8484821424733351583ULL));
}

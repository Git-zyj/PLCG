/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50232
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
    var_10 |= ((/* implicit */long long int) (unsigned char)122);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)108)), (((unsigned long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)32766))) ? (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3959817019230782165LL)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])))), (((((/* implicit */_Bool) var_7)) ? (6113883665692692408ULL) : (((/* implicit */unsigned long long int) 2081404853U)))))) : (((/* implicit */unsigned long long int) (+(((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_13 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (max((12332860408016859220ULL), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (short)-24790);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_6 [i_3]))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29944)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)79)), (arr_11 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 3])))) : (103901358808142724ULL)));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */unsigned char) max((((arr_5 [i_1 - 1] [i_2 + 2] [i_2 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0] [i_0] [i_1 + 1] [i_1] [i_2 + 2])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
            var_18 &= ((/* implicit */unsigned short) var_0);
            var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((var_8) ? (((/* implicit */int) (unsigned short)23124)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) >= (arr_4 [i_0] [i_0] [i_0] [i_5]))))))), (7541494409479266971ULL)));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) arr_12 [i_0] [i_0] [i_0]))), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))))))))));
            var_21 = ((/* implicit */unsigned char) 2855265445U);
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_22 *= ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_17 [i_6]) : (7541494409479266947ULL));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_17 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))) : (((8967922172309439649ULL) >> (((var_1) - (3555276610U))))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_16 [i_6]))));
    }
    var_25 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    arr_26 [i_7] [i_8] [i_8] [i_9] = ((/* implicit */long long int) 3678445054755126088ULL);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_32 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned char) var_8);
                                var_26 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) (unsigned short)3133)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_11 [i_7] [i_8] [i_7] [i_10] [i_11])) : (arr_24 [i_8] [i_11]))))))));
                                var_27 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) ? (arr_3 [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58395)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (4193792ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))) * (((/* implicit */unsigned long long int) max((arr_1 [i_7 + 1]), (((((/* implicit */_Bool) 2213562450U)) ? (arr_1 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))))))));
                            }
                        } 
                    } 
                    arr_33 [i_7 + 1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)25998)) + (((/* implicit */int) arr_10 [i_7 - 3] [i_7 + 1] [i_7 - 3])))) != (((/* implicit */int) max((arr_27 [i_7 - 3] [i_7 - 3] [i_8] [i_8]), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_5))))))))));
                }
            } 
        } 
    } 
}

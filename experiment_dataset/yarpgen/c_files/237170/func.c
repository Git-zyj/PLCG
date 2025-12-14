/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237170
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (min((arr_6 [i_0] [i_0] [3]), (((/* implicit */unsigned long long int) 16LL))))))));
                        var_17 |= ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [(short)2] [i_2] [i_0]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) arr_6 [i_0] [(unsigned char)0] [(unsigned char)0]);
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_4);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_5 + 2] [i_5 - 1] [i_5 + 1]), (arr_6 [i_5 - 1] [i_5 - 2] [i_5 + 1])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_5 - 2] [i_5] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_16 [i_4 - 1] [i_5 - 2] [(signed char)2] [i_5 - 2] [(unsigned short)10])) : (((/* implicit */int) arr_3 [i_4 - 1] [i_5 - 2] [i_5]))))));
                            arr_18 [i_0] [i_5 + 1] [i_6] [i_5 + 1] = ((/* implicit */long long int) var_11);
                            arr_19 [i_6] [(unsigned short)10] [i_0] = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (arr_22 [i_0] [i_4 + 1] [i_4])))) - (((unsigned int) var_5))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) arr_11 [(short)1]))));
                        arr_25 [i_0] [i_4 - 2] [(signed char)7] [i_4 - 2] [i_9] = ((/* implicit */unsigned int) 7038631819976640784ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) var_10);
                            arr_29 [i_10] [i_8] [i_8 - 1] = ((unsigned short) 274877906880ULL);
                            arr_30 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_8 - 2] [i_4 + 1])) == (arr_1 [i_4 - 1] [i_8 + 1])));
                        }
                    }
                } 
            } 
        }
        arr_31 [i_0] = (+(((/* implicit */int) min(((unsigned char)96), (((/* implicit */unsigned char) (signed char)124))))));
        var_23 |= ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned char) 11408112253732910832ULL))) ? (((((/* implicit */_Bool) var_10)) ? (536870400U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_1);
    var_25 = ((/* implicit */signed char) var_8);
    var_26 = ((/* implicit */unsigned int) var_0);
    var_27 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) var_10)))));
}

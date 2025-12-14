/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191814
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((9359357105429703487ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_3 [i_0] = ((/* implicit */short) var_7);
        arr_4 [i_0] [i_0] = 1511039527;
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [(short)7]))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */short) (unsigned char)5)), (arr_5 [(unsigned char)20]))), (((/* implicit */short) (_Bool)1))))) ? ((~(((/* implicit */int) min(((unsigned short)52107), (arr_6 [i_1 - 1] [i_1])))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)52084))))));
        var_20 = ((/* implicit */int) var_3);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [(unsigned short)12] [i_2] [i_2 + 1] [i_4] [i_4] [i_3] &= (_Bool)1;
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (14369587068092440082ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -339667465)) ? (((/* implicit */int) (unsigned short)11966)) : (((/* implicit */int) (unsigned char)139)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == ((-(((/* implicit */int) (short)-30979))))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_5] [i_3] [(short)3] [i_3]))));
                        }
                        for (int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) arr_5 [i_1]);
                            arr_25 [i_2] [i_3] [i_1] [i_6] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) * ((-(arr_11 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (unsigned short)16368))));
                            var_23 = ((/* implicit */int) arr_14 [22] [i_6] [i_3] [i_3] [i_6] [i_6 - 1]);
                            var_24 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6117458485888944927ULL)) || (((/* implicit */_Bool) 132120576)))))) != (4077157005617111543ULL));
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_1] = ((/* implicit */short) ((arr_22 [i_1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)46257)) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)19279), ((unsigned short)2047)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 1) 
        {
            for (short i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) ((unsigned long long int) (short)-1));
                    arr_32 [i_1] [i_7 - 3] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned short)16368), (((/* implicit */unsigned short) (_Bool)0))))) / ((+(var_1))))) / (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_9 [i_9])), ((unsigned short)35592))), (max(((unsigned short)13428), ((unsigned short)46257))))))));
        arr_36 [i_9] = ((/* implicit */unsigned int) min(((((+(arr_11 [i_9] [i_9]))) * (0ULL))), (((/* implicit */unsigned long long int) (unsigned short)2047))));
        arr_37 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)0), ((short)27823)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((2ULL), (((/* implicit */unsigned long long int) (unsigned char)5))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -851271517)) ? (67108608) : (2147483631)))), (arr_11 [2LL] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9])))));
    }
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((12122600815048455175ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35975))))))));
    var_27 = var_4;
}

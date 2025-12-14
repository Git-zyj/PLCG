/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20352
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
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) var_12))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3423867029125391436ULL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2 - 2] = ((/* implicit */long long int) ((_Bool) ((signed char) arr_0 [i_2 + 1] [i_1 + 1])));
                    var_22 = ((/* implicit */unsigned long long int) (signed char)117);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) 3423867029125391436ULL);
                        arr_10 [i_2] [i_1 + 3] [i_1 + 3] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) ((signed char) arr_2 [i_2 - 1] [i_1 + 1]))) : (arr_5 [i_1 + 2] [i_1 + 2] [i_2 - 1])));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_4] = ((/* implicit */int) var_19);
                            arr_22 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) ((_Bool) (unsigned short)3))) * (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_19 [i_0] [(short)5] [i_5] [i_5] [i_0] [i_0] [i_0])))))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [(signed char)1] [i_4] [i_4]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 14; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    {
                        arr_31 [12] [i_8] [i_9] [i_8] [12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -4770012152955039126LL)) ? (3423867029125391409ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26013)))));
                        arr_32 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) arr_15 [i_0] [i_8]);
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (signed char i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) + (((((/* implicit */_Bool) arr_14 [i_11] [i_0])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))))))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 15022877044584160165ULL))));
                        arr_38 [(unsigned char)12] [i_8] [i_8] [(short)10] = ((/* implicit */unsigned char) (+(arr_25 [i_12 + 1])));
                        var_27 += ((/* implicit */short) var_10);
                    }
                } 
            } 
        }
    }
    var_28 = var_17;
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (var_19) : (((/* implicit */long long int) var_11)))))));
}

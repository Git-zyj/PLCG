/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206771
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) var_7);
        arr_3 [i_0] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_18)))) && ((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_20 = ((/* implicit */unsigned int) 18446744073709551608ULL);
    }
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((unsigned int) var_13));
        var_22 = ((/* implicit */long long int) (short)32767);
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned int) var_5);
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) arr_19 [i_4] [i_5]))))));
                                arr_21 [i_2] [i_2] [(unsigned char)18] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) << (((/* implicit */int) ((unsigned short) ((unsigned char) 13850000374512727839ULL))))));
                                var_25 = ((/* implicit */unsigned int) ((((_Bool) 13850000374512727839ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [3ULL] [(short)15] [(short)17] [(short)14] [i_2])) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [(unsigned char)3] [(short)9])) : (399598611599010952ULL)))) ? (((var_16) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))))) : (((/* implicit */long long int) arr_10 [i_4] [i_4])))) : (((/* implicit */long long int) ((arr_10 [(short)9] [i_3]) / (((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_6])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned short i_10 = 4; i_10 < 22; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 14858482638412500144ULL))));
                                arr_37 [i_8] [i_10] = ((/* implicit */long long int) min((((unsigned int) arr_32 [i_9 - 2] [i_10 + 1])), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32746)) * (((/* implicit */int) ((var_12) < (((/* implicit */long long int) -2033642489))))))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_7] [i_8] [15ULL] [(_Bool)1] [i_8] [(unsigned char)17])) : (arr_31 [i_8] [(_Bool)0] [(unsigned char)9] [i_8]))), (((/* implicit */int) arr_7 [i_7] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(short)15])))))))) : (var_6)));
            }
        } 
    } 
}

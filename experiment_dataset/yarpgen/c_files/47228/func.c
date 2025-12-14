/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47228
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) % (268435440U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7107)) / (((/* implicit */int) (unsigned short)7107))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) : (11451625043595512984ULL))))));
                var_21 |= ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) var_1);
        var_23 = ((/* implicit */short) min((var_23), ((short)26053)));
        arr_9 [i_2] = ((/* implicit */short) var_14);
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        var_24 |= ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) ((_Bool) arr_7 [i_3])))))));
        var_25 = ((/* implicit */signed char) var_2);
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) arr_13 [i_4] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) (~((((~(arr_12 [i_3] [i_4]))) | (((/* implicit */int) max((var_5), (((/* implicit */short) var_4)))))))));
                                var_28 = ((/* implicit */_Bool) ((((unsigned long long int) (short)26053)) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)7107), (((/* implicit */unsigned short) (short)-26053))))))));
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)7107)), (7LL))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) var_0))))))))));
                                arr_22 [i_3] [i_7] [i_6] [i_5] [i_4 + 2] [i_3] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-22887)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_7 - 1]))))))) ? (((arr_12 [i_3] [i_3]) & (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                    arr_23 [i_4] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3] [i_4 + 3] [i_4])) | (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_5] [i_4] [i_3]) | (arr_12 [i_4] [i_4])))))))) : (((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 2]))) : (var_9)))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_13)))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9)))));
    }
    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7107)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_8])))))));
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 21; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    {
                        var_32 = ((/* implicit */short) arr_26 [i_9] [i_11]);
                        var_33 = ((/* implicit */signed char) (unsigned short)58428);
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                        arr_33 [i_9] [i_9] = ((/* implicit */signed char) var_5);
                        var_35 = ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_9] [i_9])) >= (((/* implicit */int) arr_28 [i_9 + 3]))))) < (((/* implicit */int) arr_11 [i_8])));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_3))));
        var_37 = ((/* implicit */short) ((((/* implicit */int) (short)22887)) & (((arr_12 [i_8] [i_8]) + (((/* implicit */int) var_6))))));
        arr_34 [i_8] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_8] [(_Bool)1] [(unsigned char)2] [i_8])))), (((/* implicit */int) arr_7 [i_8])))) > (((/* implicit */int) arr_24 [i_8] [15LL]))));
    }
}

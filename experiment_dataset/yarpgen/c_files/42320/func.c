/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42320
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
    var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((7271622703044897826LL) != (7271622703044897826LL)))), ((short)-10184)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
        var_21 = ((/* implicit */signed char) (short)-14575);
        var_22 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -7271622703044897837LL)) - (arr_0 [(_Bool)1] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) (+(arr_5 [i_2] [i_2] [i_1])));
                                var_24 *= ((/* implicit */unsigned long long int) arr_4 [i_1]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) (unsigned char)0);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                {
                    arr_23 [(unsigned short)12] [i_6] [i_7] = ((/* implicit */int) (~((~(((((/* implicit */unsigned long long int) 7271622703044897842LL)) | (7553421005966263026ULL)))))));
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_15 [i_5] [i_5] [11] [i_7] [i_7 - 1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 11; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((620189444U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                            var_28 = ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)65))) | (0LL))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), ((unsigned short)47304)));
                            var_30 = ((/* implicit */unsigned char) var_13);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_35 [i_5 - 2] [(unsigned char)8] [i_5 - 2] [(unsigned char)8] [(unsigned char)8] [i_8 - 2] [3U])))), (((int) (_Bool)0))));
        }
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 3; i_14 < 11; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            {
                                arr_46 [(signed char)4] [(signed char)12] [7U] [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) 1428679451276440711ULL);
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_5 + 1])) || (((/* implicit */_Bool) arr_28 [i_5 - 1] [(_Bool)1])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (short)1920))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4515187684970187410LL))) : (((/* implicit */long long int) 3651906344U)))))))));
                            }
                        } 
                    } 
                    var_33 *= ((unsigned char) ((((/* implicit */_Bool) 1065295139)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_12] [(_Bool)1] [i_12] [(_Bool)1])) ? (24U) : (((/* implicit */unsigned int) -1735938264)))))));
                    var_34 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) var_13);
}

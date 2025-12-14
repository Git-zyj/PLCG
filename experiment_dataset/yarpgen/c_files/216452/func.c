/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216452
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((var_18) >> (((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_8))))) + (21LL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)));
                                arr_13 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] [i_1 - 2] [i_1 - 2] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) var_6);
                    arr_14 [i_0] [i_0] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (6336847849006420109LL))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    var_23 = (~(((/* implicit */int) (unsigned short)65525)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((((_Bool)1) && (((/* implicit */_Bool) 202832280326534694LL)))), ((_Bool)1)))), (((((/* implicit */_Bool) 16383ULL)) ? (var_8) : (((/* implicit */long long int) var_11))))));
                        var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_29 [i_7] [i_6] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) max(((unsigned short)65531), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) min(((_Bool)1), (var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_12)))))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-943824375)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (min((((/* implicit */unsigned long long int) 943824384)), (0ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((-943824364) <= (((/* implicit */int) (unsigned short)65535))));
                        arr_34 [i_5] [i_6] [i_7] [i_10] = (unsigned short)17;
                        var_28 = ((/* implicit */long long int) var_19);
                        arr_35 [i_7] = ((/* implicit */unsigned short) 766575969U);
                        arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = (!(((/* implicit */_Bool) 1580262978)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (unsigned char)218);
                        arr_39 [i_5 + 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(-2291636825975728754LL)));
                    }
                    var_30 = ((/* implicit */unsigned short) var_18);
                    var_31 = ((/* implicit */int) max(((~((-(-5686050951364913627LL))))), (((((/* implicit */_Bool) (~(-4721156914441264225LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) (unsigned char)22)), (507765605124832003LL)))))));
                    arr_40 [i_7] [i_5] [i_6] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)63))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_11);
}

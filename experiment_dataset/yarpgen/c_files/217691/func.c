/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217691
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
    var_18 = ((/* implicit */unsigned int) ((min((max((((/* implicit */unsigned long long int) (unsigned char)170)), (8642265213843423686ULL))), (((/* implicit */unsigned long long int) (unsigned char)170)))) >> (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)140)) % (((/* implicit */int) (unsigned char)81))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))) : (var_11)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((short) var_11))) && (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (unsigned char)81);
                        arr_13 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)100)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)-120))))) ^ (((long long int) (unsigned char)130)));
        arr_15 [13ULL] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)173)) ^ (((/* implicit */int) (unsigned char)90))));
    }
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) arr_10 [i_4 - 2] [i_4])) : (((/* implicit */int) (short)20048)))));
        arr_20 [i_4] = ((/* implicit */long long int) (unsigned char)163);
        arr_21 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(8477169809911820425LL)))) && (((/* implicit */_Bool) ((signed char) arr_8 [i_4] [i_4] [i_4]))))) ? (((int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (short)16279)) : (((/* implicit */int) arr_3 [i_4 + 2]))))) : (((/* implicit */int) (unsigned char)163))));
        arr_22 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)12]))) == (max((((/* implicit */unsigned long long int) ((short) arr_0 [i_4]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4]))) | (8606697284294285867ULL)))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 4; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_26 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (short)-15892)) : (((/* implicit */int) (unsigned char)94))));
        arr_27 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) && ((_Bool)0))))) | (arr_17 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 13; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_38 [3] [(_Bool)1] [i_7] = arr_5 [i_6 - 1];
                                arr_39 [i_5] [14U] [14U] [i_5 - 1] [14ULL] = ((/* implicit */unsigned int) var_6);
                                arr_40 [i_6] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) 12950221481929226424ULL)) && (((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64853)) || (((/* implicit */_Bool) (short)24757)))))));
                                arr_41 [i_5] = ((/* implicit */long long int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) ((1746544763U) == (((/* implicit */unsigned int) arr_30 [(short)12] [i_6]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        arr_45 [i_5] [12U] [12U] [i_7] [i_10] = ((/* implicit */unsigned int) ((unsigned short) arr_44 [i_5 + 3] [i_10 - 1]));
                        arr_46 [i_5 + 4] [i_6] [i_7] [i_6] = 3877248262636260836LL;
                        arr_47 [i_10 + 1] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) arr_24 [i_10]));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_51 [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_5 - 1] [0U])) ? (arr_30 [i_5 - 4] [i_5]) : (arr_30 [i_5 - 4] [(unsigned char)12])));
                        arr_52 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_5] [i_5 - 2] = ((/* implicit */signed char) (-(((unsigned int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
}

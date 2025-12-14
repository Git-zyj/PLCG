/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239100
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
    var_19 = max((((/* implicit */int) ((unsigned char) ((var_11) <= (2097152))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (var_7)))) ? (((int) 1391375177)) : (2147483647))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_20 += ((/* implicit */int) ((((/* implicit */_Bool) 4247054614118553106ULL)) ? (((/* implicit */unsigned long long int) -3)) : (18346267746334945885ULL)));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) (+(var_5)))) - (((-8678018611576445135LL) % (((/* implicit */long long int) -1087458939)))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_6 [i_0] [i_2] [i_0] = ((((1784764058) <= (arr_0 [i_0] [i_2]))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) -1784764074)) : (arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))));
            var_22 = ((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_2])));
            var_23 = ((/* implicit */unsigned long long int) (+(-1216825547)));
            arr_7 [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_10 [i_3] = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3])))));
            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_3]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3] [i_0])) && (((/* implicit */_Bool) -1784764064)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4] [i_5])) - (((/* implicit */int) arr_14 [i_0] [i_5]))));
                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_0] [i_0]))));
                arr_17 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0]);
            }
            for (int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                arr_20 [i_0] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [10ULL] [i_4] [(short)14] [i_0]))) && (((/* implicit */_Bool) arr_3 [i_0] [i_4]))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_6 - 1] [i_6 + 3])) ? (((/* implicit */int) (unsigned short)65527)) : (((((/* implicit */int) arr_12 [i_0] [i_4] [0ULL])) - (-1784764064))))))));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(arr_18 [18] [i_4] [18] [i_4]))))));
                            arr_27 [i_4] [i_7] |= ((/* implicit */long long int) arr_4 [i_0] [i_4]);
                            var_28 = -1784764062;
                            var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 511)) ? (((/* implicit */int) (unsigned short)17067)) : (((/* implicit */int) arr_11 [i_0] [1]))))));
                            var_30 = ((/* implicit */short) arr_8 [i_9]);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0])))) || (((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_10))))));
        }
        arr_28 [i_0] = ((/* implicit */unsigned char) (~(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))) / (arr_13 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            arr_32 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_10 + 1] [i_10] [i_10 - 1])) ? (arr_30 [i_10 - 1] [i_10] [i_10 - 1]) : (arr_30 [i_10 + 1] [i_10 + 1] [i_10 - 1])));
            var_33 *= ((/* implicit */unsigned int) ((((long long int) (short)6030)) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_10 + 2] [i_0] [(short)16] [i_0])))));
            var_34 = ((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) var_17)));
            var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) ((14872038285545164113ULL) << (((-7562439752263573600LL) + (7562439752263573633LL)))))) ? (var_12) : (((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_10] [i_10 + 2]))))));
            var_36 = var_14;
        }
    }
}

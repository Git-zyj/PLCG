/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189820
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 2241328472373524900ULL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = ((((/* implicit */unsigned long long int) 1274567337)) - ((+(arr_9 [i_0] [i_0] [i_0 - 2] [i_0 + 2]))));
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                        arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) (-(arr_11 [i_1] [i_0 + 2] [i_1] [i_3] [i_1] [i_3])));
                        arr_15 [i_0] = ((/* implicit */int) ((short) (-(((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_5))))))));
                    }
                    arr_16 [i_0] [i_2] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned char)238))))));
                    arr_17 [i_1] = ((/* implicit */unsigned char) ((int) 1565943346));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned long long int) (short)8330);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                arr_26 [i_5] [i_4] = ((/* implicit */int) arr_23 [i_4] [i_5]);
                arr_27 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -23)) - (arr_11 [i_6] [i_5] [i_6] [i_5] [i_5] [i_4]))))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_32 [i_4] [i_5] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */int) arr_24 [i_4] [i_4] [(short)7] [11LL]);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_35 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((arr_31 [i_5] [i_4]) >> (((643456016) - (643456001)))));
                        arr_36 [14ULL] [i_5] [i_5] [i_4] [i_5] = arr_6 [i_5] [i_6] [i_7] [i_8];
                    }
                    arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(var_4)));
                }
            }
            arr_38 [i_4] [i_4] [i_5] = ((long long int) arr_21 [i_4] [i_5]);
            arr_39 [i_4] = ((/* implicit */unsigned short) arr_34 [(short)10] [i_4] [i_4] [i_5] [i_5] [i_5]);
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    arr_48 [i_9] [i_11] [i_10] [i_9] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (4053010800261714727LL))));
                    arr_49 [i_9] [i_10] [i_9] = ((/* implicit */long long int) ((unsigned char) (+(arr_33 [i_11] [i_11] [(signed char)12] [i_9] [i_9] [i_11]))));
                }
            } 
        } 
        arr_50 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)14);
    }
    for (unsigned char i_12 = 1; i_12 < 13; i_12 += 2) 
    {
        arr_53 [i_12] = ((/* implicit */int) (-((~((~(arr_4 [i_12] [i_12])))))));
        arr_54 [i_12] [i_12] = ((/* implicit */unsigned short) (+((+(((int) 5474419139141929867ULL))))));
        arr_55 [i_12] [i_12] = ((/* implicit */unsigned int) (signed char)122);
    }
}

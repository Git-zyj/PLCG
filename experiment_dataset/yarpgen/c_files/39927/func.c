/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39927
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 |= ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) <= (((((/* implicit */_Bool) (~(arr_4 [11ULL])))) ? ((~(arr_4 [i_1]))) : (((/* implicit */unsigned long long int) max((1344029014U), (((/* implicit */unsigned int) arr_1 [(signed char)9])))))))))));
            var_22 = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_1] [i_0])));
        }
    }
    for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_23 -= ((/* implicit */unsigned char) arr_6 [8U]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-39))));
                    arr_16 [i_4] [i_2] [i_2] = max((arr_11 [(unsigned short)3] [i_3] [i_2 - 2]), (((/* implicit */unsigned int) ((unsigned short) arr_7 [i_4] [i_4 - 1]))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 2950938300U))))), ((~(((/* implicit */int) ((signed char) arr_6 [i_2 - 1]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_25 = arr_21 [i_5 + 2] [i_5];
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((signed char) arr_17 [i_5 - 1])))));
                }
            } 
        } 
        arr_24 [i_5] [(unsigned char)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3]))));
        arr_25 [i_5 + 2] = ((/* implicit */unsigned char) (+(((unsigned int) arr_23 [i_5] [i_5] [i_5] [i_5 + 2]))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 22; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_33 [i_9] [i_8])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9] [i_10])) && (arr_35 [i_8] [i_8] [i_9] [i_10] [i_11]))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 4; i_12 < 23; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_8] [i_8] [i_8] [i_8] [(signed char)4]))));
                            var_28 &= ((/* implicit */unsigned long long int) arr_27 [i_9 - 1] [i_9 - 1]);
                        }
                    }
                } 
            } 
            arr_41 [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)6))));
            var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_29 [i_8] [i_9])) ? (arr_40 [i_8] [i_9 + 1] [i_9]) : (((/* implicit */int) arr_26 [i_8]))))));
        }
        for (unsigned int i_13 = 4; i_13 < 21; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) arr_29 [i_8] [(unsigned short)2]);
                        var_31 = ((/* implicit */long long int) max(((signed char)113), ((signed char)-39)));
                    }
                } 
            } 
            var_32 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_45 [i_13] [i_13] [i_13] [i_13 - 4])))));
            arr_49 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) arr_32 [i_8])))) ? (((/* implicit */int) arr_32 [i_13 + 2])) : (((/* implicit */int) arr_30 [i_8]))))));
            var_33 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_33 [i_8] [i_13 - 2]))))));
        }
        arr_50 [i_8] = ((/* implicit */int) arr_33 [i_8] [i_8]);
        arr_51 [i_8] [i_8] = ((/* implicit */unsigned int) arr_32 [i_8]);
        var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [i_8])))))));
    }
    for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        var_35 += ((/* implicit */int) (signed char)20);
        arr_55 [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [(unsigned short)8]))), (arr_43 [i_16])));
        arr_56 [i_16] = ((/* implicit */_Bool) max((max((1344028996U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_16])) >> (((((/* implicit */int) (short)18598)) - (18574)))))))), (((unsigned int) ((unsigned long long int) arr_43 [i_16])))));
    }
    var_36 = ((/* implicit */signed char) min((var_19), (((/* implicit */unsigned int) var_17))));
}

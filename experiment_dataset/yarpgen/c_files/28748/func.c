/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28748
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_6);
        arr_3 [(signed char)6] |= ((/* implicit */unsigned long long int) ((int) (short)32767));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [12LL] = ((/* implicit */_Bool) (+(var_14)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_16))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 7672502794255109285ULL))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) var_4);
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */int) var_13);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
        {
            var_23 *= ((/* implicit */signed char) ((_Bool) (short)-17070));
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)17069))));
            var_25 = (-(((/* implicit */int) var_11)));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_11))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_1))));
        }
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_14))));
    }
    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_30 [i_9] = (_Bool)0;
        var_29 = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_30 = ((/* implicit */unsigned int) ((unsigned long long int) (short)-17070));
        var_31 = ((/* implicit */int) (short)17069);
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) var_7);
            arr_35 [i_10] = ((/* implicit */short) var_13);
            arr_36 [i_10] [i_11] = ((/* implicit */signed char) var_15);
            var_33 -= (signed char)10;
        }
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            for (unsigned short i_13 = 3; i_13 < 18; i_13 += 4) 
            {
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-17070)))))));
                    arr_41 [3] [3] [i_13] = ((/* implicit */unsigned int) (signed char)-10);
                    arr_42 [i_13] = ((/* implicit */unsigned long long int) 2873064541U);
                    arr_43 [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) var_13);
                    arr_44 [i_13] [i_10] [i_12] [i_13] = var_6;
                }
            } 
        } 
        arr_45 [i_10] = ((/* implicit */_Bool) (+((~(4318034965683145761ULL)))));
    }
    var_35 = ((/* implicit */unsigned short) (~(var_6)));
}

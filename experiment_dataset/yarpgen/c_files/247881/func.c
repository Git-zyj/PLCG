/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247881
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
    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)105))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+((~(((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [(unsigned char)2] |= ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) (short)10604))))))));
        var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14035459060398462134ULL))))))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(14035459060398462134ULL)))))))));
                                var_13 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                    var_14 = (-((+((+(arr_11 [i_1] [i_2] [i_3] [i_3]))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)57)))))))));
                                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
                                arr_23 [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))))));
                                var_16 |= ((/* implicit */short) (-((-((-(var_6)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (-((-((+(arr_11 [i_1 + 1] [9] [i_1 + 1] [i_3])))))));
                    var_18 += (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 2086020471))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) (~((~((+(((/* implicit */int) (signed char)-8))))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                {
                    arr_33 [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_9] [i_9] [i_10] [i_10])))))));
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 13; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            {
                                arr_39 [i_8] [i_8] [i_10] [i_11] [i_9] = ((/* implicit */unsigned short) (+((+(arr_5 [i_12])))));
                                var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [(unsigned short)10] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_8] [i_8])))))));
        var_21 -= ((/* implicit */unsigned long long int) (-((+(var_1)))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~((-(-8600965546338293676LL))))))));
    }
    for (int i_13 = 1; i_13 < 16; i_13 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_13 - 1])))))))));
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            for (long long int i_15 = 3; i_15 < 13; i_15 += 1) 
            {
                for (int i_16 = 2; i_16 < 16; i_16 += 3) 
                {
                    {
                        arr_55 [i_14] [i_13] [i_15] [i_14] [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_49 [i_13] [i_14] [i_15] [i_16])))))))));
                        var_24 *= ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (short)27320))))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            for (unsigned int i_18 = 4; i_18 < 15; i_18 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)-4)))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_51 [i_19] [i_19] [i_18] [i_19 - 1])))))))));
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-10609)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4005251339794938655ULL))))));
                    var_30 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_13] [i_13] [(signed char)9] [i_13] [i_17]))))))))));
                }
            } 
        } 
    }
}

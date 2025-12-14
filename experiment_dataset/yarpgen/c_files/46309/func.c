/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46309
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
    var_16 = (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)4] [i_0 + 2])))))))));
                    arr_10 [i_2] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(var_4))))))));
                    arr_11 [i_0 - 3] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) (~((+((~(var_3)))))));
        arr_13 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9)))))))));
    }
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))));
            arr_20 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)62)))))))));
        }
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_19 = ((/* implicit */_Bool) (+((~((-(((/* implicit */int) var_5))))))));
            arr_23 [i_5] = ((/* implicit */_Bool) (+((-((-(arr_14 [i_3])))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 3; i_6 < 22; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                            var_21 = ((/* implicit */unsigned long long int) (+((~((~(var_12)))))));
                            arr_32 [i_3] [i_5] [i_6] [i_6] [i_5] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */_Bool) (+((+((-(((/* implicit */int) (_Bool)1))))))));
                arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-((-((-(var_13)))))));
                arr_34 [i_6] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(1106634487))))))));
            }
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_21 [i_3] [i_3] [i_3]))))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(arr_40 [i_10 - 1] [i_11])))))))))));
                    arr_42 [i_9] [i_9] [i_11] = ((/* implicit */long long int) (~((+((+(arr_41 [(unsigned short)2] [(unsigned short)2] [i_9])))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_35 [i_9])))))))));
            arr_47 [i_9] [(short)15] [i_9] = (~((~((-(arr_40 [(signed char)20] [(signed char)20]))))));
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            arr_50 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(arr_14 [i_9]))))))));
            arr_51 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            var_27 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_48 [i_9])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                var_29 = ((/* implicit */_Bool) (~((+((-(var_9)))))));
                var_30 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(arr_46 [i_9] [i_9] [i_9]))))))));
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 3; i_17 < 19; i_17 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_9] [(signed char)22] [i_14] [i_15] [i_16] [i_17])))))))));
                        var_33 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))));
                    }
                    var_34 = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-63))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) (~((+((+(((/* implicit */int) (signed char)-63))))))));
                        var_36 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))))));
                        arr_66 [(short)8] [(short)8] [(short)8] [i_15] [i_16] [i_9] [i_18] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
                        var_37 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(4LL))))))));
                        arr_67 [i_9] [8LL] [i_15] [i_16] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(var_4))))))));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                        var_39 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_16 [i_16])))))))));
                        var_40 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (unsigned short)7609))))))));
                    }
                }
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_14]))))))))));
                    arr_73 [i_9] [i_9] [i_15] [7U] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-63)))))))));
                    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    var_43 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                }
            }
        }
    }
    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_1)))))))));
        var_45 = ((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) (unsigned char)1))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 3; i_22 < 20; i_22 += 3) 
        {
            for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        for (unsigned char i_25 = 2; i_25 < 21; i_25 += 3) 
                        {
                            {
                                arr_90 [i_21] [i_21] [i_23] [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-62)))))))));
                                arr_91 [i_21] [i_23] [i_23] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 23; i_26 += 3) 
                    {
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_55 [i_21] [15ULL] [i_23])))))))));
                                var_47 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(3345806840U)))))))));
                                var_48 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)62))))))))));
                                arr_98 [i_21] [(unsigned char)19] [(unsigned char)19] [i_23] [i_23] [i_26] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_49 = ((/* implicit */short) (+((-((+(((/* implicit */int) (signed char)63))))))));
    }
    for (unsigned char i_28 = 0; i_28 < 23; i_28 += 3) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)17748)))))))));
        arr_102 [i_28] = ((/* implicit */unsigned char) (!((!((!(var_7)))))));
    }
}

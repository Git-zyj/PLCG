/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/396
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(min(((-(((/* implicit */int) (unsigned short)62413)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))))));
        arr_3 [i_0] = ((max((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)-1))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_0 [i_0])))))) | (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-11), ((signed char)-4))))))));
        var_13 = ((/* implicit */long long int) -818639626);
        var_14 = ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_1] [i_0]);
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(arr_5 [i_0] [i_1] [i_0]))))));
                arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1))));
            }
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                var_16 = (signed char)0;
                arr_15 [i_3] = ((unsigned short) (signed char)1);
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_21 [14U] [i_1] [14U] [i_3] [i_5 - 1] = ((/* implicit */unsigned short) (signed char)-18);
                            var_17 = ((/* implicit */unsigned int) -1LL);
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)45)))) ? (((/* implicit */int) ((short) arr_0 [i_4 + 1]))) : (((/* implicit */int) (signed char)17)))))));
                            arr_22 [i_5] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) ((signed char) (signed char)72));
                        }
                    } 
                } 
            }
            var_19 |= ((/* implicit */long long int) (~((-(9890663238403758750ULL)))));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) arr_19 [(unsigned short)6] [(unsigned short)6]);
            arr_25 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)7))));
            arr_26 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1806369490)) ? (((/* implicit */int) (_Bool)1)) : (-1779897124)));
        }
    }
    for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
    {
        arr_31 [i_7 + 1] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned int i_10 = 3; i_10 < 11; i_10 += 1) 
                {
                    {
                        arr_38 [i_9] [i_8] [i_9] = ((/* implicit */int) arr_16 [i_9] [i_8] [i_8] [i_8] [i_8]);
                        arr_39 [i_9] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) 4294967294U);
                        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))));
                        var_22 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_10 - 3] [i_8] [i_8] [i_8] [2]))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 273615923)));
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_40 [i_11 + 2])) : (arr_41 [i_11]))), (arr_41 [i_11])));
        arr_43 [i_11] [i_11 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)121))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (unsigned short i_14 = 1; i_14 < 24; i_14 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) -1779897100)) ? (((/* implicit */int) arr_47 [i_14])) : (((/* implicit */int) (_Bool)1))))))));
                    arr_52 [i_13] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (signed char)74)))));
                    arr_53 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0LL))));
                    arr_54 [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_55 [i_12] = ((/* implicit */unsigned int) ((long long int) arr_45 [i_12]));
    }
    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_26 = (_Bool)1;
        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16028))))));
    }
}

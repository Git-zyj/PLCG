/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228176
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
    var_14 += ((/* implicit */unsigned char) ((var_6) | (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_13))))))));
    var_15 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (arr_3 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            var_17 = ((/* implicit */long long int) ((unsigned short) var_4));
            arr_4 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (~(735849188U))))));
            var_18 &= ((/* implicit */long long int) arr_0 [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])) ? (arr_6 [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0 - 2])));
            arr_8 [i_2] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            var_19 = ((/* implicit */signed char) var_12);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
        {
            arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0])) ? (arr_10 [i_3 + 3] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) arr_6 [i_0 - 1] [i_0]))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((int) arr_3 [i_4 - 1] [i_0 - 2])))));
            arr_15 [i_4] = ((/* implicit */signed char) ((((var_12) % (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_20 [i_4] [i_4] = ((/* implicit */long long int) arr_0 [i_0]);
                        arr_21 [i_4] = ((/* implicit */unsigned int) ((int) arr_1 [i_0 - 1] [i_4 + 3]));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_4] [i_4]))));
                        arr_22 [i_0] [i_4] [i_5] [i_0] |= ((/* implicit */int) ((signed char) var_0));
                        arr_23 [i_0] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_4] [i_4 + 2])) : (((/* implicit */int) arr_5 [i_0] [i_4] [i_4 + 2]))));
                    }
                } 
            } 
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_5))))));
                                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (arr_6 [i_0 + 1] [i_0 - 2]) : (arr_6 [i_0 - 1] [i_0 + 1])));
                            }
                        } 
                    } 
                    var_25 |= ((/* implicit */short) var_12);
                }
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 13; i_11 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (unsigned char i_14 = 2; i_14 < 12; i_14 += 2) 
                {
                    {
                        var_26 = ((((/* implicit */_Bool) ((unsigned short) ((arr_40 [i_11] [i_12] [i_13] [i_14]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)21120))))))) ? (arr_35 [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) var_3)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_11] [i_13] [i_14])) < (((/* implicit */int) arr_19 [i_13] [i_12]))))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned long long int) arr_18 [i_11] [i_14])))));
                        arr_46 [i_14] = ((/* implicit */unsigned long long int) min((min((((/* implicit */short) (unsigned char)46)), ((short)-819))), (((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) arr_33 [i_14] [i_12] [i_12] [i_12] [i_12])), (var_6)))))));
                        arr_47 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) arr_43 [i_14] [i_14 + 1] [i_11 - 2]);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned char) min((min((arr_33 [i_11] [i_11] [i_11] [i_11 - 2] [i_11 + 1]), (arr_33 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 - 1]))), (((/* implicit */signed char) ((var_7) || (arr_11 [i_11 + 1]))))));
        arr_48 [i_11] = ((/* implicit */signed char) min((((/* implicit */long long int) min((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_11])))))))), (var_13)));
    }
    var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_2) << (((var_6) - (7627121027867317948LL)))))) ? (min((((/* implicit */unsigned int) var_9)), (var_0))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))));
}

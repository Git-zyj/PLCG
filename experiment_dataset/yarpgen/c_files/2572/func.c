/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2572
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
    var_10 -= ((/* implicit */unsigned long long int) var_8);
    var_11 ^= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((unsigned char) ((var_3) ? (-5958576279243830503LL) : (((/* implicit */long long int) arr_7 [i_2]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) arr_6 [10ULL] [i_0] [14LL] [i_0]);
        arr_13 [i_0] = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_10 [(unsigned short)10] [(unsigned short)10] [i_0] [(unsigned char)10] [i_0] [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) max((arr_15 [i_4]), (arr_15 [i_4])))) || (((/* implicit */_Bool) 1271519957)));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) min((-1271519958), (-1271519957)))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((long long int) 1271519957));
            arr_24 [i_5 + 1] [i_6] [i_5] = ((/* implicit */signed char) arr_23 [i_5] [i_6] [i_6]);
            arr_25 [i_6] [i_6] = ((/* implicit */short) (!(arr_3 [i_5 - 1])));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_7] = ((/* implicit */int) (-(var_1)));
            arr_29 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_3 [i_5 + 1])))) + (((/* implicit */int) var_2))));
        }
        var_16 = ((/* implicit */_Bool) (-(arr_5 [i_5])));
    }
    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned char) (!(max((arr_10 [0] [(_Bool)1] [i_8 + 1] [i_8] [i_8] [(_Bool)0]), (arr_10 [6LL] [(signed char)14] [i_8 + 1] [(short)6] [i_8 + 1] [i_8 - 1])))));
        var_18 = arr_26 [i_8] [i_8] [i_8];
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_32 [i_9]))))));
        arr_35 [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned char) arr_33 [i_9]));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 21; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
        {
            arr_42 [i_10] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) arr_41 [i_10] [i_11 - 2] [i_10 - 1]))));
            arr_43 [i_10] [i_11] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)11))));
        }
        var_20 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_41 [22] [i_10] [(_Bool)1])))) | (((/* implicit */int) arr_36 [i_10 + 2] [(_Bool)1]))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_10])) ^ (((/* implicit */int) arr_37 [i_10]))));
        /* LoopSeq 2 */
        for (short i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_40 [i_12] [i_12]) ? (((/* implicit */int) arr_40 [i_12] [i_12])) : (((/* implicit */int) arr_40 [i_12] [i_12])))))));
            var_23 -= ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_10 + 1]))));
            var_24 = (~(((/* implicit */int) arr_39 [i_10 + 1])));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(arr_38 [i_12 + 1] [i_10 - 1]))))));
            arr_46 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((short) var_3)))));
        }
        for (short i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
        {
            var_26 ^= ((/* implicit */signed char) arr_45 [(unsigned char)1] [i_10 + 2] [i_10 + 1]);
            arr_49 [i_10] [i_13 + 2] [i_10] = ((/* implicit */_Bool) arr_48 [i_10]);
            /* LoopSeq 2 */
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned int) arr_47 [i_10] [i_10 - 1] [i_13 - 1])))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    for (unsigned int i_16 = 3; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_28 += ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                            var_29 -= ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            }
            for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
            {
                var_30 ^= ((/* implicit */_Bool) ((arr_51 [i_10] [i_10 + 2] [i_17] [i_13 - 2]) ? (((/* implicit */int) arr_36 [i_13] [i_13])) : (((/* implicit */int) arr_39 [i_10 + 1]))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */int) arr_47 [(unsigned short)8] [i_13 + 1] [(_Bool)1])) >> (((((/* implicit */int) arr_47 [i_13 - 1] [i_13 + 1] [i_17])) - (2838))))))));
                arr_60 [i_10] [i_10] [i_10] [i_10] = ((unsigned char) ((signed char) (unsigned short)48676));
                var_32 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) arr_54 [i_10] [i_13 - 2])) : (((((/* implicit */_Bool) arr_58 [i_10 + 2] [i_10])) ? (arr_38 [i_10] [i_10]) : (((/* implicit */int) arr_47 [i_10] [i_10] [i_10]))))));
            }
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (+(arr_55 [i_13 + 2] [i_13 - 2] [i_10 - 1] [i_10 + 2]))))));
        }
    }
    for (unsigned char i_18 = 1; i_18 < 21; i_18 += 4) /* same iter space */
    {
        arr_63 [i_18] = ((/* implicit */_Bool) arr_58 [15U] [i_18]);
        var_34 &= ((/* implicit */unsigned char) arr_59 [i_18 + 2] [i_18 + 1] [i_18 + 1] [10U]);
    }
    for (unsigned char i_19 = 1; i_19 < 21; i_19 += 4) /* same iter space */
    {
        var_35 += min((((signed char) (unsigned char)165)), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) -1271519982)))))));
        var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1271519958)) ? (((/* implicit */int) arr_37 [(unsigned char)18])) : (((/* implicit */int) arr_56 [i_19] [(unsigned char)9] [i_19 + 2] [i_19 + 1] [i_19]))))) ? (((((((/* implicit */_Bool) arr_62 [i_19] [0])) ? (4919721675784061161LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1271519988)))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_41 [i_19] [i_19] [i_19])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_47 [i_19 - 1] [i_19 - 1] [4ULL])) : (((/* implicit */int) arr_50 [i_19] [i_19 + 2] [i_19 - 1])))))))));
        var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) arr_64 [i_19 - 1] [i_19 - 1])) ? (((((/* implicit */_Bool) arr_64 [i_19 + 1] [i_19 + 2])) ? (((/* implicit */int) arr_64 [i_19 - 1] [i_19 - 1])) : (((/* implicit */int) arr_64 [i_19 + 2] [i_19 + 2])))) : (((((/* implicit */_Bool) arr_64 [i_19 + 1] [i_19 + 2])) ? (((/* implicit */int) arr_64 [i_19 + 2] [i_19 - 1])) : (((/* implicit */int) arr_64 [i_19 - 1] [i_19 - 1]))))))));
    }
    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_7))));
}

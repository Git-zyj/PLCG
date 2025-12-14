/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26402
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_17 = arr_1 [i_0];
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (short)20397)) : (((/* implicit */int) ((short) arr_1 [1LL])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_20 += ((/* implicit */long long int) (~(var_11)));
                var_21 |= ((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((-(((/* implicit */int) arr_3 [i_1] [i_1] [i_3])))) <= (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2] [i_2])) < (((/* implicit */int) arr_8 [4U] [(_Bool)1] [i_2] [i_1]))))))))));
                    var_23 &= ((/* implicit */short) var_12);
                }
                var_24 &= ((((unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_1])) / (arr_0 [i_1]));
            }
            for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 - 1])));
                var_26 = ((arr_6 [i_4 - 1]) / (arr_6 [i_4 - 1]));
                var_27 = ((/* implicit */signed char) ((short) ((4409368962243237352LL) < (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) (~(arr_12 [i_0 - 1] [2U] [i_0 - 1] [(unsigned short)5])));
                    var_29 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (var_12)));
                }
                for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    arr_20 [0] [i_1] [i_1] [i_4] [4LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_6])))))) : (arr_10 [i_0] [i_0] [(_Bool)1] [i_6 - 2])));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0] [i_4 + 3] [i_1] [i_0])) != (((/* implicit */int) arr_17 [i_0] [i_4 - 1] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_31 = (!(((/* implicit */_Bool) arr_4 [i_1] [i_4 + 3] [i_7])));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (short)20397))));
                        arr_23 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)60332))));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_6 + 1]))));
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_34 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6 + 2] [i_6 + 2] [i_4] [i_4 + 2] [i_0 + 1])) ? (6375216742708333709LL) : (var_5)));
                        var_35 = ((/* implicit */int) ((arr_12 [i_0 + 1] [i_1] [14LL] [i_6]) >= (arr_12 [i_0 + 1] [i_1] [i_4 + 1] [i_1])));
                        arr_26 [i_1] [i_1] [i_4] [i_6] [0U] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [2U] [i_6] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 1] [11LL] [i_6 + 1] [i_8]))) : (var_9))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 + 4] [i_6 + 3] [i_6 + 4] [i_8])))));
                    }
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        var_36 = ((/* implicit */short) var_2);
                        var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_6 - 2] [i_0 + 1]))) % (4204907814248912521LL)));
                    }
                }
                var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_4 - 1] [i_0]))));
            }
            var_39 = ((/* implicit */unsigned char) (~(arr_0 [i_0 - 1])));
            var_40 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) << (((((/* implicit */int) arr_3 [i_0] [16LL] [10LL])) + (8806))))) != (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1] [i_1] [8LL] [i_1] [i_1]))))))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) << (((((((/* implicit */int) arr_3 [i_0] [16LL] [10LL])) + (8806))) - (30203))))) != (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1] [i_1] [8LL] [i_1] [i_1])))))))));
        }
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_10] [(unsigned char)7] [i_11] [i_0])) / (-1447203054426893135LL)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_10] [i_11] [i_0] [16U] [i_10] [i_11]))))));
                var_42 = ((/* implicit */short) (+(arr_18 [i_0] [i_0] [i_11] [i_10])));
            }
            var_43 = ((/* implicit */unsigned char) ((unsigned int) arr_30 [i_0 - 1] [i_10] [i_0] [i_0 + 1]));
        }
        for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [5U] [8U] [i_0] [i_0])) || (arr_13 [i_12] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            arr_37 [i_0] = ((/* implicit */short) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_12]))) : (arr_0 [i_0 + 1])));
            var_45 = ((/* implicit */unsigned char) (-(9223372036854775807LL)));
            var_46 = ((/* implicit */short) (signed char)-1);
            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 160989758U))))) : (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
        }
    }
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [i_13] [i_13] [i_14 + 2] [i_13]), (((unsigned int) 2891520102251784829LL))))) ? (((min((((/* implicit */long long int) arr_41 [i_14])), (var_10))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) max((0U), (min((((/* implicit */unsigned int) var_16)), (arr_0 [i_14 - 1])))))))))));
            var_49 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_14 + 2] [i_14 - 1] [i_14 - 1])) ? (((/* implicit */int) arr_21 [i_14 + 3] [i_14 - 1] [i_14 + 4])) : (((/* implicit */int) (signed char)44)))) / (((/* implicit */int) min((arr_21 [i_14 + 4] [i_14 - 1] [i_14 + 3]), (arr_21 [i_14 + 3] [i_14 + 2] [i_14 + 3]))))));
        }
        var_50 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_5 [i_13]))), (((int) arr_16 [i_13] [i_13] [i_13] [i_13]))));
        var_51 &= ((/* implicit */short) ((long long int) (-(arr_15 [i_13] [i_13] [i_13] [i_13]))));
    }
    for (int i_15 = 0; i_15 < 16; i_15 += 4) 
    {
        arr_45 [i_15] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_21 [i_15] [(unsigned char)17] [i_15])))));
        arr_46 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_10 [i_15] [i_15] [i_15] [i_15])) * (((long long int) arr_13 [i_15] [i_15] [i_15] [i_15]))));
    }
    var_52 |= ((/* implicit */unsigned int) var_2);
    var_53 = var_8;
}

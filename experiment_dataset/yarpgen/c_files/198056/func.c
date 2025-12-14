/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198056
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_1 [i_0] [(signed char)10]))) * (arr_1 [i_0] [2U]))) >= (((/* implicit */unsigned long long int) var_11))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_7 [i_3] [i_3] [(signed char)8] [i_3]))));
                        var_14 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])) : (arr_1 [i_3] [i_3])))));
                        var_15 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 2]))))) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((arr_4 [i_0] [i_0]) * (((/* implicit */int) ((var_5) >= (var_0)))))) : (((/* implicit */int) var_1))));
        var_17 = ((/* implicit */unsigned char) ((((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))));
        var_18 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) (~(var_11))))), (min((((/* implicit */long long int) ((short) arr_9 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))), (((((var_9) + (9223372036854775807LL))) >> (((arr_1 [i_0] [i_0]) - (16843323686429558437ULL)))))))))) : (((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) (~(var_11))))), (min((((/* implicit */long long int) ((short) arr_9 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))), (((((var_9) + (9223372036854775807LL))) >> (((((arr_1 [i_0] [i_0]) - (16843323686429558437ULL))) - (96274286044516785ULL))))))))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_11 [i_4]) : (arr_11 [i_5]))) >= (((/* implicit */long long int) arr_10 [i_5]))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((max((arr_11 [i_4]), (arr_11 [i_4]))) / (((((((/* implicit */long long int) ((/* implicit */int) (short)18631))) + (-8579190388400595166LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (var_3)))))))))));
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_21 &= (+(((/* implicit */int) (unsigned char)247)));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)24154)), ((unsigned short)64927))))));
        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_4]))));
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_25 += ((/* implicit */long long int) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [(unsigned char)19]))))) * (((((/* implicit */unsigned int) var_11)) | (arr_13 [i_7] [i_7] [i_7])))))));
        var_26 = ((/* implicit */signed char) var_9);
    }
    var_27 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64925)) ? (-1626863921) : (((/* implicit */int) (short)5923))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_28 = var_1;
}

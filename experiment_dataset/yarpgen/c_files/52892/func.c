/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52892
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((~(((long long int) arr_1 [i_0] [i_0])))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (signed char)-20)))))))));
        var_10 &= ((((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1))))) > (((long long int) 4432118227646139895ULL)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_11 &= ((/* implicit */signed char) arr_5 [i_1]);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1] [i_1])) / (var_5)));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
    }
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        var_13 = (+(((/* implicit */int) (unsigned char)3)));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9302253463821711134ULL)) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (arr_5 [i_2])))) ? (min((var_5), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_8 [(unsigned char)7]))));
        var_15 = var_9;
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */int) var_6);
            arr_12 [i_2 + 1] [i_3 + 1] [8LL] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_3])))) | (arr_5 [i_2 + 1])));
            arr_13 [i_2 - 2] [i_2 + 2] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -684521019101626975LL)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
        }
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)18)), ((unsigned short)65535))), (((/* implicit */unsigned short) arr_0 [i_2 + 3]))))) - (((/* implicit */int) (signed char)1))));
            var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 17897927462108730618ULL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned char)210))))));
            arr_17 [21ULL] [i_2] [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
            arr_18 [i_2 + 3] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (13322908009803905713ULL) : (2086070106898020127ULL)));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5] [i_5])) && (((/* implicit */_Bool) var_4))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? (((long long int) 11482583340011312664ULL)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)210)) / (((/* implicit */int) var_2)))))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_28 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_5 + 1])) | (((/* implicit */int) arr_4 [i_5 + 1]))));
            /* LoopSeq 1 */
            for (int i_7 = 4; i_7 < 7; i_7 += 4) 
            {
                arr_31 [i_5 + 1] [i_5] [i_6] [i_7 + 2] = ((/* implicit */signed char) arr_4 [i_5]);
                arr_32 [i_5 + 1] [i_5] [i_7] = ((/* implicit */_Bool) ((long long int) arr_20 [i_7]));
            }
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_36 [i_5] = ((/* implicit */unsigned short) arr_4 [i_8 - 1]);
            arr_37 [i_5] [i_8 - 1] = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_5 - 1]))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5 + 1])) ? (arr_27 [i_5 - 1]) : (arr_27 [i_5 - 1])));
            arr_38 [i_5] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 + 1]))) <= (arr_33 [i_5])));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_41 [i_5] [i_5 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_20 [i_5]))) ? (((/* implicit */int) ((_Bool) arr_25 [i_5]))) : ((+(((/* implicit */int) (unsigned short)44127))))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((-754871917867345888LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5])))));
                var_20 = (i_5 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [18ULL])) / (((/* implicit */int) arr_4 [i_5]))))) ? (((/* implicit */int) arr_0 [i_10])) : (((((var_5) + (2147483647))) >> (((arr_19 [i_5]) + (7214632360860896857LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [18ULL])) / (((/* implicit */int) arr_4 [i_5]))))) ? (((/* implicit */int) arr_0 [i_10])) : (((((var_5) + (2147483647))) >> (((((arr_19 [i_5]) + (7214632360860896857LL))) - (5782641688125104965LL))))))));
            }
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)191))));
            var_22 = ((/* implicit */long long int) ((int) arr_11 [i_5 - 1]));
        }
    }
}

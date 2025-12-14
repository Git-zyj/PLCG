/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211296
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * ((~((+(var_3)))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)48680)), (((((/* implicit */unsigned long long int) var_7)) ^ (var_6))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_10);
        var_18 -= ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 16008429589991490270ULL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122)))))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                arr_11 [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_15)))) ? (((arr_4 [i_3 + 1]) + (arr_4 [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_15)))) == (max((((/* implicit */unsigned long long int) var_2)), (arr_9 [i_3] [i_2] [i_3] [(unsigned short)9])))))))));
                arr_12 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)117)), (1888598306411985085LL)))) ? (((/* implicit */unsigned int) ((int) 2167336920909608242ULL))) : (arr_7 [i_3 + 1] [i_3 - 2] [i_3 - 1])))) ? (((/* implicit */unsigned int) (~(min((609041492), (((/* implicit */int) (signed char)116))))))) : (((arr_3 [i_3 - 1] [i_3]) * (((/* implicit */unsigned int) var_13))))));
            }
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                arr_17 [i_4] = ((/* implicit */unsigned char) max((((unsigned short) var_0)), (((/* implicit */unsigned short) var_9))));
                var_20 = ((/* implicit */unsigned long long int) (signed char)-116);
                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
            }
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_8 [i_2]), (((/* implicit */unsigned int) var_2))))), (7412816652892332323LL)))) * (max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) arr_6 [i_1] [i_2]))))), (((((/* implicit */unsigned long long int) 0)) + (10509748838025944317ULL)))))));
            arr_18 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))));
            var_23 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (arr_4 [(unsigned char)0]) : (((/* implicit */unsigned long long int) 7412816652892332323LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))))) ? (((/* implicit */unsigned long long int) 1837889476U)) : (((((/* implicit */_Bool) var_6)) ? (18023804750335921058ULL) : (var_8)))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned short) var_13);
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 7; i_6 += 2) 
            {
                var_24 = var_0;
                arr_26 [i_6] [i_6 + 3] [0LL] [1LL] &= ((/* implicit */int) var_10);
                arr_27 [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((arr_22 [8ULL] [8ULL] [i_6 - 1]) ^ (((/* implicit */unsigned int) var_7))));
            }
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [8] [i_1] [i_1] [i_1])) << (((((/* implicit */int) var_10)) - (3757)))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_30 [i_7] = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)64503)) ^ (((/* implicit */int) (unsigned short)1029)))) != (var_15)));
            var_26 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) var_7)))));
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
            arr_31 [3ULL] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
            var_28 = ((/* implicit */short) arr_29 [6LL] [i_1] [6LL]);
        }
        arr_32 [3LL] = ((/* implicit */signed char) (+(arr_28 [i_1])));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_29 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-116)) ? (4895488703070993022LL) : (4485015156210580631LL)))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
        arr_35 [i_8] = ((/* implicit */unsigned char) ((-4485015156210580636LL) + (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-7)))))));
        arr_36 [i_8] = ((/* implicit */long long int) var_8);
    }
}

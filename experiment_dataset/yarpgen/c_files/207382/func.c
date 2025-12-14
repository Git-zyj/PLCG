/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207382
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) var_10);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((signed char) (short)0))) ? (((/* implicit */long long int) var_10)) : (arr_7 [i_3 + 3] [i_3] [i_3 + 3] [i_3] [i_0 - 1] [i_0 - 1])))));
                        var_15 ^= ((/* implicit */signed char) ((min((arr_7 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]), (((((/* implicit */_Bool) var_12)) ? (arr_7 [i_0 + 1] [17U] [i_2] [i_3] [i_2] [i_3]) : (7902732775038952573LL))))) / ((+((-(arr_8 [i_0] [i_1] [14U] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
        arr_10 [(_Bool)1] = ((/* implicit */long long int) min((((unsigned short) var_6)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
        arr_11 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0 + 2]))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) max((arr_7 [i_4 + 3] [i_4] [19LL] [i_4] [i_4] [i_4 + 2]), (((long long int) var_5))));
        /* LoopNest 3 */
        for (short i_5 = 4; i_5 < 9; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_22 [i_4 + 3] [i_5 - 3] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_4)) / (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 2] [i_6]))))))) : ((-(((((/* implicit */_Bool) 977543094631398956ULL)) ? (-7902732775038952592LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                        var_16 = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_9 [i_4] [i_4] [i_4 + 1] [i_4 + 1])))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned int i_10 = 1; i_10 < 7; i_10 += 3) 
                {
                    {
                        arr_30 [i_4] [i_4] [i_4] [i_8] [i_9] [i_10] = max((((arr_28 [i_10 + 1] [i_4 + 2]) / (var_12))), (((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4])));
                        arr_31 [3LL] [i_8] = ((/* implicit */int) ((_Bool) (-(min((((/* implicit */long long int) var_4)), (arr_18 [i_4] [i_8]))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_9 [i_4] [i_8] [i_9] [i_10])))) ? (((unsigned int) arr_24 [i_4])) : (arr_27 [i_4] [i_4] [(signed char)2]))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)23708), ((unsigned short)23708)))))));
                    }
                } 
            } 
            var_19 += ((/* implicit */long long int) (unsigned short)41827);
        }
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) ((((/* implicit */_Bool) -7902732775038952574LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_11] [i_4]))) : (var_12))))));
                    var_21 = (short)26036;
                    var_22 = ((/* implicit */int) max((((long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -7902732775038952574LL))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 8770495342212654561LL)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 1; i_13 < 8; i_13 += 3) /* same iter space */
                    {
                        arr_40 [i_4] [i_4] [i_12] [i_12] [i_12] [i_13 + 2] = ((/* implicit */int) (-((-(arr_38 [i_4 + 3] [i_4 - 1] [i_13 + 1] [i_13])))));
                        var_23 = ((unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_37 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4]))));
                        var_24 = ((/* implicit */long long int) var_11);
                    }
                    for (signed char i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            arr_46 [i_14] [i_11] [i_11] [10] [i_11] = ((/* implicit */long long int) arr_17 [i_14 + 3] [i_4 - 1] [i_4 - 1] [i_14 + 2]);
                            arr_47 [i_4 + 2] [i_14] [1LL] [i_14 + 2] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_21 [i_4 - 1] [5U] [i_4 + 1] [i_4 + 1]))))) ? ((~(((/* implicit */int) arr_21 [i_4] [i_11] [i_12] [i_14])))) : (((arr_21 [(_Bool)1] [i_11] [i_12] [i_14 + 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_4] [i_11] [i_12] [i_14 + 2]))))));
                        }
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((17340481405451932008ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
                    }
                }
            } 
        } 
    }
    var_26 *= ((/* implicit */unsigned short) (short)26036);
}

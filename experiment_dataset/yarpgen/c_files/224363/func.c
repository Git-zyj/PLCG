/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224363
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
    var_19 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 *= ((/* implicit */short) max((min((((/* implicit */long long int) ((unsigned char) var_10))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (263882790666240LL))))), (((/* implicit */long long int) (-(((var_11) ? (((/* implicit */int) arr_1 [i_0] [8U])) : (((/* implicit */int) var_10)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_6)) - (97)))))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) >= (-263882790666240LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (1753750767110985288LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62741)) << (((((/* implicit */int) (unsigned char)88)) - (76)))))) : (((arr_5 [i_2]) | (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((-263882790666240LL), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) arr_8 [i_4] [i_3] [i_0] [i_0]);
                                var_23 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55649)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0] [i_3]), (((/* implicit */int) var_18)))))))) != (((/* implicit */int) var_3))));
                                arr_17 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) -4905541868450741928LL)) || (((/* implicit */_Bool) 4294967288U)))), ((!(((/* implicit */_Bool) (unsigned char)91))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (unsigned char)91)) : (((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) (signed char)127))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_26 [i_5] [i_5] [i_5] = ((arr_21 [i_6 + 1] [i_5]) || (((/* implicit */_Bool) var_2)));
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 4]))) != (var_16)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 16; i_9 += 3) 
            {
                for (signed char i_10 = 4; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned char i_11 = 3; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-7))))) < (((/* implicit */int) (!(((/* implicit */_Bool) 8397600279017367164LL)))))));
                            arr_41 [i_5] [i_5] [i_5] [i_11 + 2] = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
            } 
            arr_42 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_5])) >= (arr_8 [i_5] [i_5] [i_5] [i_8])));
            var_26 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5]))));
        }
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
    {
        arr_45 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) -7625936586255516289LL))) / (((/* implicit */int) ((arr_36 [i_12] [i_12] [i_12] [i_12]) > (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23669))))))))));
        arr_46 [(short)16] [i_12] = ((/* implicit */signed char) arr_8 [i_12] [i_12] [(signed char)5] [i_12]);
        arr_47 [i_12] = (signed char)-107;
        arr_48 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_27 [i_12] [i_12] [i_12]), (((/* implicit */unsigned short) arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_12]))))));
        arr_49 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-263882790666240LL) + (9223372036854775807LL))) << (((((var_7) + (441172019))) - (39)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (-7625936586255516289LL))) : (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_12]) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) > (((/* implicit */int) arr_7 [i_12] [i_12] [17] [i_12])))))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)30800)), ((unsigned short)50530)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39668))) : (arr_6 [i_12])))))));
    }
    for (short i_13 = 2; i_13 < 12; i_13 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) (short)-12374);
        arr_52 [i_13] [i_13] = ((/* implicit */short) max((((/* implicit */unsigned short) var_17)), (max((var_15), ((unsigned short)65535)))));
    }
}

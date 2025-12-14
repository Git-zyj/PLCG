/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210730
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
    var_13 = ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-74)));
    var_14 = ((/* implicit */short) max(((~(max((15509476977474874694ULL), (((/* implicit */unsigned long long int) var_8)))))), (var_11)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)5]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_6 [6U] [i_1] [(_Bool)1])))) ^ ((~(((/* implicit */int) var_3))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_7 [i_0]))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4]))) : (((((/* implicit */_Bool) 2937267096234676939ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42195))) : (2937267096234676905ULL)))));
                        var_18 = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_3] [8ULL] [i_3] = ((/* implicit */long long int) arr_14 [i_3] [i_4]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_30 [i_3] [(signed char)8] [i_5] [10ULL] [i_8] [(short)9] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_5 + 2] [2LL] [i_5 + 2] [i_5 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                            arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_5 [i_3] [i_4] [i_3]))))));
                            var_19 &= ((/* implicit */unsigned char) ((signed char) var_4));
                            arr_32 [i_3] [i_4] [i_5 + 4] [i_7] [i_3] [(short)12] = ((/* implicit */unsigned int) (signed char)93);
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) var_3);
                            arr_37 [i_3] [i_4] [i_5] [i_9] [i_4] = ((/* implicit */unsigned int) max((((unsigned long long int) (+(arr_12 [(unsigned short)7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217727ULL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (short)-31338)))))));
                            var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_9)), (var_2))))), (((/* implicit */unsigned long long int) arr_25 [i_3] [i_3] [(short)10] [i_3] [i_3]))));
                            var_22 = var_11;
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_40 [i_3] [i_3] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */_Bool) -1775361278);
                        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_25 [i_3] [i_4] [i_5 + 1] [3ULL] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3])))))));
                        var_24 = ((/* implicit */unsigned short) ((arr_33 [5ULL] [i_4] [8] [8]) ? (((/* implicit */int) arr_6 [i_3] [9] [12LL])) : (((/* implicit */int) (unsigned char)1))));
                        var_25 ^= ((/* implicit */unsigned short) arr_13 [i_5 - 1] [i_10]);
                    }
                    for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_16 [i_11] [(unsigned short)1] [i_3]);
                        var_27 = ((/* implicit */short) arr_34 [i_3] [i_4] [7ULL] [(unsigned short)0] [i_11] [i_11]);
                        arr_43 [i_5] [i_4] [i_3] = ((/* implicit */signed char) (~(max((15509476977474874672ULL), (((/* implicit */unsigned long long int) var_8))))));
                        arr_44 [(_Bool)1] [(_Bool)1] [i_5 + 3] [i_5] [(_Bool)1] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_4 [i_3]);
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_17 [i_3] [i_4] [(unsigned short)4] [(short)3]))));
                    }
                    var_29 = ((/* implicit */_Bool) arr_10 [i_4]);
                }
            } 
        } 
        var_30 *= ((/* implicit */_Bool) max((min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))), ((-((~(((/* implicit */int) var_1))))))));
        arr_45 [i_3] = ((/* implicit */signed char) ((unsigned short) var_11));
    }
    var_31 = (~(((/* implicit */int) var_9)));
}

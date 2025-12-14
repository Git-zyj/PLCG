/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44779
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0 + 1] = ((max((((unsigned int) 5882965030544628578ULL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42405)) | (((/* implicit */int) arr_2 [i_0]))))) ? (var_1) : (min((var_1), (((/* implicit */unsigned int) var_7)))))));
        var_12 = ((/* implicit */long long int) min(((signed char)125), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) == (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))))));
        var_13 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -659942987)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23154))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_15 += ((/* implicit */signed char) (-(arr_9 [7U] [i_0 - 1] [i_0 + 1])));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_6))));
                arr_10 [i_0] [i_1] [i_2] [(signed char)16] = ((/* implicit */unsigned long long int) (unsigned short)19517);
            }
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_14 [(signed char)13] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_1) - (((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1])))));
            }
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)17])) ? ((-(-355639370))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))))));
                var_19 = ((/* implicit */unsigned char) ((arr_16 [i_0 - 1]) / (arr_16 [i_0 - 1])));
                arr_18 [8U] [(signed char)5] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) 16692720356000933637ULL));
            }
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_28 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (-((+(659942986)))));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)22]))));
                    }
                } 
            } 
            var_21 = ((unsigned char) (~(-5016303644968990230LL)));
        }
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
        {
            var_22 |= ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) 4294967279U)) ? (arr_13 [i_0] [i_0] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_8])))))))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
            {
                arr_33 [i_0] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) var_4)), (16692720356000933643ULL))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) max((arr_17 [i_8] [i_10 + 2] [i_11 + 1]), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_0 - 1] [i_0 + 1] [0ULL]), (arr_17 [i_0 - 1] [i_8] [i_9]))))) : (((unsigned int) -1669792273)));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) 1093567794)))), (arr_38 [i_11 + 1] [i_9] [i_10] [i_9] [i_8] [i_8] [i_0]))))));
                            var_25 = -935065349;
                            var_26 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (-5016303644968990230LL)))))))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_2 [i_0])))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_8] [i_12])) : (((/* implicit */int) arr_26 [7] [7]))))) ? (arr_15 [17] [17] [i_12] [i_12]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (5016303644968990216LL) : (((/* implicit */long long int) -2067063884))))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_31 [i_0 + 1]))))))));
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (~((~(((/* implicit */int) var_2)))))))));
        var_30 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5757531321162286268LL)) && (((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13] [i_13]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39580
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
    var_13 ^= ((/* implicit */short) -94792908);
    var_14 = (!(((/* implicit */_Bool) 94792881)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (+(arr_1 [i_0])))) : ((-(-3549957427626181275LL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) ^ (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-3549957427626181292LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
        arr_2 [i_0] [(short)11] = ((/* implicit */unsigned short) (~(15493281838936850316ULL)));
        var_16 = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_17 = (short)-25142;
            var_18 = ((((/* implicit */_Bool) var_0)) ? (arr_3 [(unsigned char)2]) : (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
            var_19 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((long long int) arr_6 [(_Bool)0] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))) : (1512968321U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)4)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
                    arr_17 [(short)7] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) & (arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 2])));
                    arr_18 [i_4] = ((/* implicit */signed char) arr_1 [i_0 + 2]);
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)9] [(signed char)9] [i_3] [i_3] [i_3]))) : (2781998960U)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_6))));
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_8 [i_0 + 2] [i_0 + 1] [i_0 - 1]))) / (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 1]))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_3)), (max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((long long int) var_9)))))));
                            arr_25 [i_0] [i_2] [i_3] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_6 + 4] [i_5] [i_6] [i_6] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [(unsigned char)12] [i_6 - 1] [(short)1] [(unsigned char)12] [i_6] [(unsigned char)12])))))) : (max((((/* implicit */unsigned int) arr_23 [(short)5] [i_2] [i_6 + 1] [i_6] [i_6] [i_6] [i_6])), (var_11)))));
                        }
                    } 
                } 
                var_24 ^= (+(((/* implicit */int) (signed char)(-127 - 1))));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4))))) : (((long long int) arr_7 [i_2] [i_2] [i_0]))));
                arr_29 [i_2] [i_2] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                arr_30 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_40 [i_10] [i_2] [8ULL] [i_9] [i_10] [i_2] [8U] = ((/* implicit */unsigned long long int) arr_34 [i_0 + 2] [i_2] [i_9] [i_10] [i_9]);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_48 [i_12] [(_Bool)1] [i_8] [i_2] [i_0] = var_7;
                            var_26 = ((/* implicit */unsigned char) (~(arr_39 [i_8] [i_8] [i_12 - 1] [i_12 - 1] [i_12])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(((arr_20 [i_2] [i_2] [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
            }
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) | (((/* implicit */int) var_2)))) ^ (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) -1061287240)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned char)180)))) : ((~(((/* implicit */int) var_2)))))))));
        }
        arr_49 [i_0] [i_0] = ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) var_8)), (var_9))), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])))), (((/* implicit */unsigned long long int) var_3))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202076
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
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = arr_2 [i_1];
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) arr_4 [i_0] [i_0])));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [(unsigned short)20] [i_0]))) ? (131070) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 + 2]))))) && (((/* implicit */_Bool) ((((_Bool) var_16)) ? (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_0] [i_2])), ((short)-17181)))) : (((/* implicit */int) (unsigned short)65533)))))));
                }
                for (int i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    var_22 ^= ((/* implicit */unsigned short) var_17);
                    arr_11 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(arr_3 [i_0 - 2])));
                    var_23 = ((/* implicit */int) max((var_23), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [22]))))), (-823385412)))));
                    var_24 = ((short) min((arr_1 [(short)6] [i_0]), (arr_1 [2] [i_0])));
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_15 [i_0 - 1] [i_5 - 2] [i_6] [i_6] [21LL]))), (((((/* implicit */_Bool) ((signed char) var_1))) ? ((+(1124845912))) : (((var_13) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_0 [i_4]))))))))));
                            arr_21 [i_4] [i_1] [i_4] [i_5] [i_6] [i_6] [i_0 + 3] &= ((/* implicit */short) ((arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 4]) + ((-(arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 3] [i_0 - 1])))));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_26 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = arr_20 [i_0] [(unsigned short)6] [(signed char)1] [(unsigned short)5];
                            var_26 = ((/* implicit */unsigned char) var_12);
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) 3604851515U)) : ((-(7263160024188813024ULL))));
                            var_28 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) (unsigned char)1)), (0U))))), (arr_6 [i_4])));
                            arr_29 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) arr_10 [i_8]);
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((max((0ULL), (((/* implicit */unsigned long long int) -3LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [10U] [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 1]))))));
                    }
                    for (signed char i_9 = 3; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_33 [i_0] [7] [i_0] [i_0] [18] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_17 [i_0]))))) ? (((/* implicit */int) ((short) (short)-17951))) : (((/* implicit */int) ((unsigned short) var_13)))))), (2799614929U));
                        arr_34 [i_9] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2262089585U)) ? ((~(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1719095509)))))))));
                        arr_35 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) max(((unsigned short)4), (((/* implicit */unsigned short) (short)-17171)))))), (((unsigned short) 9730118416780081500ULL))));
                    }
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_23 [i_0 + 3] [i_4]))), (min((((/* implicit */long long int) var_5)), (arr_23 [i_0 + 2] [i_4]))))))));
                    var_30 = ((/* implicit */unsigned short) var_5);
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (9730118416780081506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0])))))));
                                var_32 = (-(((((/* implicit */_Bool) arr_36 [i_0 + 3])) ? (arr_0 [i_0]) : (arr_36 [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)17171))))) : (((unsigned int) max((-619329611), (((/* implicit */int) var_2)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206133
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (+(((((/* implicit */_Bool) var_10)) ? (var_13) : (var_0))))))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((1714430378318639316ULL) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_1 + 4] [i_1 + 4] [i_1 + 4])), (14680064U))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) max((arr_4 [i_0] [5LL] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) & (((/* implicit */int) var_10)))))));
        }
        var_19 = ((/* implicit */long long int) var_13);
        arr_5 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
        arr_6 [(unsigned short)18] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [(signed char)8]);
        var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)204))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55350))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 4279620613953594904LL)) ? (((unsigned int) (short)797)) : (((/* implicit */unsigned int) ((/* implicit */int) ((4145260800228700485LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_17 [(_Bool)1] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_13)) & (max(((+(arr_12 [i_4] [i_2]))), (((/* implicit */unsigned long long int) arr_0 [i_2]))))));
                        arr_18 [i_2] [i_3] [8U] [i_4] [i_5] = arr_12 [i_4] [i_5];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            arr_22 [i_2] [i_3] [i_3 + 3] [i_3 + 3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_3 - 1] [i_6 - 1]))));
                            arr_23 [5ULL] [i_4] [i_4] [3] [(short)18] = ((/* implicit */long long int) arr_3 [i_2] [i_2] [(_Bool)1]);
                            var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((var_10), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */long long int) arr_14 [i_4])) | (4145260800228700475LL))))))));
                        }
                        arr_24 [i_2] = ((/* implicit */unsigned long long int) (((+(max((var_13), (((/* implicit */unsigned int) arr_15 [i_5] [i_5] [i_5] [i_4] [i_2 - 1] [i_2 - 1])))))) * (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(50331648)))) : (((unsigned int) arr_11 [i_2 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_27 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */short) ((arr_16 [i_7] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])), (9ULL)))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_8 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [4ULL] [16LL] [i_2] [i_7])))))), (arr_20 [i_2] [i_2] [i_3] [3LL] [i_5] [i_7] [i_7]))))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((+(var_2))) * (((/* implicit */int) var_8)))))));
                            var_25 -= ((/* implicit */unsigned long long int) ((int) var_1));
                        }
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_32 [i_3 - 1] [1LL] &= ((/* implicit */short) ((((/* implicit */_Bool) -4677858911909921077LL)) ? (1839770105315564137ULL) : (((/* implicit */unsigned long long int) 4279620613953594909LL))));
                            var_26 -= ((/* implicit */unsigned char) min(((-(-4279620613953594890LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])), (16382419750184727711ULL)))) ? (3855093541U) : (((/* implicit */unsigned int) max((-1664155936), (((/* implicit */int) (short)-14))))))))));
                        }
                    }
                } 
            } 
            var_27 -= ((/* implicit */unsigned int) arr_26 [(unsigned char)4] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1] [9]);
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_1))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
        {
            arr_36 [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) ^ (9059486247334882150ULL)))));
            arr_37 [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) arr_30 [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_2] [i_2] [i_2 - 1]);
            var_29 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_11 [i_2 - 1]));
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 16; i_10 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8945578501817850767ULL)) ? (((/* implicit */int) arr_31 [i_2 - 1])) : (((/* implicit */int) var_7))))) < (var_11)));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((long long int) 2879822189071014817ULL)))));
            arr_40 [i_2 - 1] [i_2] = ((/* implicit */short) 1061354445);
        }
        var_32 = ((/* implicit */unsigned short) (((~(arr_19 [4U] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))) <= (((((_Bool) var_7)) ? (max((4279620613953594909LL), (((/* implicit */long long int) arr_13 [i_2] [i_2 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (4279620613953594909LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    }
}

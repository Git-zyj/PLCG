/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46060
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) 2102615782153607795LL);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((((unsigned long long int) arr_1 [i_0])) < (((/* implicit */unsigned long long int) (+(3982394925U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) == (-2102615782153607796LL))))) : (arr_1 [i_0]))))));
                    var_13 = ((/* implicit */unsigned long long int) 2102615782153607782LL);
                }
            } 
        } 
        arr_7 [i_0 + 1] [i_0 - 1] = max(((~(7933792788293064562ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)0])));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_14 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (max((0ULL), (7933792788293064552ULL)))));
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) || (((/* implicit */_Bool) 10512951285416487066ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) arr_9 [i_3]))))) : (((((/* implicit */_Bool) 7933792788293064552ULL)) ? (-1) : (1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-3940)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [7])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (2102615782153607795LL))))))) : (((/* implicit */int) ((unsigned char) max((var_10), (var_3)))))));
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3])))) ? ((~(arr_8 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((((-42061255) + (2147483647))) >> (((((/* implicit */int) (short)-31769)) + (31778))))))));
        var_16 *= ((/* implicit */unsigned long long int) arr_9 [i_3]);
    }
    var_17 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) arr_16 [(unsigned short)18] [15LL] [15LL]);
                                var_19 += ((/* implicit */unsigned int) var_10);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)1008)) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_4])), ((unsigned short)36720))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_4] [i_4] [i_5] [i_5] [i_4] [(_Bool)1] [(unsigned char)8])))))))), ((-(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_4] [16ULL] [i_5]))))))))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10741))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_4] [i_5] [i_4] [i_5] [i_4] [22])) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3939))) : (arr_25 [0] [i_5] [i_9] [i_5])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -1)) : (var_6)))))))));
                        var_23 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (unsigned short)10731))), (((var_4) << (((((/* implicit */int) (short)8453)) - (8453)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_23 [i_4] [i_4] [i_5] [i_5] [i_10] [i_5] [i_4])), (var_9)))) ? (arr_25 [i_4] [i_9] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54789)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)3939)))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_9] [(unsigned char)4] [19])) : (((/* implicit */int) arr_23 [i_9] [i_5] [i_5] [i_5] [i_5] [i_4] [i_4]))))), (((unsigned long long int) -2147483632)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) 7684091283538059501LL))) > (((/* implicit */int) max(((unsigned char)176), (((/* implicit */unsigned char) var_3)))))))))));
                    var_25 = ((/* implicit */long long int) min((((322863308U) >> ((+(((/* implicit */int) var_3)))))), (351257835U)));
                    var_26 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_9] [i_4] [i_4]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40872)))))))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_23 [3] [i_9] [i_5] [i_4] [i_5] [3] [3])) : (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 23; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) arr_13 [i_5])) >= (arr_24 [i_4] [i_4] [i_4])))), (274877906943LL)))) ? (((((/* implicit */_Bool) ((-7684091283538059521LL) / (-274877906944LL)))) ? (274877906943LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)32)), (arr_30 [17U] [23ULL] [17U])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_4])))));
                    var_28 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (arr_16 [i_4] [4] [14U])))))) ? (arr_25 [i_11 + 1] [i_5] [i_11 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((((long long int) 2786023432U)) * (((/* implicit */long long int) ((/* implicit */int) ((arr_25 [i_4] [i_5] [i_4] [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))));
                }
            }
        } 
    } 
}

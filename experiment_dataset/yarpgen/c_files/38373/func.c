/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38373
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((6654674831895156111ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [4U] [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */signed char) (((-(6654674831895156111ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_3 + 1] [i_3] [i_3 + 4] [i_3 - 1]))))));
                        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) 6654674831895156111ULL))) ? (((/* implicit */int) ((6654674831895156111ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */int) var_3)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3])))))));
                        var_12 -= ((/* implicit */int) (unsigned char)255);
                    }
                } 
            } 
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (6654674831895156111ULL) : (((/* implicit */unsigned long long int) arr_3 [0U] [0U]))))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_0] [i_4])), (arr_3 [i_0] [i_0])))) < (((((/* implicit */_Bool) 2268069350401547310ULL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_10 [i_0] [5LL]))))));
            arr_13 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned short)8191)))) >= (((/* implicit */int) ((6654674831895156111ULL) >= (((/* implicit */unsigned long long int) ((arr_3 [i_0] [8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))))))));
            var_14 &= ((/* implicit */unsigned short) ((2942115137938269441ULL) >> (((arr_8 [i_0] [(_Bool)0] [i_0] [i_0]) - (2185110365U)))));
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57345)) ? (((/* implicit */unsigned int) ((arr_4 [i_4] [i_0]) & (arr_4 [i_4] [i_0])))) : (max((((/* implicit */unsigned int) (_Bool)0)), (((arr_12 [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_4])))))))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (18394094260307069069ULL))))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 10; i_6 += 1) 
        {
            {
                arr_19 [i_5] [i_5 + 1] [8LL] = (~(((((/* implicit */_Bool) min((arr_6 [i_5] [i_5] [(unsigned char)2]), (((/* implicit */unsigned int) arr_17 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (arr_8 [i_6] [i_6] [i_5] [i_5])))) : (arr_3 [(short)1] [(short)1]))));
                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (510216685U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - (var_7)))));
                var_18 += ((/* implicit */long long int) 3784750610U);
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5] [i_6] [i_6] [i_6] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) arr_21 [i_5 - 1] [(signed char)6] [i_7]);
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (unsigned short)8191)), (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_26 [i_5] [(short)0] [i_5] [i_8] [i_9]))))))))));
                                var_20 += ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_6 - 3] [i_6 - 3] [i_5 + 2]))))), (((unsigned int) arr_25 [i_8] [4ULL] [i_6 - 2] [i_6 + 1] [i_5 - 1]))));
                                var_21 *= ((/* implicit */unsigned long long int) arr_11 [(short)10] [i_6]);
                            }
                        } 
                    } 
                } 
                var_22 = 2890945909U;
            }
        } 
    } 
}

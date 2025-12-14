/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35628
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) | (max((((/* implicit */int) var_16)), (var_8)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((long long int) var_1));
        arr_2 [15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [12ULL])) * (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) var_13)))))))) ? (((unsigned int) max((((/* implicit */int) arr_1 [i_0] [i_0])), (1127076686)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))));
            arr_6 [i_1] [i_1] [i_1] = max((-1127076687), (1127076686));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0])))) & (((((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned char)166)))) ^ (((((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_4])) | (-1127076670)))))));
                            var_23 += ((/* implicit */long long int) ((((arr_3 [i_2]) >> (((arr_9 [i_0] [i_1] [i_0] [i_4]) + (988385950))))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((var_11) / (var_10)))) <= (var_5))) ? (((/* implicit */int) ((-1127076686) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_0])))))))) : ((((!(((/* implicit */_Bool) (short)-1)))) ? (min((var_8), (((/* implicit */int) var_17)))) : (((/* implicit */int) ((arr_10 [(short)3] [i_0] [15] [i_5] [i_5] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 4; i_6 < 17; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((long long int) arr_10 [i_6] [i_6] [i_5] [i_0] [i_0] [i_0])) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_6 + 1] [i_6 - 2] [i_6 - 4])))));
                var_27 = ((/* implicit */unsigned char) arr_5 [i_0] [i_6 - 1]);
            }
            var_28 -= ((((/* implicit */_Bool) (~(arr_16 [i_0] [i_5] [i_0])))) ? ((~(arr_16 [i_0] [i_0] [i_5]))) : (((((/* implicit */unsigned long long int) 1127076695)) ^ (arr_16 [i_0] [i_0] [i_5]))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))) & (((/* implicit */long long int) (~(arr_3 [i_0]))))));
            var_29 = ((/* implicit */int) ((max(((-(arr_12 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18014394214514688LL)) ? (arr_17 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_5] [i_0] [i_0])))))))) > (((/* implicit */long long int) (~(((/* implicit */int) ((arr_7 [i_0] [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_17)) : (max((arr_18 [i_0]), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))) : (arr_19 [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
            var_31 = ((unsigned short) arr_17 [i_0]);
        }
    }
}

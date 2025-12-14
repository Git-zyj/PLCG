/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199790
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
    var_11 &= ((/* implicit */long long int) (unsigned char)255);
    var_12 = ((/* implicit */short) 2717988767U);
    var_13 = ((unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1069547520)))) ? (((((/* implicit */int) var_2)) >> (((2717988767U) - (2717988761U))))) : (var_7)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (576443160117379072ULL))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) 0LL))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 2717988767U))) | (((/* implicit */int) arr_7 [i_1] [i_2]))))) ? (arr_3 [i_1] [4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(6131028371818781101ULL))))))))));
            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)135)) >= (((/* implicit */int) (unsigned short)768))));
            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7ULL))))) : (((((/* implicit */int) arr_7 [i_1] [i_2])) & (((/* implicit */int) (unsigned char)187)))))) > (((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_2] [i_1])))));
        }
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((((/* implicit */short) (unsigned char)192)), (arr_16 [i_1] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (unsigned char)192))))) ? (2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))) : (arr_2 [i_1])));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) 174274872)) : (((((/* implicit */unsigned long long int) 0LL)) / (18446744073709551615ULL)))));
                var_17 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_3 + 2]), (arr_15 [i_4] [i_3] [i_3 - 1])))) ? (((((/* implicit */_Bool) (unsigned short)768)) ? (var_0) : (((/* implicit */long long int) 0)))) : (((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 + 3])) ? (arr_2 [i_3 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)768)))))));
            }
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                arr_23 [i_1] [i_1] [i_1] [i_1] = ((12315715701890770514ULL) >> (((((-41802783) / (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])))) + (1741808))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((1576978529U), (4294967295U)))) || (((/* implicit */_Bool) max(((unsigned char)135), ((unsigned char)121))))))), (min((arr_3 [i_5 + 1] [i_3 + 2]), (arr_3 [i_5 - 2] [i_3 + 3])))));
            }
            arr_24 [i_3 - 1] = ((/* implicit */short) -1069547520);
        }
        var_20 *= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_7))), (arr_15 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */long long int) -438422874))))) ? (min((((/* implicit */unsigned int) (unsigned short)28610)), (1595413791U))) : (((/* implicit */unsigned int) max((0), (((/* implicit */int) var_8)))))))) : (var_10));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)0))));
                    arr_30 [i_1] [i_6] [i_7 - 1] [i_7] = ((int) min((((/* implicit */unsigned long long int) max(((unsigned short)28672), (((/* implicit */unsigned short) (unsigned char)255))))), (max((((/* implicit */unsigned long long int) arr_7 [i_6] [i_1])), (var_10)))));
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */int) arr_22 [i_1] [i_1] [i_6] [i_7 + 1])) >> (((2365139230U) - (2365139200U)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2666843142U)), (((((/* implicit */_Bool) arr_26 [i_1] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) : (((((/* implicit */_Bool) arr_27 [i_1] [i_6] [i_7 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) : (arr_27 [i_1] [i_6] [i_7 - 1])))));
                    var_23 -= ((/* implicit */unsigned int) arr_10 [i_7 + 2]);
                }
            } 
        } 
        arr_32 [i_1] = arr_9 [i_1] [i_1] [i_1];
    }
    var_24 = ((/* implicit */unsigned int) var_0);
}

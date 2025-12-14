/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211676
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
    var_14 = ((/* implicit */_Bool) min((((var_5) << (((((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)-32767)) + (32771))))) - (365600))))), (((/* implicit */unsigned long long int) var_9))));
    var_15 = ((/* implicit */int) min((var_6), (((unsigned int) (short)-32767))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_3))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [9LL] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) | (67108863U)));
                    arr_9 [i_0] [i_1] [12ULL] = ((/* implicit */unsigned long long int) var_0);
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) (short)-32761);
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (unsigned short)18);
            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_13 [i_3 - 2]) : (var_7)))) ? (((/* implicit */int) min(((unsigned short)8191), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) != (((unsigned long long int) 4227858432U)))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2174610974101913749ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_19 [i_0] [i_4] [i_5])) : ((+(((/* implicit */int) arr_3 [i_0] [i_4]))))));
                arr_21 [i_0] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
            var_19 += ((/* implicit */unsigned long long int) (signed char)-42);
            /* LoopSeq 3 */
            for (int i_6 = 2; i_6 < 13; i_6 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57324))) > (18446744073709551615ULL)));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29567)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)83)) ? (var_0) : (((/* implicit */long long int) 67108863U))))) : (var_7)));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) : (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047)))));
            }
            for (int i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
            {
                arr_27 [i_4] = ((/* implicit */_Bool) var_2);
                var_23 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [(short)5])) ? (arr_18 [10]) : (var_5))));
            }
            for (int i_8 = 2; i_8 < 13; i_8 += 3) /* same iter space */
            {
                arr_30 [i_0] [i_4] [i_4] = ((/* implicit */signed char) var_1);
                arr_31 [i_0] [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) var_5);
                arr_32 [(signed char)0] [i_4] [i_4] = ((-1441553468) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (6610226816675955745LL)))));
            }
        }
        for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            arr_37 [(signed char)3] = ((/* implicit */unsigned short) (short)-13830);
            var_24 += ((/* implicit */unsigned short) ((int) ((unsigned short) (-(((/* implicit */int) arr_33 [i_0] [i_0] [i_0]))))));
            var_25 = (~(3464107363606445135ULL));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (signed char)-74)), (((((/* implicit */_Bool) 4227858406U)) ? (3305434410U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))))))))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((264860706039523925ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)29196)), (var_6)))))))));
}

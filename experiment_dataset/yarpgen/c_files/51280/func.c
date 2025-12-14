/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51280
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
    var_17 = ((/* implicit */unsigned int) ((long long int) (short)-27));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0 + 2] = var_12;
        arr_3 [5] [i_0] = ((/* implicit */long long int) ((13779271618922753282ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (~(((long long int) arr_1 [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [(unsigned char)20] [i_1] [i_3])) | (((((/* implicit */_Bool) -2158341837577041991LL)) ? (arr_4 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_3]))))))));
                        arr_13 [i_0 + 3] [i_1] [i_2] [5U] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_1] [i_0] [i_3]) : (arr_9 [i_0] [i_1] [i_2] [i_3])))) : (((((/* implicit */unsigned long long int) ((-6852462375592389379LL) / (((/* implicit */long long int) var_13))))) + ((-(arr_4 [(unsigned char)6] [(unsigned char)6])))))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-(549129485160499160ULL))))));
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4]))) < (549129485160499160ULL))) ? (((/* implicit */long long int) arr_14 [i_0 + 3] [i_0 - 1])) : ((+(6852462375592389378LL))))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((-(var_3))) != (((/* implicit */long long int) ((unsigned int) arr_12 [i_0] [i_4] [i_0 + 1] [i_0 + 2] [i_0] [i_0]))))))));
        }
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (((((~(arr_9 [i_5] [i_5] [i_5] [i_5]))) + (((/* implicit */int) var_15)))) != (((/* implicit */int) arr_7 [i_5] [i_5]))));
        arr_22 [i_5] = (-(((/* implicit */int) var_0)));
        var_24 ^= ((/* implicit */short) max(((-(arr_21 [i_5]))), (((/* implicit */unsigned int) arr_19 [i_5] [i_5]))));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_25 += ((/* implicit */unsigned long long int) var_12);
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)222))))) / (((((/* implicit */_Bool) 2147483647)) ? (-6852462375592389379LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (max((((6852462375592389379LL) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) > (arr_4 [i_6] [i_6])))))) : (max(((~(var_6))), (var_6)))));
        var_26 = ((/* implicit */unsigned int) (((+(var_9))) >= (((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_6]))));
        var_27 = ((((/* implicit */_Bool) (~(arr_14 [i_6] [17])))) ? (((long long int) (!(((/* implicit */_Bool) (unsigned char)66))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */int) ((arr_1 [i_6]) != (((/* implicit */long long int) 939824588))))) : (((((/* implicit */int) (unsigned char)184)) + (((/* implicit */int) arr_23 [i_6]))))))));
        var_28 = ((/* implicit */unsigned long long int) min((2059519104), (896)));
    }
}

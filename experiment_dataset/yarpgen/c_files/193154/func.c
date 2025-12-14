/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193154
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) var_7);
                arr_5 [i_0] [i_1] = ((((/* implicit */unsigned long long int) (+(var_4)))) < (13733521934936870120ULL));
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) != ((+(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) min((arr_1 [(signed char)15] [i_1]), (arr_1 [i_0 - 1] [i_0])))) ? (((/* implicit */unsigned long long int) var_4)) : ((~(var_13)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) var_7);
                    var_16 *= ((/* implicit */unsigned int) min(((~(arr_10 [i_2] [i_2] [i_2]))), (((/* implicit */long long int) (short)-19733))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24545)) / (((/* implicit */int) var_0))))) < (min((16948871599483466669ULL), (((/* implicit */unsigned long long int) -9128779690059824368LL))))))))));
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) var_6);
                arr_21 [i_5] [(signed char)14] [i_5] = (((+(arr_14 [i_5] [i_5 + 1] [14LL] [i_5]))) >= ((~(var_4))));
                var_20 = ((/* implicit */unsigned short) (~((+(9128779690059824367LL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    arr_25 [i_6] [i_5] = min(((+(arr_24 [i_5] [i_6] [i_5]))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))))));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                    var_22 *= ((/* implicit */long long int) (~(((/* implicit */int) ((arr_6 [i_7] [i_7]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_7])) : (var_4)))))))));
                    var_23 ^= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [i_6])) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
                }
                for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_24 = ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3))))))) < (max((2901439856649053526ULL), (((/* implicit */unsigned long long int) 9128779690059824367LL)))));
                        var_25 = ((/* implicit */unsigned int) (+((+(-2016997654)))));
                        var_26 = ((/* implicit */_Bool) var_11);
                    }
                    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_22 [i_5 + 1])), (16948871599483466669ULL))), ((+(2901439856649053526ULL)))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) 8857886277485024194ULL))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_12))));
                        arr_33 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-2016997626) : (((/* implicit */int) var_0))))))))) : (arr_27 [i_5] [i_6])));
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) || ((!(((/* implicit */_Bool) arr_30 [(unsigned short)7] [i_5 - 1] [(unsigned short)7] [i_8 + 1] [i_5]))))));
                }
                for (unsigned char i_11 = 2; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8821402855959312272ULL)) ? (min((arr_23 [i_11] [i_5 + 1] [i_11 - 1] [(signed char)16]), (arr_23 [i_5 - 1] [i_5 + 1] [i_11 - 1] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_5] [i_5 + 1] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    arr_36 [i_5] [10LL] [i_11 + 1] = ((/* implicit */short) max((13535088077645455886ULL), (max((((/* implicit */unsigned long long int) arr_14 [16] [i_11] [16] [i_11 - 2])), (13535088077645455860ULL)))));
                    var_32 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (((+(11258173825890949354ULL))) >= (((var_7) ? (((/* implicit */unsigned long long int) 1233920212)) : (arr_8 [i_11]))))))));
                }
            }
        } 
    } 
}

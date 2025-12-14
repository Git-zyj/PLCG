/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29439
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (var_8)))) >> (max((((/* implicit */long long int) var_7)), (max((-1948664730597321161LL), (((/* implicit */long long int) (_Bool)1)))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) 5676430913196293328ULL)) ? (1838819514) : (((/* implicit */int) (unsigned char)255)))))) * (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_9))))), (max((((((/* implicit */_Bool) 3630970216495887089ULL)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (short)-25605)))), (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1] [(unsigned short)4])) == (((/* implicit */int) (unsigned char)0)))))) >= (max((((/* implicit */unsigned long long int) 842789449571644031LL)), (14815773857213664527ULL)))));
                    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_3])) <= (((/* implicit */int) (short)-13144))))), (arr_3 [i_1] [i_2])))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (var_4) : (((arr_6 [i_3 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14588)))))))));
                    var_14 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)14588))) : (-5366585330667991397LL)));
                    arr_11 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_1 - 1] [i_3 - 2])) * (((/* implicit */int) arr_5 [(short)9] [i_1] [i_1 + 2])))) >= (((/* implicit */int) min((arr_5 [i_1] [i_1] [i_1 + 2]), (arr_5 [i_1] [i_1] [i_1 - 1]))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_1] [(short)1]), (((/* implicit */unsigned short) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */short) arr_3 [i_1] [i_1])))))))) >> (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_9 [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */int) arr_4 [i_1] [7] [i_1])) + (((/* implicit */int) arr_1 [i_1 + 3] [i_1]))))))));
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_4 [i_1] [i_1 + 1] [i_1]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 - 1])))))));
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_17 [i_4]))))), (((arr_15 [i_4] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) (short)2047))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_16 [i_6]))))))))));
                    arr_23 [(short)1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) min((13088041313185868660ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))));
                }
            } 
        } 
        arr_24 [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)31)) / (((/* implicit */int) var_0))));
        arr_25 [i_4] = ((/* implicit */unsigned short) arr_17 [i_4]);
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_7])) == (-1820721613)))), (((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7]))) / (arr_26 [i_7])))))) ? (min((((((/* implicit */_Bool) 213254191U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7]))) : (arr_26 [i_7]))), (((/* implicit */long long int) (signed char)15)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_28 [i_7]), (arr_28 [i_7]))))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((arr_28 [i_7]), (((unsigned char) 5676430913196293347ULL)))))));
    }
}

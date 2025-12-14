/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54506
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */_Bool) (short)29729)) && ((_Bool)0)))))), (((int) (~(((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (4503599627370495ULL))) == (((/* implicit */unsigned long long int) ((arr_1 [i_0]) / (((/* implicit */int) max((((/* implicit */short) (unsigned char)173)), (var_7)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((long long int) (short)-32479)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((min((arr_2 [i_1]), (arr_2 [i_1]))) >= (min((arr_2 [i_1]), (arr_2 [i_1])))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)55966))))))))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)98)) - (((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_0 [i_1] [i_1])) | (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */int) ((short) 7ULL))) - (arr_1 [i_1]))))))));
            arr_12 [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)0)))), (((/* implicit */int) ((arr_11 [i_1]) < (arr_11 [i_3]))))));
            arr_13 [i_1] = ((/* implicit */unsigned int) (~(((unsigned long long int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_11 [i_1]) >= (((/* implicit */int) (short)32507))))), (((var_8) - (((/* implicit */unsigned long long int) arr_5 [i_3])))))))));
            var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_2 [10]))))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_23 = max((((/* implicit */unsigned long long int) min((-1043279747160067044LL), (((/* implicit */long long int) arr_4 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7397))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))));
            arr_16 [i_1] [i_4] |= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) >= (((long long int) arr_2 [i_4 - 1]))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) max((((arr_18 [i_5]) ^ (arr_18 [i_5]))), ((-(arr_18 [i_5])))));
        var_24 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned char)162)))));
        arr_21 [i_5] = ((/* implicit */_Bool) (-(var_4)));
        var_25 -= ((/* implicit */short) ((((/* implicit */int) var_9)) | ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))))));
    }
}

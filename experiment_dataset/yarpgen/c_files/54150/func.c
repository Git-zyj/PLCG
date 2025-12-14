/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54150
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
    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (791300857U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) | ((-(18446744073709551599ULL)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((+(arr_2 [i_0] [22ULL]))) : (min((((/* implicit */unsigned int) var_11)), (var_5)))));
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned int) 2147483647)))))) | (72057319160020992ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_2)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) (signed char)124))) : (-1518001719))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) != (10040170016989450185ULL)));
    }
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_3])) ? (arr_0 [i_2 - 1] [i_3]) : (var_12)));
            var_20 = ((/* implicit */unsigned short) -1518001719);
        }
        var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)124))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4621))) : (var_7)))))) << (((((((/* implicit */_Bool) (signed char)120)) ? (max((10040170016989450170ULL), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) - (10040170016989450132ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_3 [i_4] [(short)0])) | (var_6))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4]))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            arr_17 [(signed char)16] = ((/* implicit */unsigned char) arr_7 [i_6] [i_5]);
            var_24 = ((/* implicit */unsigned char) ((var_2) || (((((((/* implicit */_Bool) arr_1 [i_6])) ? (var_10) : (((/* implicit */long long int) var_7)))) > (((/* implicit */long long int) 16777215U))))));
            arr_18 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_2)), (8406574056720101449ULL)));
        }
        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073709551590ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_7] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)87))))) : ((-(arr_7 [11U] [i_7 + 3]))))) : (((arr_4 [i_5] [14U]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((+(arr_8 [i_7] [i_7]))))))))));
            arr_22 [i_7] = ((/* implicit */_Bool) (+(max((((-1LL) ^ (((/* implicit */long long int) 3503666427U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (var_5) : (3503666438U))))))));
        }
        var_26 *= ((/* implicit */unsigned long long int) min(((+(((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) var_9))))) || (((/* implicit */_Bool) (unsigned char)192)))))));
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) | (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-3235)) || ((_Bool)1)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) 63ULL)) || (((/* implicit */_Bool) var_13)))))));
    }
}

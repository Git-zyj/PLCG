/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248941
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
    var_19 = ((/* implicit */unsigned long long int) max(((-((-(((/* implicit */int) var_11)))))), (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_12)))) ? (((/* implicit */unsigned long long int) 2147483647U)) : ((((+(var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) 2147483647U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned long long int) (-(arr_2 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (var_17)))) : (max((var_13), (((/* implicit */unsigned int) arr_3 [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)14))) / (-1261804170190748875LL))));
        var_24 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */long long int) var_13))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_0 [i_2])))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) - (var_13))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 16086649784134083965ULL)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_13 [i_2] = ((/* implicit */long long int) ((_Bool) (unsigned char)133));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((arr_0 [i_3]) ? (((/* implicit */int) ((unsigned char) var_15))) : ((-(((/* implicit */int) var_18)))))))));
        }
    }
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)159)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)0)))) : (max((2147483658U), (((/* implicit */unsigned int) (_Bool)1)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned int) arr_7 [i_4] [(unsigned char)4]))))));
        var_27 -= ((/* implicit */unsigned char) var_8);
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (3506137230U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -5393919254946019768LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
        var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_5]))) ? (((((((/* implicit */int) arr_17 [i_5] [i_5])) ^ (arr_18 [i_5]))) | (max((arr_18 [1LL]), (((/* implicit */int) var_2)))))) : (arr_18 [i_5])));
    }
    for (short i_6 = 2; i_6 < 21; i_6 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((arr_23 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [14])))))) ? (((((/* implicit */int) (signed char)14)) >> (((var_5) - (3373308138U))))) : ((+(((/* implicit */int) var_14))))))));
        arr_24 [12LL] [i_6 + 2] &= ((/* implicit */unsigned char) arr_23 [16]);
    }
}

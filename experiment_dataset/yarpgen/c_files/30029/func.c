/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30029
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (2147483631)))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) -2147483631)) : (var_3)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_14 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_2) : (2147483631)))) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))), (((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (11201809723046837955ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32453))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [16] [i_1]), (((/* implicit */short) (signed char)7))))))))));
            var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)15143)) ? (((/* implicit */int) (short)-15887)) : (((/* implicit */int) (unsigned short)9900)))) == (((/* implicit */int) arr_1 [i_0] [i_1 + 2])))) ? (((((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)55641)))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)28531))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            arr_7 [i_0] [i_1] = arr_4 [i_0] [i_0];
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_0] |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)4591)))) - (((/* implicit */int) (signed char)-30)))) / (((/* implicit */int) var_9))));
            arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)34640)) & (((/* implicit */int) arr_8 [i_2])))))) * (((/* implicit */int) ((signed char) (short)-32764)))));
            var_16 += ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0]))) >> ((((((((-(1614307000))) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (88))))) - (533176626)))));
            var_17 &= max(((+(((((/* implicit */_Bool) 0U)) ? (2055033518U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned int) min((max((((/* implicit */int) (unsigned short)44980)), (var_0))), (((((/* implicit */_Bool) (unsigned short)30473)) ? (((/* implicit */int) (signed char)-7)) : (var_0)))))));
        }
        arr_12 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (signed char)-7);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((_Bool) var_5)) ? (((/* implicit */int) (short)23063)) : (((/* implicit */int) (unsigned short)62743))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            arr_18 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_15 [i_3 + 3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_13 [i_3 + 1]))));
            var_19 = ((/* implicit */unsigned short) ((short) arr_17 [i_3 + 1] [i_3 + 3]));
            var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
        }
        arr_19 [i_3 + 2] [i_3 - 1] = ((/* implicit */_Bool) arr_6 [3] [i_3]);
    }
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_21 -= arr_8 [10];
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 + 1])) / (arr_22 [i_5 + 3] [i_5 + 3])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_4 [i_5] [i_5 + 2]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [(signed char)6] [i_5]))) : (arr_23 [i_5])))))))));
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (((unsigned int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((arr_23 [i_5 + 2]) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6 + 2] = ((/* implicit */_Bool) (-(((arr_23 [i_6 + 2]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9899)))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_6 - 1])) ? (arr_22 [i_6 + 2] [i_6 - 1]) : (arr_16 [i_6 + 1] [i_6])))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) min(((short)-23063), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)4019)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((arr_24 [i_6]), (((/* implicit */unsigned char) ((signed char) (unsigned short)58121)))))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((min((var_0), (((/* implicit */int) arr_6 [1] [i_7])))), ((+(((/* implicit */int) var_7)))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) var_3);
    }
    var_27 = ((/* implicit */signed char) max((var_27), (var_11)));
}

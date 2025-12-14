/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208976
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
    var_17 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 4433138414389965404LL)) ? (((/* implicit */long long int) var_8)) : (2307673589375134484LL))), (max((((/* implicit */long long int) var_4)), (var_12))))), (((/* implicit */long long int) max((8384512U), (((/* implicit */unsigned int) (short)-20)))))));
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = (~(576460752303422464ULL));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_20 = 12852512751521849093ULL;
            var_21 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (5594231322187702522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (max((2108571131U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1]))))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_22 &= ((/* implicit */unsigned short) ((unsigned long long int) ((short) max((5594231322187702522ULL), (((/* implicit */unsigned long long int) var_11))))));
            var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)26)) == (((/* implicit */int) ((short) max((12852512751521849094ULL), (((/* implicit */unsigned long long int) var_13))))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2307673589375134455LL)))) ? (((unsigned int) -2307673589375134485LL)) : (((unsigned int) (short)(-32767 - 1)))));
        }
        for (short i_3 = 4; i_3 < 14; i_3 += 1) 
        {
            arr_13 [(unsigned short)10] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 + 1]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 1] [(short)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 4]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 + 1]))) : (var_1)))))));
            var_25 = ((/* implicit */short) var_15);
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_0))))) : (var_12)));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) var_11);
        var_26 = ((_Bool) ((((/* implicit */int) ((5371979064005695465LL) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))) / ((+(((/* implicit */int) (unsigned char)9))))));
        arr_18 [i_4] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) arr_15 [(short)11])))), (((/* implicit */int) var_9))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((((unsigned long long int) arr_15 [i_5 + 3])) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (short)-28150)) : (((/* implicit */int) (_Bool)1)))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) (short)-7684))));
        arr_23 [0U] &= max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) arr_15 [15LL]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_5]))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_19 [i_5] [i_5])), (var_10))))))));
        arr_24 [i_5] [i_5] = arr_15 [i_5];
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    arr_35 [4U] [i_7] [(_Bool)1] = arr_34 [i_6] [i_7] [i_8] [i_7];
                    arr_36 [i_6] [i_7] [i_7] [i_8] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)10565))))) < (12852512751521849087ULL)));
                    arr_37 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-19446))));
                    arr_38 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_25 [i_6])) - (0ULL)));
                    var_27 = ((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_7] [i_8]);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24366)) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_0))))) > (((((/* implicit */_Bool) -2307673589375134478LL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))))))))));
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6] [i_6]))));
    }
}

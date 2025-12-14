/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199903
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
    var_11 += ((/* implicit */int) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_3)))) * (((((/* implicit */_Bool) 2147483647)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (arr_5 [i_2] [i_2])));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-22676)) ? (((/* implicit */int) (_Bool)1)) : (-2147483638))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)19617)))) : (((((/* implicit */_Bool) 12682152409473283183ULL)) ? (((/* implicit */int) (unsigned short)45918)) : (((/* implicit */int) var_6)))))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) 9425990120311310660ULL)) ? (13635698014141765623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45910)) != (((/* implicit */int) (unsigned char)254))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)64)))))) ? (((((/* implicit */_Bool) (-(var_2)))) ? (((1543489832U) & (((/* implicit */unsigned int) -2147483647)))) : ((+(arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) arr_6 [i_0] [i_0] [i_0])), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)54792)) >= (((/* implicit */int) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) (short)10695)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1364))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45919))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_0] [i_0])) + (131))) - (26))))) <= (((((/* implicit */int) arr_8 [i_0])) ^ (((/* implicit */int) (signed char)25))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned long long int) ((arr_15 [(unsigned short)16] [i_4] [i_5]) ? (((/* implicit */int) arr_12 [i_3])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) var_7))))))));
                    arr_21 [i_3] [i_4] [i_3] = ((/* implicit */signed char) arr_14 [i_3] [i_3] [i_4]);
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24702)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_16 [i_4 - 1])))))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_5]))) : (var_8)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (13965126880793647590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3])))));
                }
            } 
        } 
        var_16 *= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)33995)))) <= (((((/* implicit */int) (unsigned char)24)) ^ (((/* implicit */int) (short)17063))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) min((arr_17 [20U] [i_3]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_8))))))) : (min((max((var_3), (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_6]))));
        arr_26 [i_6] [i_6] = ((/* implicit */int) (((_Bool)1) ? (2147475456U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))));
        arr_27 [i_6] = arr_24 [i_6];
    }
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)16128))));
}

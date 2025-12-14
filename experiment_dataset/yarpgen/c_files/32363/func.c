/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32363
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
    var_12 = ((/* implicit */unsigned long long int) (-(((var_9) << ((((~(var_0))) - (154173325967359619ULL)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [15]);
        arr_4 [i_0] = ((/* implicit */int) var_0);
        var_13 -= ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_8 [6] |= ((/* implicit */unsigned long long int) (((-(arr_5 [20]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13280673654309588692ULL))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
        var_14 = ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) != (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))));
            var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_11 [i_1] [i_1]))))))), (var_10)));
            arr_13 [2ULL] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1 + 2] [i_1])))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_16 [i_1] [i_1] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [i_1 + 1] [i_1]), (arr_11 [i_1 + 1] [i_1])))) == ((~(((/* implicit */int) ((unsigned char) (unsigned char)240)))))));
            var_16 = max((arr_5 [i_1]), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [10] [17ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_5 [i_1]))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((arr_15 [(unsigned char)0] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) != (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [16] [i_1 - 1] [i_3])))))))))))));
        }
        for (int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_11 [i_1] [i_1])))) : ((+(((/* implicit */int) var_4))))))));
            arr_19 [i_4] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_10) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (var_10))))))));
            arr_20 [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1 - 3])), ((unsigned char)136))))))), (((((((/* implicit */_Bool) 1402054297)) ? (10980873360499128319ULL) : (var_2))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)7)), (var_8)))))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (unsigned short)40724);
            var_20 *= ((/* implicit */_Bool) -1713842845);
            var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) -1)) : (var_6)))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)63)) : (var_11))))))));
        }
        var_22 *= var_3;
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_0)))) ? (var_11) : (((int) (unsigned char)7))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-55)))))) : ((-(6967713337418597087ULL)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (10324709982696989524ULL) : (((/* implicit */unsigned long long int) -598407660)))))));
        var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16242069909828469968ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))) : (18446744073709551615ULL))))));
    }
}

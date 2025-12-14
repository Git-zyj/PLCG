/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207007
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
    var_14 = ((((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_4) >= (var_8)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (short)-11);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-10), ((short)16)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_9)))) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (short)13)), (var_3))) / (((unsigned long long int) (short)-27639))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_9)))))) : (((((/* implicit */_Bool) arr_1 [11ULL])) ? (((((/* implicit */_Bool) (short)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (((/* implicit */int) (short)-31837)) : (((/* implicit */int) var_10)))))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((+(var_3))))))));
        var_19 = (+((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)12]))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))))))));
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-19)) ? (arr_0 [(short)12] [i_1]) : (arr_0 [9ULL] [i_1])))));
        var_22 -= ((short) ((unsigned long long int) 0ULL));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_23 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (arr_0 [(short)7] [i_2]));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7874800641872202727ULL)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-28)) : (((/* implicit */int) (short)-14)))) : (((/* implicit */int) min(((short)-22), ((short)13))))))) ? (min((min((arr_5 [i_2]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min(((short)-1), (var_7)))))) : (var_13)));
        var_25 ^= ((/* implicit */unsigned char) ((short) ((min((14469231452365646285ULL), (arr_3 [i_2]))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) % (var_9))) - (14173ULL))))));
        var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [4ULL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_0 [i_2] [i_2]))))))) : (4293918720ULL)));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 11120153900451421151ULL)))) + (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)181)))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((unsigned long long int) max((var_6), (((/* implicit */short) var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min(((unsigned char)196), ((unsigned char)0))))))));
    var_29 = ((unsigned char) ((unsigned char) (~(((/* implicit */int) var_10)))));
}

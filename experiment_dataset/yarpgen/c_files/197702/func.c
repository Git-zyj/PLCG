/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197702
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned char) (short)397))) : (arr_2 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (arr_1 [i_0] [i_0])))) : (2305843009213693951ULL)))) || (((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) 4903665012388602304ULL)) ? (-1081156757) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) var_6)))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) var_1)) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (var_9)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (-1922655309) : (((/* implicit */int) arr_0 [i_0])))) == ((-(arr_2 [i_0])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */int) var_4))))) : (min((865626521), (var_8)))))));
        arr_7 [i_0] = ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((short) arr_0 [i_0])))));
    }
    var_10 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)0)) ? ((~(((/* implicit */int) var_2)))) : (((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
}

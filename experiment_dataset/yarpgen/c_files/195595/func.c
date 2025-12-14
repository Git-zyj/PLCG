/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195595
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_5 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_4 [i_0] [0U] [i_0 - 1]) : (((/* implicit */int) arr_3 [i_0]))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((unsigned char) ((int) (-(((/* implicit */int) arr_3 [i_0])))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) arr_0 [(unsigned short)2] [i_0])), (var_4)))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2] [i_0 + 1])))));
                arr_6 [i_0] [5U] = ((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_1]));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */int) (unsigned short)53705))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18330))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */int) arr_8 [i_2]))))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10)))))))));
        arr_10 [i_2] = ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_2]))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_7 [i_2]))))))));
        arr_11 [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [(_Bool)1])))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(0LL)))) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_7 [i_2]))))))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) arr_14 [i_3])))));
        var_15 ^= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (unsigned short)65298)) && (((/* implicit */_Bool) 1979011263)))), (((((/* implicit */_Bool) (unsigned char)98)) && (((/* implicit */_Bool) -8704112231189753886LL)))))), (((((/* implicit */_Bool) arr_14 [i_3])) && ((((_Bool)1) && (((/* implicit */_Bool) 1073999353))))))));
    }
    var_16 = ((unsigned short) var_7);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51690
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) min(((-(arr_1 [i_0]))), (((/* implicit */unsigned int) 1525594230))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((var_4) + (2147483647))) >> (((((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) (unsigned short)4501)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4493))))))) + (4529)))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_12))));
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (unsigned short)61034);
            var_22 = ((/* implicit */int) (unsigned short)31999);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), ((+(var_15)))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)4501))));
            arr_12 [i_0] [i_3] &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)61034))));
        }
        arr_13 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)1])) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61034)))))) : (((((/* implicit */_Bool) (unsigned short)61035)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned short)3688)))))) << (((/* implicit */int) ((((/* implicit */int) ((arr_9 [(short)22] [(short)22]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61848)))))) == (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)0))))))))));
    }
    var_25 = ((/* implicit */short) var_5);
}

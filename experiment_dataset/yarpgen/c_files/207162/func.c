/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207162
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
    var_13 &= ((/* implicit */short) 0U);
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (signed char)-84))));
        var_16 = ((((((/* implicit */int) (short)-11976)) % (((/* implicit */int) (short)-1)))) >> (((((/* implicit */int) (unsigned char)84)) - (62))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) ^ (764237073U)))), (min((((/* implicit */long long int) (short)16)), (3379142587114338177LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)26)) || (((/* implicit */_Bool) (short)0)))))));
        arr_4 [(unsigned char)7] = ((/* implicit */short) max((((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27))) <= (-5254233401487018816LL))))));
    }
}

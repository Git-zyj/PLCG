/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200587
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)196))));
        var_13 -= ((/* implicit */unsigned long long int) max((((short) (unsigned char)60)), ((short)17403)));
    }
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-63)), ((unsigned short)65518)));
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        for (short i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            {
                var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned short)50489)) : (7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) ^ (18192752430840728910ULL)))));
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned char)150))));
            }
        } 
    } 
}

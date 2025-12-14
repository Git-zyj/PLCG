/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38102
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? ((~(5535204632695862481ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)49424)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) + (((/* implicit */int) var_3))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) 477207465506527891LL);
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) arr_1 [i_2 - 1])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16113)) ? (((/* implicit */int) (unsigned short)49424)) : (((/* implicit */int) (unsigned short)65425)))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 + 3]) ? (arr_2 [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_1 [i_0 - 1]))))) : (((16590993504643780405ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))))))))));
    }
    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((arr_7 [i_3 - 2]) < (arr_7 [i_3 - 1])))) << (((max((((/* implicit */unsigned long long int) ((arr_7 [12ULL]) - (arr_8 [12U])))), (((((/* implicit */unsigned long long int) arr_7 [i_3 - 2])) % (5535204632695862486ULL))))) - (10239123436488513974ULL))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_7 [i_3 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) || (((/* implicit */_Bool) arr_7 [i_3 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 + 2])))))));
        var_20 = ((/* implicit */signed char) (~(3884878012U)));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_21 = ((/* implicit */long long int) arr_10 [i_4]);
        arr_13 [(unsigned short)13] &= ((/* implicit */unsigned int) (unsigned short)45459);
    }
    var_22 -= ((((/* implicit */_Bool) var_0)) ? (((((((((/* implicit */_Bool) var_0)) ? (var_2) : (var_2))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) var_11)));
}

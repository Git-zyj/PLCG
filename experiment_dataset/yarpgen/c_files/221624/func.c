/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221624
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (short)-7751)) : (((/* implicit */int) (unsigned short)12))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_1)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
        var_14 = ((/* implicit */int) max((var_14), (var_1)));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), ((+(((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) (unsigned short)17550)), (6923493117158740830ULL))) : (((/* implicit */unsigned long long int) var_1))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 7131418937459577282ULL)))) ? (((/* implicit */int) (unsigned short)41199)) : (((/* implicit */int) (unsigned short)41199))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 854412907U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) % (14213495189926231054ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27748))))) : ((+(18365547518749193277ULL)))));
            arr_10 [i_3] = ((((/* implicit */int) (unsigned short)24337)) ^ (((/* implicit */int) (unsigned char)5)));
        }
        var_19 -= ((/* implicit */unsigned long long int) max(((+(max((((/* implicit */int) (unsigned short)65535)), (-38927370))))), (((/* implicit */int) (unsigned short)19367))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((8192) <= (var_5))))))))))));
        arr_11 [i_2] |= ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (unsigned char)1)))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((short) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4))))))));
        arr_14 [i_4] = ((/* implicit */unsigned char) var_10);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_2))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2147481600U), (((/* implicit */unsigned int) (-(2147483647))))))) ? (67645734912ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)41199))))))))))));
    }
}

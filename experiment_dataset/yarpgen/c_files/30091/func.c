/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30091
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
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-29239)), (7302709758345531506ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((11144034315364020127ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))))) : (max((((/* implicit */unsigned long long int) var_13)), (11144034315364020113ULL))))), (((/* implicit */unsigned long long int) (unsigned char)123))));
    var_20 &= ((/* implicit */short) (((!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36752))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))))))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) var_7)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))), (max(((~(((/* implicit */int) var_0)))), (((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (92)))))))));
    var_22 = (!(((/* implicit */_Bool) ((unsigned long long int) 1690511794))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), ((+(((((/* implicit */_Bool) var_7)) ? (7302709758345531503ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36752))))) && (((/* implicit */_Bool) arr_4 [i_1]))))), (max((11144034315364020137ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) >= (7302709758345531502ULL))))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((-27), (((/* implicit */int) (short)(-32767 - 1))))))));
            }
        } 
    } 
}

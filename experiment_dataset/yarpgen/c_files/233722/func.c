/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233722
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 *= ((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5)))))) >> ((((+(((((/* implicit */int) (unsigned char)85)) % (((/* implicit */int) arr_3 [i_1])))))) - (77))));
                var_13 = ((/* implicit */short) ((min(((-(var_11))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)105))))))) != (((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_0])) : (var_11))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) (unsigned char)150)))), (var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62698)))))) ? (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (3474355107624526855LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) arr_10 [(unsigned char)12]))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)5889))))) * (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                var_15 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_11)) ? (arr_11 [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_12 [i_3 - 3])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26122)) ^ (((/* implicit */int) (unsigned short)46228))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_11))) == (((((/* implicit */_Bool) (unsigned char)164)) ? (var_8) : (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
}

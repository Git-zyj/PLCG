/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194894
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) -5035573304657236326LL);
                    arr_8 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-72)) != (((/* implicit */int) (signed char)-51)))) || (((((/* implicit */int) (unsigned short)51122)) <= (((/* implicit */int) (short)1816)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (short)-1816)) : (((/* implicit */int) (signed char)34)))) <= (((/* implicit */int) ((((/* implicit */int) (short)-1816)) >= (((/* implicit */int) (signed char)52)))))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)98)) <= (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (short)-1823)))))))) <= (((/* implicit */int) (unsigned short)18123)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((4802826499808485426ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1824)))))) >= (((((/* implicit */_Bool) 12294283112106638595ULL)) ? (((/* implicit */int) (signed char)-107)) : (423860077)))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1816)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (signed char)102))))) == (4003509493611602318ULL))))));
    var_18 = ((/* implicit */short) (unsigned char)0);
}

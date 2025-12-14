/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] |= ((/* implicit */signed char) max((((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) + (2147483647))) >> ((((~(((/* implicit */int) var_11)))) + (58))))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_8))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_13);
                arr_7 [i_0] = ((/* implicit */unsigned char) -711374192043357808LL);
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-6215158384587010277LL), (7563211621683430382LL)))) ? (min(((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)20991)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)18346)) : (((/* implicit */int) (unsigned char)250)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_12))))), (min(((unsigned short)47190), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) max(((short)24481), (((/* implicit */short) (signed char)5))))) ? ((~(1655266106))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_16 += ((/* implicit */unsigned long long int) 35747322042253312LL);
}

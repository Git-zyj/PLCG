/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190562
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) 1522268933)), (1561517514U))), (((/* implicit */unsigned int) ((unsigned char) 1907594469U)))))) ? (((((/* implicit */_Bool) max((1561517514U), (606958654U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 2628164545821409571LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3406))) : (var_3))))) : (var_3)));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) ((549755813887LL) <= (((/* implicit */long long int) 42923851U))))), ((((_Bool)1) ? (3373575750U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))))))) : (3373575750U))))));
    var_13 = ((/* implicit */short) ((var_0) & (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) ((unsigned short) 3373575732U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14875)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6858543711862645630ULL)) ? (17580391869682443844ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (((((/* implicit */_Bool) 4828740738300526535ULL)) ? (var_4) : (var_3)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) -4069794221979779244LL)) : (var_7)))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)41))))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) ((268435455) > (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) (unsigned char)39))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                }
            } 
        } 
    } 
}

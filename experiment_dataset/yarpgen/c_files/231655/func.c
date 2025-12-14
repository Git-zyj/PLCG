/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231655
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) (signed char)95);
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned short) ((signed char) ((int) var_1)))))));
                arr_6 [i_1] [12] = (+(8626397300902331016ULL));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_4))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) (~(((/* implicit */int) var_8))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (signed char)63)), (5305601654538497100ULL))))), (((((/* implicit */_Bool) (signed char)-2)) ? (1893231534) : (((/* implicit */int) (unsigned char)202)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) ((((/* implicit */_Bool) 13141142419171054516ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (13141142419171054510ULL)))));
}

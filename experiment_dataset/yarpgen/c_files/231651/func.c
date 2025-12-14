/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231651
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((long long int) var_7))))) ? ((-(((((/* implicit */_Bool) (unsigned short)45537)) ? (var_0) : (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) 470349457U);
                arr_5 [i_0] = ((/* implicit */_Bool) 15678170214079284325ULL);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) : (arr_0 [i_0] [10])))), (max((arr_3 [13] [i_0]), (((/* implicit */long long int) var_15)))))))));
                arr_7 [10ULL] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-91), (((/* implicit */signed char) (_Bool)1)))))) : ((+(arr_0 [11LL] [i_0])))))), (arr_3 [i_0] [i_0])));
                arr_8 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) < (var_7))))));
            }
        } 
    } 
}

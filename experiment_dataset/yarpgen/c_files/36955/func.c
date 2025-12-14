/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36955
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (var_0)))) ? (((((long long int) var_7)) + (((/* implicit */long long int) max((((/* implicit */int) var_9)), (1797914853)))))) : (((/* implicit */long long int) (~((~(var_12))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_6 [(unsigned char)1] [i_0] [i_0]);
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_0] [6LL]), (arr_4 [i_0] [6ULL])))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_2]))))), (max((-1797914886), (((/* implicit */int) (unsigned char)32)))))) : ((+(arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) <= (arr_6 [i_2] [i_4] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))) : (arr_4 [i_4] [i_1])))));
                                var_18 = arr_1 [i_0];
                                var_19 ^= ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_0]))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-8)) > (((/* implicit */int) (unsigned char)243))));
}

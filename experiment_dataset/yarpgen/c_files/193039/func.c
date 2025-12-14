/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193039
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
    var_12 *= ((/* implicit */signed char) (-(((/* implicit */int) (((+(((/* implicit */int) var_4)))) == (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))))) ? ((+(((/* implicit */int) arr_12 [i_1] [8ULL] [8ULL] [i_3])))) : (((/* implicit */int) var_1))));
                            var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned char)138)))));
                            arr_13 [1ULL] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_3] [(signed char)5] [i_1] [i_0]) ? (min((((/* implicit */unsigned long long int) 2886171853U)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_5)))))) : (((arr_9 [i_0] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_1])) : (((/* implicit */int) (unsigned short)31246))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) var_7)))))))));
                arr_14 [i_0] [i_0] = ((/* implicit */int) (-(var_0)));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max(((+(var_2))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))))))));
    var_17 += ((/* implicit */unsigned char) (~((~((~(var_11)))))));
}

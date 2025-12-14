/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195650
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) (~(939524096))))), ((~(((((/* implicit */_Bool) 783022983U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (var_9))))))))));
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) (+(var_1)))) == ((((((+(var_2))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~((~(var_2))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                    arr_9 [8LL] [i_1] = ((/* implicit */signed char) (-((+(arr_6 [i_0] [i_2 - 1])))));
                    arr_10 [i_0] [i_1] [(unsigned short)18] [17] = ((/* implicit */unsigned long long int) -2147483641);
                    arr_11 [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((var_8), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_6 [i_0] [(signed char)4])))))))));
                    var_14 = ((/* implicit */unsigned int) max((arr_2 [i_2 - 1]), (((/* implicit */signed char) ((_Bool) 4477986154030524289ULL)))));
                }
            } 
        } 
    } 
}

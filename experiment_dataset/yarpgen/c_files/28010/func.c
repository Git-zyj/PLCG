/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28010
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_13))))))) == (min((((((/* implicit */long long int) var_1)) & (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (unsigned short)52880)) : ((~(var_3)))))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))), (((/* implicit */long long int) var_12))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_12)))))), (max((arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 3]), (((/* implicit */unsigned long long int) ((short) var_16))))))))));
                            var_19 *= ((((min((var_5), (var_15))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52883)))))))) == (arr_2 [(unsigned char)3]));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_1]);
                arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_3 [i_1 - 1])), (480475629U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), (arr_6 [(_Bool)1] [i_1 + 3] [i_1 - 3])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32757))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30115
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
    var_17 = ((unsigned char) var_10);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((-2147483632) != (((/* implicit */int) (unsigned char)206)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [5LL] [i_0] = ((/* implicit */long long int) min((min((2146959360), (((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) var_11))));
                arr_6 [i_0] [(unsigned char)6] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)5010)))) << (((((3706676804650860348LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25474))))) - (19434LL)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned short)5010))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [5U]))) + (var_4)))));
                arr_7 [(_Bool)1] [i_1] [8LL] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_9))))) ^ (arr_1 [10])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_2]))));
        var_21 = ((/* implicit */long long int) (_Bool)0);
        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)17198)) & (((/* implicit */int) var_3)))) << (((((/* implicit */int) arr_3 [i_2 - 3] [i_2 + 1] [i_2])) + (123)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217225
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) 4748850195157163157LL)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((signed char) arr_1 [(signed char)2])))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_2 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) 4890435423119219668LL))), (((unsigned long long int) arr_0 [i_2]))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_2 [i_1]), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2])), (9816165628413019638ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 240574731U))) <= (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [5U])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521)))))))))));
            }
        } 
    } 
}

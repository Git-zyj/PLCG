/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21879
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_19 = min(((-(arr_1 [i_0]))), (max((3581611613U), (2434385250U))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((arr_2 [i_1]), (((/* implicit */int) var_3)))))) ? (min((1090420593648962517ULL), (arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1]))) : (max((((/* implicit */unsigned long long int) (~(arr_2 [i_0])))), (var_5))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) 4283801908U)) ? (11165408U) : (4283801908U))) & (var_8))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)-11530))))))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_13)) : (4283801908U))))))) >= (((/* implicit */int) (((-(var_2))) >= (max((var_10), (((/* implicit */unsigned long long int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            {
                var_23 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) 4282444257218499824LL)))))))) >= (((/* implicit */int) ((arr_8 [i_2] [i_3]) <= ((~(11165387U))))))));
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4283801925U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11165387U)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [3LL] [i_2])) >= (arr_9 [i_2] [i_2]))))) : (max((6442551487369390103ULL), (((/* implicit */unsigned long long int) 11165387U))))))));
            }
        } 
    } 
}

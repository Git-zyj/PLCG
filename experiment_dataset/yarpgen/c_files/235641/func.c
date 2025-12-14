/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235641
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
    var_12 ^= ((/* implicit */unsigned short) max((((min((((/* implicit */long long int) var_7)), (var_11))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)152)))))))), ((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)61636))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)797)), (2779765652540923781ULL)));
                var_14 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 29U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 78897351217870512ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)36))))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [(_Bool)1] [(_Bool)1])), (arr_4 [12LL] [i_0] [i_0])))) ? (arr_5 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0] [i_1] [i_0])))))));
                var_15 |= ((/* implicit */unsigned long long int) ((2170221631438721671LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_3] [i_2])))) ? (max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24761)) ? (((/* implicit */long long int) 1563923657)) : (arr_10 [(unsigned short)2])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3899))) + (3092699554U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [i_2] [i_3]))));
            }
        } 
    } 
}

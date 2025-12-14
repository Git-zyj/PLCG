/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232803
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7858948627548608679LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)100))) ? (((/* implicit */int) max((var_3), (var_3)))) : (((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_0 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((/* implicit */int) ((unsigned char) -5334868393873167676LL))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_6 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0])) + (2147483647))) << (((((((((/* implicit */_Bool) (signed char)9)) ? (arr_3 [(_Bool)1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)1)))) + (627073953))) - (5)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            {
                arr_12 [6LL] [(signed char)4] [i_3] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_3] [i_3] [i_3])))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5476625765008517184LL)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3]))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_8 [i_3])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((5719688203387241976LL), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_4]))))) : ((~(((/* implicit */int) (unsigned char)190)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    var_20 = arr_7 [i_4] [i_3];
                    var_21 = ((/* implicit */long long int) (-2147483647 - 1));
                }
            }
        } 
    } 
}

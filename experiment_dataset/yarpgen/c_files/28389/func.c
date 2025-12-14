/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28389
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
    var_12 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
    var_13 = ((/* implicit */unsigned short) (+(9223372036854775807LL)));
    var_14 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)236)) > (((/* implicit */int) (unsigned short)5373))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_4)), (arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_4))))) : (var_10)));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)15872), (((/* implicit */unsigned short) var_11))))) ? (arr_1 [i_0] [i_1]) : (var_7)));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)105))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10979)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-5))))) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) arr_4 [i_0] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (8104289087467816139LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7879)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_1))));
                            arr_14 [i_3] [i_0] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) -1295884909264415477LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}

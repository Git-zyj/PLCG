/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46693
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-35)) % (((/* implicit */int) (unsigned short)65535))));
    var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(var_6)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) (unsigned short)2251)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)64831), (((/* implicit */unsigned short) (signed char)-35))))) < (((((/* implicit */_Bool) (unsigned short)2260)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                var_14 = ((/* implicit */int) min((var_14), (min((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) 1336843319)) ? ((((-2147483647 - 1)) & (1336843303))) : (-1336843325)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_0 [i_2]))))) ? (arr_7 [i_3]) : (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_8)))))))));
                arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)18)) * (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}

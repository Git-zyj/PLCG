/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52654
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max(((~(10))), (min(((-2147483647 - 1)), (((/* implicit */int) (signed char)24))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) * (0LL))) < (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (signed char)122)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+((~((+(((/* implicit */int) (signed char)-18)))))))))));
    var_22 = ((/* implicit */_Bool) var_8);
    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? ((-(((long long int) var_0)))) : (((/* implicit */long long int) (~(((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (unsigned char)16)))))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_12)), ((signed char)-26)))) : (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)1)))))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1022977094)) ? (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109))))))) : (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (9223372036854775807LL)))));
                var_25 = ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) (-2147483647 - 1))) ^ (1339306644863708260LL))) + ((-(0LL)))))));
            }
        } 
    } 
}

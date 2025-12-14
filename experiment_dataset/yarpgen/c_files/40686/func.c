/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40686
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))))), (14343803287133181065ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14343803287133181063ULL)) ? (((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 12762082219131056223ULL)))))))));
                    var_11 -= ((/* implicit */unsigned long long int) 3679855349U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(_Bool)1] [i_1] [i_1] [3U] = ((/* implicit */unsigned char) (!(arr_12 [(_Bool)1] [i_1] [(_Bool)1])));
                                arr_15 [i_0] [i_2] [(signed char)15] [(signed char)2] [i_4] [i_1] = ((/* implicit */int) (!(((((((/* implicit */_Bool) 615111944U)) && (((/* implicit */_Bool) 12762082219131056250ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24961)) ? (((/* implicit */int) (short)2264)) : (((/* implicit */int) (unsigned short)4697)))))))));
                                var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((min((var_3), (((/* implicit */int) (unsigned char)173)))) + (2147483647))) << (((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_2])) - (1)))))) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_2])) : ((~(((/* implicit */int) ((unsigned short) arr_2 [i_2] [16])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) >= (((/* implicit */int) var_10)));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) ((short) var_5)))))));
}

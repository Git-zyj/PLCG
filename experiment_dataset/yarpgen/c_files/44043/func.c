/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44043
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
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [(signed char)15] = ((/* implicit */unsigned short) (short)-20191);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] |= max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_3 [(unsigned char)11] [i_1] [i_1])) : (var_2)))))), (arr_13 [i_4] [i_1 + 2] [i_1] [i_1] [i_1]));
                                var_14 = ((/* implicit */_Bool) min(((-(((/* implicit */int) max(((short)10859), (((/* implicit */short) (signed char)(-127 - 1)))))))), (max((arr_0 [i_0 - 2] [i_1]), (((((/* implicit */int) (short)-10860)) / (arr_0 [i_1 + 1] [i_4])))))));
                                var_15 -= ((/* implicit */_Bool) min((14971232721248963209ULL), (10915045799689936697ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (10915045799689936697ULL))))))) * ((~(var_11)))));
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 381718865U)) ? (4398046511100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10860)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207809
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [3LL] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (-((+(((-8064926187985377025LL) + (arr_6 [i_0 - 4] [i_1 + 2])))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) ((_Bool) 9610842066109740226ULL)))) | (((min((((/* implicit */unsigned long long int) (unsigned short)54210)), (2251250057871360ULL))) / (((/* implicit */unsigned long long int) 8064926187985377024LL))))));
                                arr_15 [i_0] [i_2] = ((/* implicit */unsigned char) min((((signed char) arr_3 [i_0 - 2] [i_1 - 2])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0 - 3] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((long long int) max(((signed char)95), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0] [i_1])) || (((/* implicit */_Bool) var_10)))))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3))))));
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) / (min((max((15042666100944019058ULL), (((/* implicit */unsigned long long int) -497668986)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (var_9))))))));
    var_19 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13))))))) < (var_12)));
}

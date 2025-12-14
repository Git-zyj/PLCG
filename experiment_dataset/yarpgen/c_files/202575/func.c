/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202575
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)3774)));
                            arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)119)), ((-((-(arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                            arr_12 [i_3] [i_3] [(unsigned short)8] [(unsigned short)8] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4283)) | (((/* implicit */int) (signed char)105))));
                            arr_13 [i_0] = ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) arr_2 [i_1] [i_2 - 3] [i_3])))) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-((+(5906599200973305319LL)))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) | (min((((((/* implicit */int) (signed char)43)) % (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)53))) < (9223372036854775783LL))))))));
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((+(9223372036854775794LL))), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)510)) - (((/* implicit */int) (signed char)-51))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))))) ? ((((((~(1843649259))) + (2147483647))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (31))))) : (((((63488) | (((/* implicit */int) var_0)))) << (((((/* implicit */int) var_4)) - (23785)))))));
}

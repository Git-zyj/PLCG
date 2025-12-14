/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29792
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
    var_15 = ((/* implicit */unsigned char) var_6);
    var_16 = (+(var_8));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_17 = var_14;
                    arr_8 [i_0] [i_2] = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_7 [i_0])))) ? (141863388262170624LL) : (((/* implicit */long long int) -1621424271)))) <= (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (unsigned short)8184))))))));
                }
                arr_9 [i_0] [i_0] = ((/* implicit */int) ((long long int) ((short) (signed char)0)));
                arr_10 [i_1] |= ((/* implicit */short) var_13);
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (unsigned short)59798)), (((unsigned long long int) 10293890190065756822ULL)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)108)) == (((/* implicit */int) (unsigned short)8179)))) ? (((((((/* implicit */int) (signed char)-19)) + (2147483647))) >> (((var_4) - (244171137U))))) : (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_18 = (+(((min((((/* implicit */int) (signed char)-48)), (var_9))) / (var_13))));
}

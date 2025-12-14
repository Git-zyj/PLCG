/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197642
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((3278607761578735037LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17300)) + (((/* implicit */int) (short)(-32767 - 1)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 2]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_11 [i_2 - 1] [i_3] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-446165356014736737LL)))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) -3278607761578735013LL);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1 - 2]))));
        var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32743))));
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_24 -= ((/* implicit */short) -5885519585387799833LL);
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) ((var_18) | (var_19))))), (max((((/* implicit */long long int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))))), (max((-446165356014736732LL), (((/* implicit */long long int) 1039765002U))))))));
    }
    var_26 |= ((/* implicit */int) (!(((/* implicit */_Bool) 35184372088831ULL))));
}

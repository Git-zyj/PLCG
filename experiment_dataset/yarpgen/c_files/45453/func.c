/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45453
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
    var_12 *= ((/* implicit */unsigned short) (~(var_3)));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) (_Bool)1)) << ((+(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) max(((unsigned char)57), (((/* implicit */unsigned char) (signed char)-20))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 235317545)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = arr_6 [i_0] [i_1] [i_2];
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_9 [i_1] [i_1] [i_1] [9LL]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        var_16 = min((((/* implicit */int) ((_Bool) 3233874239U))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14620))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))))) : (((/* implicit */int) min(((unsigned char)12), ((unsigned char)244)))))));
        /* LoopSeq 1 */
        for (short i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3196))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) : (arr_14 [i_3] [i_4] [i_3]))))), (((/* implicit */long long int) arr_13 [i_3]))));
            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
        }
        arr_17 [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)19)), (((unsigned long long int) (unsigned char)36))));
        var_19 = ((/* implicit */signed char) 4294967281U);
        var_20 &= ((/* implicit */_Bool) -8966414811099975059LL);
    }
    for (long long int i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        arr_22 [i_5 - 1] [i_5 - 1] = ((/* implicit */int) (unsigned char)117);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5] [(_Bool)1])) << (((((/* implicit */int) arr_20 [i_5] [i_5 + 1])) - (53)))));
    }
    var_22 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) ((unsigned char) (unsigned short)39060)))), (((min((9223372036854775807LL), (((/* implicit */long long int) var_5)))) << (((((/* implicit */int) min(((unsigned short)19127), (((/* implicit */unsigned short) (short)-16209))))) - (19099)))))));
}

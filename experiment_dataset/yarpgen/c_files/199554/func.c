/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199554
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (short)-31681))));
        arr_3 [i_0] [(unsigned char)2] = ((/* implicit */signed char) var_8);
        arr_4 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((short) (unsigned char)117)))))) : (min((((/* implicit */unsigned long long int) (unsigned char)117)), ((+(18446744073709551615ULL))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_16 -= ((/* implicit */long long int) var_0);
            arr_8 [i_1] [i_0] = ((/* implicit */signed char) (-(var_1)));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */unsigned long long int) var_4);
            var_17 = ((/* implicit */signed char) min((((((/* implicit */int) min(((short)3031), (((/* implicit */short) (unsigned char)138))))) / (((/* implicit */int) (short)-28239)))), (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 2; i_4 < 12; i_4 += 3) 
            {
                for (short i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_20 [i_0] [9U] [i_4] [i_5] = ((/* implicit */unsigned int) var_2);
                        arr_21 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) var_7);
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)78)), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60791)) + (((/* implicit */int) (unsigned short)20))))), (3734094636U))))))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_20 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (+(var_11)))))), ((!(((/* implicit */_Bool) max(((short)(-32767 - 1)), (arr_24 [i_6]))))))));
        var_21 = ((/* implicit */unsigned long long int) ((1879048192) ^ (((/* implicit */int) (signed char)-48))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)139)), (-1716992277)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) * (15U)))))) ? (min((min((((/* implicit */long long int) var_0)), (var_8))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (var_5))))));
    var_23 = ((/* implicit */signed char) (unsigned char)165);
    var_24 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (+((-2147483647 - 1))))), (min((((/* implicit */long long int) (unsigned char)142)), (-9223372036854775786LL))))) > (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_7)), (var_1))))))));
    var_25 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) (short)31)), (18446744073709551615ULL))));
}

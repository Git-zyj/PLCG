/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217270
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
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)-1))) % (((int) (~(var_6))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_17 -= ((int) ((unsigned short) (signed char)85));
        var_18 = ((/* implicit */short) max((min(((+(var_8))), (((/* implicit */int) var_3)))), (1639641290)));
        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */int) (unsigned short)54305)) / (((/* implicit */int) ((unsigned char) var_11))))) : (((/* implicit */int) var_0))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) / ((~(((/* implicit */int) max(((unsigned short)54305), (((/* implicit */unsigned short) arr_0 [i_0]))))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned char) 1065353216);
        var_22 -= var_2;
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) max(((short)-737), (((/* implicit */short) (_Bool)1))))))))));
        arr_4 [i_1] = ((/* implicit */_Bool) (((-(-16777216))) / ((-2147483647 - 1))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_24 -= var_15;
                    var_25 *= ((unsigned char) min((((/* implicit */unsigned char) arr_0 [i_1 + 1])), (var_1)));
                }
            } 
        } 
    }
    var_26 += ((/* implicit */short) ((unsigned long long int) var_5));
}

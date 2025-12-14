/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29603
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (7243791243798555661LL)))))) <= (((/* implicit */int) (((+(var_4))) > (((/* implicit */long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    var_13 &= ((/* implicit */unsigned char) (((+((~(var_11))))) - ((+((+(((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 7243791243798555638LL)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (((!(((/* implicit */_Bool) -7243791243798555662LL)))) && (((/* implicit */_Bool) (~(733513704))))))) - ((((~(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 733513708)))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */int) (short)31)) < (((/* implicit */int) arr_3 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)2])) & (((/* implicit */int) (_Bool)1)))))))))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((((+(-1LL))) % (((/* implicit */long long int) ((-733513704) / (((/* implicit */int) var_1))))))))))));
            }
        } 
    } 
}

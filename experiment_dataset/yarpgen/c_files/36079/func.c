/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36079
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2))))))) % (var_5)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((6U) > (4294967290U)))) != (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) (unsigned char)0))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((arr_4 [19]), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) >= ((~(var_17))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1])))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((_Bool) (~(((arr_9 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))))));
                        var_24 = ((/* implicit */short) (~(1358972751U)));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) (-2147483647 - 1));
}

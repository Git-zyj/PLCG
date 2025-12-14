/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42134
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) 6804374567748278159LL);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))) <= (6804374567748278156LL)));
            var_18 *= ((/* implicit */unsigned char) -6876624727604415446LL);
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_0] [i_4] [3] [i_2] [i_0] [3] = ((/* implicit */unsigned char) arr_15 [i_0] [i_4] [i_3] [i_4] [i_4] [i_0 + 1] [i_4]);
                            var_19 = ((/* implicit */_Bool) (-(557817179158731160LL)));
                            var_20 = ((/* implicit */long long int) ((signed char) -6804374567748278160LL));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -6804374567748278159LL))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((_Bool) 2147483647));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_7] [i_7] [13U] [i_9] = ((/* implicit */unsigned long long int) (signed char)-89);
                        arr_30 [i_6] [i_7] [i_6] [i_6] [i_6] = (-(((/* implicit */int) arr_25 [i_7] [i_7] [i_7 + 1])));
                        arr_31 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */int) (!(((((/* implicit */int) arr_5 [i_7 + 1])) > (((/* implicit */int) arr_5 [i_7 + 1]))))));
                    }
                } 
            } 
        } 
        arr_32 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
    }
    var_23 = ((/* implicit */_Bool) var_3);
    var_24 = ((/* implicit */_Bool) var_6);
}

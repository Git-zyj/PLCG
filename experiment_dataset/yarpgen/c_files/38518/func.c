/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38518
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
    var_15 = ((/* implicit */_Bool) (-((+((+(var_9)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3])))))))));
                        arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28641))))))))));
                        var_17 = ((/* implicit */long long int) (+((-((+(247249984U)))))));
                        var_18 = (+((-((+(arr_5 [(_Bool)1] [i_1] [(_Bool)1]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (-((+((+(arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 *= ((/* implicit */short) (+((~((~(-7084602195043318650LL)))))));
        arr_15 [i_4] [7] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) arr_11 [i_4] [i_4]))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            {
                arr_22 [i_5] [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                var_22 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_1))))))));
            }
        } 
    } 
}

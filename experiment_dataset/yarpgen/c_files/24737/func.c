/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24737
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
    var_11 = ((/* implicit */unsigned short) (+((+((~(((/* implicit */int) (signed char)-92))))))));
    var_12 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */short) (-((~((~(var_1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) (+((+((~(9177824538521879300LL)))))));
                            var_15 = (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                            var_16 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2)))))))));
                        }
                        arr_16 [i_1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
                        arr_17 [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(arr_15 [i_0] [i_2] [i_0] [i_0] [i_0]))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_21 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_8)))))))));
                        var_17 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (~(9774570827268992342ULL))))))));
                        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_20 [i_0] [i_0] [(unsigned char)3] [i_2] [i_0] [i_0])))))))));
                        arr_22 [(unsigned short)2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(6571605129850572910ULL)))))))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), ((~((-((-(var_6)))))))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) (+((-((-(arr_18 [i_0] [9LL] [i_0] [i_0] [i_0] [i_0])))))));
                    arr_26 [i_0] [i_1] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_1] [i_6])))))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-95))))))))))));
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((-((+(((/* implicit */int) var_10)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~((~((~(var_1)))))));
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
}

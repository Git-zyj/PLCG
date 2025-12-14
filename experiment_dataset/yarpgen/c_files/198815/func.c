/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198815
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [1ULL] [i_1] = ((/* implicit */int) var_3);
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) var_6));
                    var_11 -= ((/* implicit */signed char) (~(2114557607U)));
                }
            } 
        } 
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((/* implicit */int) ((unsigned short) 2114557589U))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((unsigned int) var_2));
                    arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_7);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_14 &= ((/* implicit */int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) var_4))))))));
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_6)), ((-(max((2180409685U), (2180409699U)))))));
                                arr_25 [i_3] [i_4] [i_4] [i_5] [i_6] [8ULL] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) max((((/* implicit */long long int) var_0)), (var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 2114557589U)))));
        var_17 = ((/* implicit */long long int) min((var_17), (var_5)));
    }
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */int) ((long long int) min((((unsigned char) var_8)), (((/* implicit */unsigned char) ((_Bool) var_8))))));
        var_18 = ((/* implicit */long long int) ((unsigned char) (~(var_9))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) max((var_5), (((/* implicit */long long int) var_3)))))))))));
}

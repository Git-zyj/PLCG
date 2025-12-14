/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30866
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)-4666)))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1254854452) | ((-(-1254854452)))))) ? ((((-(1254854452))) | (((((/* implicit */int) (unsigned short)65528)) % (1254854452))))) : (((((/* implicit */_Bool) (+(1254664213)))) ? (((((/* implicit */_Bool) 127U)) ? (730998652) : (((/* implicit */int) (short)-9642)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)65528))))))));
                    var_16 = ((/* implicit */unsigned long long int) (+(((long long int) (unsigned short)65533))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) ((unsigned char) min(((unsigned short)65511), (((/* implicit */unsigned short) (_Bool)1)))))))));
    var_18 |= ((/* implicit */short) var_12);
}

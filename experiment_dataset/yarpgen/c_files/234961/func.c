/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234961
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)53497)))) : (((/* implicit */int) min(((unsigned char)28), ((unsigned char)228))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned char) ((1024832452) / (((/* implicit */int) (unsigned char)23))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */int) (short)-32765)) + (((/* implicit */int) (short)0)))) != ((+(((/* implicit */int) (unsigned short)0))))));
                var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -5373808201826331888LL)) || (((/* implicit */_Bool) (unsigned short)9527)))));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) -1);
    var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) ((((long long int) var_9)) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}

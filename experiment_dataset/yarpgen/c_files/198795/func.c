/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198795
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
    var_15 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)24142)) && (((/* implicit */_Bool) (unsigned short)65535)))) || (((/* implicit */_Bool) ((unsigned short) (unsigned short)60103))))) || (((/* implicit */_Bool) ((long long int) ((long long int) (unsigned short)28857))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((min((var_5), (((/* implicit */long long int) (unsigned short)28872)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_2])))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((-4873050605973413732LL) & (var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 7177783309590931031LL)) && (((/* implicit */_Bool) (unsigned char)0))))) <= (((/* implicit */int) ((-3859706497152339798LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= ((~(9223372036854775797LL))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28857)) ^ (((/* implicit */int) (unsigned char)2))))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : ((~(((/* implicit */int) (unsigned char)97)))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(var_6)))))) && (((/* implicit */_Bool) var_14)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5422
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [8] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [(signed char)3] [(signed char)3]), (arr_1 [i_0] [i_1])))))))));
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) max((((arr_2 [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24181)) ? (((/* implicit */int) (_Bool)1)) : ((~(-1899284004)))))) : (min((max((var_2), (arr_0 [i_1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))))))))));
                    var_12 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((signed char)117), ((signed char)117)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-7415)), ((unsigned short)65535)))))), (((/* implicit */int) (unsigned short)37656))));
                    arr_8 [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (arr_5 [i_0] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_4), ((_Bool)1))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (short)18417)) : (((/* implicit */int) var_1))))), (min((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)14))))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_6)))))))));
}

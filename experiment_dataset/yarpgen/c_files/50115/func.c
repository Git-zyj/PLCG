/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50115
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1613209909U)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (unsigned short)65524))));
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (+(var_10)))))));
    var_22 = ((/* implicit */long long int) var_4);
    var_23 = ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) 2621483828U)) : (-2552441790040067040LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_2 [i_0] [i_1] [i_0])))))))) : ((((!(((/* implicit */_Bool) arr_2 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3])))) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1] [i_0])), (arr_2 [10ULL] [10ULL] [10ULL])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_1]))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_1])))))));
            }
        } 
    } 
}

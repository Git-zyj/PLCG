/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26284
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
    var_19 = ((/* implicit */unsigned short) ((signed char) ((var_2) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 &= ((/* implicit */long long int) (-((-(((/* implicit */int) ((arr_2 [i_0]) >= (1275840901397315459LL))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) ((unsigned int) (short)15654))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)52699))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52699)) ? (((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) ((signed char) var_3))))) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6711286745724126202LL)) ? (((/* implicit */int) ((_Bool) arr_8 [i_1]))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) ((short) -6826557561828904600LL))) : (((/* implicit */int) arr_7 [i_1])))))))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) -4917644444322559757LL);
                arr_12 [i_2] = ((/* implicit */unsigned short) arr_6 [6U] [i_1 - 1]);
                arr_13 [13ULL] [13ULL] [i_2] = ((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1 - 1]);
                var_24 += ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (short)-15666))))));
            }
        } 
    } 
}

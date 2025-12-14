/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217709
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
    var_10 = ((/* implicit */unsigned short) (((-(var_0))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)28437))) : (((/* implicit */int) min(((unsigned short)35236), (var_3)))))))));
    var_11 = ((/* implicit */unsigned short) (unsigned char)171);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    var_12 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_3 [i_0])))));
                    arr_8 [i_0] [i_0] [i_2] [(unsigned short)8] = ((/* implicit */unsigned char) 96ULL);
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned char)172)), (((unsigned long long int) var_6)))) == (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))) : (var_7)))));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)8346)), ((+(((/* implicit */int) arr_3 [i_1]))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [(unsigned short)13])))))) || (((/* implicit */_Bool) arr_3 [i_1]))));
                }
                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) 6311755508119011994ULL)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned char)186)))) : (((/* implicit */int) ((unsigned char) min((var_8), ((unsigned char)94)))))));
            }
        } 
    } 
}

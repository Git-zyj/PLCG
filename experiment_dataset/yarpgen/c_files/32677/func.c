/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32677
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_11)), (var_18)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_21 = (-(arr_6 [10U] [i_0] [i_0] [i_0]));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_0] [i_0] [i_3])));
                        var_23 &= ((/* implicit */unsigned char) (~(((var_7) ^ (var_7)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (arr_5 [i_1] [i_2]))) ^ (((((/* implicit */_Bool) 8832971670624223868ULL)) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) (unsigned short)33118)) >> (((97731543U) - (97731542U))))))))))));
                        var_25 += ((/* implicit */unsigned int) ((var_11) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)33118)))) : (((((/* implicit */_Bool) (unsigned short)234)) ? ((-(((/* implicit */int) arr_2 [i_2])))) : ((+(((/* implicit */int) var_3))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_0] [6]);
                        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_13 [(signed char)6] [i_1] [i_2])))) ? ((~(((/* implicit */int) (unsigned short)33125)))) : (((/* implicit */int) (unsigned short)22258))));
                    }
                }
                var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)33112)) - (33106)))))))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)33118))))) & ((((_Bool)1) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                var_30 = ((/* implicit */unsigned short) arr_3 [(_Bool)1] [i_1] [i_0]);
            }
        } 
    } 
}

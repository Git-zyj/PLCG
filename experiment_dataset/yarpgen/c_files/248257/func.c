/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248257
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */int) var_9)), (var_6))))))));
    var_14 = ((/* implicit */_Bool) 4294967295U);
    var_15 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) 4294967278U)))))), (max((min((((/* implicit */unsigned int) var_12)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_8)))))))));
    var_16 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (7326360900502951257LL)));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) min(((+(max((((/* implicit */long long int) arr_1 [i_0])), (8191LL))))), (((/* implicit */long long int) arr_3 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_7 [i_3] [i_3] [i_3]);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1032001100) : (arr_10 [i_0])))) ? (3028418576U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))))));
                                var_21 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                                arr_15 [i_2] [i_3] = ((/* implicit */long long int) arr_7 [i_1 + 3] [i_2] [i_4]);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_10 [i_0])))), (var_5)))) ? (arr_4 [(unsigned char)18] [i_1 - 2] [i_1 - 2]) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5]))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_6);
                        var_23 = ((/* implicit */int) ((unsigned long long int) min((arr_7 [i_1 - 1] [i_1] [i_1 + 2]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 2]))));
                    }
                }
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_5)))))) ? (min((((/* implicit */unsigned int) arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_0])), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (arr_6 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
}

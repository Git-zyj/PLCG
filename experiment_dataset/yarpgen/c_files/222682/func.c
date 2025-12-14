/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222682
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_6)))) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) + (2147483647))) << ((((((-(((/* implicit */int) arr_2 [i_0])))) + (95))) - (5)))));
                var_10 -= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), ((unsigned char)238))))) > (((((/* implicit */_Bool) 535822336)) ? (((/* implicit */unsigned long long int) -545675830)) : (857754998108148970ULL))))));
                var_11 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((unsigned int) (unsigned short)3453)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_3] [i_3])))))) ? (((((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) & ((~(((/* implicit */int) arr_18 [i_6])))))) : (((/* implicit */int) var_9))));
                                var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_8 [i_4 + 1] [i_3] [i_2 - 1]), (arr_8 [i_4 + 2] [i_3] [i_2 + 1]))))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_3] [i_5] [i_6])) >= (((/* implicit */int) arr_6 [(signed char)10]))))))))) < (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_6])) ? (((((/* implicit */_Bool) var_8)) ? (arr_7 [16]) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(_Bool)1] [i_3] [i_4] [i_5] [i_6])))))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_2] [(unsigned short)3] = ((/* implicit */unsigned short) ((signed char) arr_14 [i_2] [i_2] [i_4 + 1] [i_4 + 3] [i_3] [(unsigned char)5]));
                    arr_23 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15579)) ? (857754998108148966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16563)))))) ? (min((((/* implicit */int) (unsigned char)135)), (-1137636163))) : (((/* implicit */int) ((unsigned short) arr_19 [i_2] [i_3] [i_4 + 2] [i_2 - 1] [i_3])))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_10 [i_2] [i_2] [8ULL] [i_4]))));
                    var_16 = ((/* implicit */long long int) max((13473544707559112233ULL), (((/* implicit */unsigned long long int) (unsigned short)19510))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-680961575) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62083))) <= (17588989075601402645ULL))))))) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)69)))))));
    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_3))))))));
}

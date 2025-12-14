/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28888
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
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 = ((/* implicit */short) var_11);
    var_17 = ((/* implicit */unsigned char) ((int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_13)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 + 2] [12U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)8])) ? (((/* implicit */int) arr_2 [(unsigned char)6])) : (((/* implicit */int) arr_2 [(_Bool)1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))), (((unsigned int) var_8)))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [22ULL])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_5 [i_0] [i_4 - 2])))), (arr_10 [i_0] [i_4 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2] [i_3] [(unsigned char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [i_0])))))) : (((132225645U) >> (((1146338219U) - (1146338195U)))))))));
                                arr_17 [i_4 + 1] [3] [i_0] [3LL] [i_0] [3] [3] = ((/* implicit */unsigned short) (~(((int) arr_3 [i_1 + 1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                    arr_18 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (0U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27918)) ? (2954825984U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) : (max((arr_23 [i_6] [i_6] [i_2]), (((/* implicit */long long int) arr_21 [i_0] [i_5] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) -8885389100734534422LL))) : (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_21 [i_5 - 1] [i_1] [i_2] [i_0])), (3775310461U))))))));
                                arr_25 [i_0] [i_0] [14U] [i_0 + 1] [i_0] = ((/* implicit */short) (~(min((((/* implicit */long long int) arr_2 [20])), (var_6)))));
                                arr_26 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14761))) >= (270485349U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) (short)-27918)), (270485356U)))))));
}

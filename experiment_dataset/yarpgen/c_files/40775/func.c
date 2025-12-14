/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40775
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
    var_15 = min((((((/* implicit */_Bool) min((var_3), ((short)-21637)))) ? (min((((/* implicit */long long int) var_8)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) | (var_1)))))), (var_4));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)10] [i_1]))))), (var_8)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_4 - 1]), (((/* implicit */int) arr_7 [i_1] [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((4159036524U), (((/* implicit */unsigned int) (signed char)54))))));
                                arr_13 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)63499)) : (-1733786684))))))) <= (((((/* implicit */_Bool) (signed char)-95)) ? (3088611027U) : (2032252081U)))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_4])) < (((/* implicit */int) arr_8 [i_4 - 2] [i_4 + 1] [(unsigned short)1] [i_4 + 1] [i_4 - 1] [i_4])))))) != (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (min((16U), (1253550509U))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)45)) != (((/* implicit */int) (unsigned char)255))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(signed char)12] [i_1] [i_2])) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [(unsigned short)5] [i_1] [i_2]))) & (((/* implicit */long long int) arr_1 [i_4 - 2]))));
                            }
                        } 
                    } 
                } 
                arr_14 [(signed char)10] [(signed char)10] &= ((/* implicit */long long int) ((arr_1 [(signed char)12]) | ((-(((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */int) (unsigned char)151)) < (((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))));
                                arr_23 [i_1] [i_6] [i_1] = ((/* implicit */int) var_1);
                                var_22 = ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                } 
                arr_24 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [8U] [i_1] [i_1])) : (((/* implicit */int) var_6))))) % (min((var_13), (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_0])))))) > (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)6985))))), (min((((/* implicit */unsigned int) var_8)), (arr_17 [i_0] [i_1] [(signed char)4]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min(((unsigned short)63409), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_8)) > (min((6383364853822958195ULL), (((/* implicit */unsigned long long int) var_3)))))))));
    var_24 = var_13;
}

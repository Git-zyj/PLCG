/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233922
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))) ? (((((/* implicit */int) var_0)) ^ (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [10ULL] [i_1] [(unsigned char)11])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */short) (unsigned char)102))))) : (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_2 [i_3]))))))));
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((17364932192260268707ULL), (((/* implicit */unsigned long long int) (short)-22056))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_3] [i_0] [i_0] [15ULL])) ? (arr_9 [i_2]) : (((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) var_4))))))) : (arr_1 [i_0] [i_0])));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_7 [i_0] [i_1] [(_Bool)1] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((short) var_0))) ? (max((((/* implicit */unsigned int) arr_2 [i_3])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0 + 1] [i_0 + 1] [i_0]), (arr_8 [i_0 - 1] [i_0 + 1] [i_1])))) ? ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) 6836881509386002776ULL)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1]))))));
                            arr_14 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1106892981U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (max((1106892981U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) ? (((((/* implicit */_Bool) max((18081185217614757071ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (var_6)))) : ((((_Bool)0) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-127)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_11)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_13)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_11))) ? (((/* implicit */long long int) (+(var_11)))) : (var_14)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+(max((((arr_4 [i_4] [i_4] [i_4]) << (((arr_4 [i_4] [i_4] [i_5]) - (6830190117107891844ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
                arr_20 [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(18081185217614757071ULL)))) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) min(((unsigned char)139), (((unsigned char) (unsigned char)200)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_3))));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */short) 1106892981U);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)219)), (3188074308U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)167)))))))));
}

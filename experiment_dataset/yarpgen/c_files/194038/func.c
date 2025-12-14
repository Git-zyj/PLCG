/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194038
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [(_Bool)1] = ((/* implicit */long long int) (~(var_3)));
                                arr_14 [i_0] = (~((-(((/* implicit */int) max(((_Bool)1), (arr_6 [i_0] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_7] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)32764))))))) + (var_6)));
                                var_11 |= ((/* implicit */unsigned char) min(((~((-(arr_10 [i_0] [i_1] [(short)14] [i_6] [i_7]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)10] [i_1] [i_5] [i_6] [(_Bool)1])) ? (var_6) : (var_8)))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(max((var_8), (((/* implicit */long long int) (short)32734))))))), (0ULL)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (short i_8 = 4; i_8 < 15; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_10 = 3; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned short i_11 = 4; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((-10LL) + (9223372036854775807LL))) << (((arr_25 [i_8 - 3]) - (17414757077147485628ULL)))))), (((unsigned long long int) (~(((/* implicit */int) arr_36 [0ULL] [i_11 - 2] [(unsigned char)10] [i_11])))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)24)), ((~(((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) (unsigned short)61576)) <= (((/* implicit */int) arr_28 [i_10] [i_11])))) ? ((~(var_6))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_33 [(_Bool)1] [i_10] [i_9] [i_8 - 3])), ((short)-3787))))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_26 [i_9])), ((+(((/* implicit */int) (unsigned char)250)))))))));
                            arr_37 [i_8] [i_11] = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_8)) : (16872211315330906856ULL))) | (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32762)) ? (var_2) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((_Bool)1), (var_7))))))));
                            var_16 = ((/* implicit */short) min((var_16), (max((arr_34 [i_11 - 1] [i_10] [i_9] [i_9] [(unsigned short)6] [(unsigned short)6]), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9]))) != (var_5))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [0LL] [i_9] [i_9] [7ULL]))) > (1090170633209661970ULL))))))))));
                            var_17 = ((/* implicit */unsigned long long int) (+(min((var_8), (min((var_10), (var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_18 = ((_Bool) arr_25 [i_8]);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_7))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_30 [i_8])) == (1514373960)))))) : (((/* implicit */int) (short)32759))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_21 -= min(((~(257698037760ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))));
                            var_22 = (~(var_5));
                            var_23 = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}

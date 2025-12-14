/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224635
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
    var_17 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_15)), ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -5732755532340295267LL)) : (var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 5732755532340295244LL)) % (3230507764698514219ULL)));
                            var_18 -= ((/* implicit */_Bool) var_2);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)38)) <= (var_13))))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) max((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_7)))), (arr_7 [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_5] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((var_2) % (((/* implicit */int) max((var_1), (((/* implicit */signed char) ((var_13) >= (((/* implicit */int) var_9))))))))));
                            arr_19 [i_5] [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((+(3230507764698514234ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (3230507764698514240ULL)));
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) & (var_10))) >= (max((((/* implicit */long long int) var_8)), (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))))))) >= (5732755532340295276LL)));
                        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_12)))) ? (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) : (((unsigned int) -1644197577)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1 - 1] [i_1])))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 8702340771922824585ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (3230507764698514206ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_9))))))))));
                    }
                    arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_16)))) ? (((int) ((unsigned int) (unsigned short)65522))) : (-1813125028)));
                    arr_21 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (-2066759401)))) || (((/* implicit */_Bool) ((1813125035) & (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(var_6))) | (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */short) var_11))))))))), (((((/* implicit */_Bool) var_3)) ? (max((11820688587808852537ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1813125041)) ? (var_6) : (((/* implicit */long long int) -1813125035)))))))));
}

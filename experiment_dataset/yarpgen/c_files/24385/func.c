/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24385
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (signed char)-113)))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_10), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))) <= (2793219106U))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_5)))) ? (13990217426685773924ULL) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        var_17 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned int) (signed char)118))) ? (((/* implicit */int) ((signed char) (unsigned short)4875))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [20]) : (((/* implicit */int) var_14))))))));
        var_18 = ((/* implicit */long long int) var_0);
        var_19 = ((/* implicit */unsigned long long int) 1501748184U);
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_20 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 3] [i_2 - 3])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2])))))), (((unsigned long long int) arr_13 [i_2 - 1])));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(1501748180U))))));
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) -1392050912)) : (var_0)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((-3147490047983163894LL), (((/* implicit */long long int) 2793219096U)))) * (((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_1)))))) ? ((((!(((/* implicit */_Bool) 2793219138U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || ((_Bool)0))))) : (arr_18 [i_2] [i_2 - 3] [i_3 - 1] [i_6] [i_2] [i_6] [i_3 - 1]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_3)))))))));
                            var_24 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) ((int) 0U))))));
                            arr_19 [i_2] [(short)10] [i_5] = ((/* implicit */unsigned short) max((2793219109U), (1423434370U)));
                            arr_20 [i_2 - 2] [i_2 - 2] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_25 += ((/* implicit */unsigned long long int) 2162311011U);
                            arr_23 [i_2] [i_2] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_4) ? (-1510985197) : (((/* implicit */int) (unsigned char)88))))) & (((var_12) ^ (var_1)))))) ? (((min((var_9), (((/* implicit */long long int) arr_17 [3LL] [3LL] [(_Bool)1] [9ULL] [i_7] [i_7] [19])))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (short)-32747))))) ^ ((~(var_1)))))));
                            arr_24 [i_2 + 1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 3] [i_2 - 1] [i_2 - 3] [i_7]))) - (2793219088U))))));
                            arr_25 [i_2 - 2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_3 + 1] [i_5])) | (1392050905)))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_3 - 2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                        }
                        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) 1392050891))))))))));
                    }
                } 
            } 
        } 
    }
    var_28 &= ((/* implicit */unsigned int) var_12);
    var_29 = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) var_13)))));
    var_30 = ((/* implicit */int) ((((769139967892629884ULL) / (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) var_5))));
}

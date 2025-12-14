/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5413
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
    var_16 ^= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (max((((/* implicit */unsigned long long int) var_1)), (7881299347898368ULL))))));
    var_17 ^= ((unsigned long long int) var_14);
    var_18 = ((/* implicit */short) var_6);
    var_19 -= ((/* implicit */unsigned int) (~(((unsigned long long int) 2147483633))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] |= (-((-(((/* implicit */int) var_10)))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned char) (+(max((1631762376), (((/* implicit */int) (_Bool)0))))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(7881299347898363ULL))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] [i_4] = (-(18438862774361653225ULL));
                                var_22 = min((((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_7 [i_0])))))), (((((/* implicit */_Bool) 1165545974)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (4294967294U))));
                                arr_16 [i_4] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (7881299347898363ULL) : (18438862774361653267ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (7881299347898385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19864))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))))));
                            }
                            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                            {
                                arr_20 [i_0] [i_1] [(signed char)2] [i_2] [i_1] [(unsigned char)4] [12U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-132445793))))));
                                arr_21 [i_0] [i_1] [i_1] [14] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned short) arr_18 [i_1] [i_1] [i_1]));
                                arr_22 [i_0] [i_1] [(unsigned short)0] [i_3] [i_5] = ((/* implicit */short) (((_Bool)1) ? (-132445806) : (-132445793)));
                                var_23 ^= ((/* implicit */unsigned short) 1335839181U);
                            }
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((arr_6 [i_1]), (arr_17 [i_0] [8ULL] [i_1] [(signed char)12] [i_1] [i_3] [i_3])));
                        }
                    } 
                } 
                var_24 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))));
            }
        } 
    } 
}

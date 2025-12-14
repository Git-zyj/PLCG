/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38853
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
    var_10 = ((/* implicit */unsigned int) (((~(var_3))) ^ (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 10366783186209599853ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (min((-2100024926), (2147483620)))))));
    var_11 -= ((/* implicit */long long int) max((((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)0)))))), ((((_Bool)1) ? (((/* implicit */int) ((signed char) var_3))) : ((~(2100024926)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_2);
                var_12 ^= ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */long long int) (~(var_1)));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((((/* implicit */int) var_5)) < (var_4))))))));
            arr_12 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_6));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 7238961777522379970LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : ((-(var_1)))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (unsigned char)10);
                        var_17 = ((/* implicit */_Bool) ((int) var_8));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_2] [i_3] [i_4 + 1] [i_4] [(signed char)12] [i_5] [7ULL] = (-(((/* implicit */int) var_0)));
                            arr_21 [i_3 - 1] [i_4 + 1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_22 [i_2] [12LL] [i_4] [i_4] [0LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)));
                            arr_23 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_24 [i_4] = ((/* implicit */unsigned int) (+(((unsigned long long int) 1244853725U))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
                            arr_27 [(unsigned char)12] [(unsigned char)12] [i_4 + 1] [14ULL] [i_5] [i_2] &= ((/* implicit */unsigned char) ((unsigned long long int) 2100024926));
                        }
                    }
                } 
            } 
        }
        for (signed char i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) var_8)))))));
            var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) ? (((1081549984) % (((/* implicit */int) (unsigned short)46366)))) : (((/* implicit */int) ((signed char) (_Bool)0))));
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
        }
        arr_31 [i_2] = ((/* implicit */_Bool) var_0);
    }
}

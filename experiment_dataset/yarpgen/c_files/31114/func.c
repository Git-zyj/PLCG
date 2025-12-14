/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31114
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) var_5)) - (16543)))))) ? ((-(((long long int) (unsigned short)13845)))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_10)))))))));
        var_19 = ((/* implicit */unsigned int) ((long long int) (-(min((((/* implicit */unsigned long long int) var_4)), (var_2))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)50661))));
            var_21 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned short)50661)))));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((short) (unsigned char)243));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_4] [i_3 - 2])) << (((((/* implicit */int) arr_0 [i_4] [i_3 + 2])) - (42373)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((_Bool) arr_23 [i_2] [i_3 + 1] [i_3] [i_5] [i_5]));
                            var_24 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_5]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_0 [i_3] [i_3]))));
                var_26 = ((/* implicit */_Bool) ((unsigned short) var_1));
                arr_24 [i_2] [i_3 - 2] [i_3] = (-(((((/* implicit */_Bool) -18LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) : (var_6))));
            }
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_3 - 2] [4])))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned char) arr_16 [(_Bool)1])))));
        }
        arr_25 [i_2] [i_2] = (~(1390412833U));
        var_29 = ((/* implicit */long long int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_30 += ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_9 [i_7])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [8LL]))))) << (((((/* implicit */int) (unsigned short)51699)) - (51673))))), (((/* implicit */unsigned long long int) var_1))));
                    arr_35 [i_7] [i_8 - 1] = ((/* implicit */long long int) (!((((-(12993396243774079540ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_7]) < (arr_34 [(unsigned short)17] [i_7] [i_7]))))) == (max((arr_34 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) 3228047640U))))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((1336114241U), (((/* implicit */unsigned int) arr_31 [i_7] [i_7] [i_7])))))) || ((!((!(((/* implicit */_Bool) 0ULL))))))));
        arr_36 [i_7] = ((/* implicit */unsigned char) arr_33 [i_7]);
    }
    var_33 += ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}

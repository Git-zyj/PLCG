/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26112
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [3])) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_0 [(unsigned char)18] [(unsigned short)16]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)165))))));
        var_20 = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), ((unsigned char)165)));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */int) arr_5 [i_2 - 3])) / (((/* implicit */int) arr_5 [i_1])))) == (arr_4 [12])))));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
        }
        for (short i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    arr_15 [2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_2 [i_3]))))), (min((((/* implicit */short) (unsigned char)90)), (arr_2 [i_3])))));
                    var_23 = ((/* implicit */unsigned short) max(((unsigned char)63), (((/* implicit */unsigned char) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned char) ((long long int) min((arr_3 [i_5]), (((_Bool) 1537701762390342575LL)))));
                    arr_16 [i_1] [i_3] [i_4] [i_5] [i_1] = ((/* implicit */unsigned short) min((arr_6 [i_3]), (min((arr_6 [i_3 + 2]), (((/* implicit */int) arr_10 [(unsigned char)7] [i_3 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_25 |= ((((arr_20 [i_4] [i_4 + 1]) ^ (((/* implicit */int) arr_13 [i_3 + 2])))) | (((/* implicit */int) ((_Bool) min((arr_2 [(_Bool)1]), (((/* implicit */short) arr_9 [i_1] [i_4])))))));
                        arr_21 [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */int) arr_14 [i_1] [i_3] [i_3] [1LL] [i_6]);
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)161)) < (((/* implicit */int) arr_9 [i_1] [(short)10]))))), (arr_20 [i_4] [i_4 + 1])))) ? (((((/* implicit */int) arr_18 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [(unsigned char)4] [i_5] [(unsigned short)14])) * (((((/* implicit */_Bool) (unsigned short)21617)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)150)))))) : (arr_17 [i_1] [i_1] [i_4] [i_1] [(_Bool)1])))));
                    }
                }
                arr_22 [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */short) (unsigned char)166)), ((short)-18514))));
            }
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3 - 2])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_3] [i_1] [i_1]))))));
            arr_23 [i_3] [(unsigned short)7] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((max((((/* implicit */short) arr_11 [i_1] [i_1] [i_3])), (arr_5 [i_1]))), (min((((/* implicit */short) arr_10 [(unsigned char)9] [i_3 - 2])), (arr_0 [i_3] [(_Bool)1]))))))));
        }
    }
    var_28 -= ((/* implicit */unsigned char) 8404265100568097611LL);
    var_29 = ((/* implicit */long long int) max((min((((/* implicit */int) var_12)), (var_11))), (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((_Bool) var_17))))))));
}

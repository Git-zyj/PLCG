/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243419
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) | (var_8))))));
        arr_3 [i_0] = var_8;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) var_8);
        var_16 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)23522)) ? (((/* implicit */int) (short)23503)) : (((/* implicit */int) (short)23522))))));
        arr_7 [i_1 - 1] [i_1 - 1] = ((/* implicit */int) arr_6 [i_1]);
    }
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_16 [(unsigned char)3] [i_4] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 1] [i_3 + 1]))))) & (((/* implicit */int) ((arr_10 [i_4 + 1] [i_3 + 1]) > (((/* implicit */long long int) arr_11 [i_4 + 1] [i_3 + 1] [i_3 + 1])))))));
                        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) | (var_2)))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_5])), (var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((_Bool) (-(var_14)))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_11 [i_3 + 1] [i_2 - 3] [(unsigned short)7])))) ? (((/* implicit */long long int) (+(-1596466332)))) : (max((var_6), (((/* implicit */long long int) arr_15 [(_Bool)1] [i_2 - 1] [i_2 + 1] [(_Bool)1]))))));
            arr_17 [3U] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (unsigned char)188)))) ? (((/* implicit */int) (short)23522)) : (((int) var_4))))) : (min((((/* implicit */long long int) arr_15 [i_3] [i_2 + 2] [i_3] [i_3 + 1])), (((((/* implicit */_Bool) arr_11 [i_3] [(short)10] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39468)))))))));
            var_19 += ((/* implicit */unsigned short) var_5);
        }
        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            arr_21 [i_6] = var_14;
            arr_22 [i_6] [i_6 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((1596466331) | (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_2])))) % (((/* implicit */int) var_0)))) : (-1596466332)));
        }
        arr_23 [(unsigned short)12] [i_2] = 2507591508U;
        arr_24 [i_2] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)0] [i_2 - 3] [i_2 - 2] [(unsigned short)0])))))) ? ((-(arr_0 [i_2]))) : (((/* implicit */long long int) var_11))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) < (431036883))))));
    }
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)0)), (-431036884)));
}

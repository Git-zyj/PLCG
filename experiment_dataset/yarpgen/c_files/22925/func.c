/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22925
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((unsigned int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_4 [i_0]))));
            arr_6 [i_0] = ((/* implicit */_Bool) ((short) var_3));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) var_3))))));
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [(unsigned char)16])) <= (((/* implicit */int) arr_8 [i_0 + 2]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)16380)))) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_9 [(unsigned short)10] [i_0] [(unsigned short)10]))));
                        arr_18 [(short)19] [i_0] [i_3] [i_3] [i_0] [(short)19] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_17 = ((/* implicit */unsigned char) arr_12 [(unsigned short)2] [(unsigned short)2] [i_0]);
                    }
                } 
            } 
            arr_19 [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_3] [i_0]);
        }
        var_18 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) arr_14 [12] [i_6]);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */int) ((short) arr_13 [i_6] [i_6] [12]))) - (((/* implicit */int) (unsigned char)192)))) >= (((/* implicit */int) var_3)))))));
        var_20 = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6])) || (((/* implicit */_Bool) arr_4 [4U]))))), ((unsigned char)192));
        var_21 += ((/* implicit */unsigned char) 380362848);
    }
    for (unsigned short i_7 = 1; i_7 < 8; i_7 += 4) 
    {
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_22 [i_7 + 1] [i_7 + 1]), ((short)-8424)))) ? ((-(((/* implicit */int) arr_1 [(unsigned char)14])))) : (max((((/* implicit */int) arr_5 [i_7 + 2] [i_7 + 2] [(unsigned char)17])), ((-(((/* implicit */int) var_10))))))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_7 [i_7 + 2])))));
        var_23 = ((/* implicit */unsigned char) (short)26613);
        var_24 ^= ((/* implicit */signed char) max((((/* implicit */int) arr_8 [i_7])), ((~((-(((/* implicit */int) (short)26618))))))));
    }
    var_25 = ((/* implicit */short) (((+(((/* implicit */int) (short)-26603)))) * (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)90)))))))));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_2))) || (((/* implicit */_Bool) 738817854))));
    var_27 = ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_9)));
}

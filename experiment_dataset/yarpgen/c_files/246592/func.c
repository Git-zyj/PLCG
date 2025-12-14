/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246592
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (unsigned short)4008)) : (((/* implicit */int) (unsigned short)15742))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned short)49794)) : (((/* implicit */int) (unsigned short)49791))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)49794))) : ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)130)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_15 |= ((/* implicit */short) ((((/* implicit */int) (short)-4659)) - (((/* implicit */int) min((arr_2 [(unsigned short)16] [i_1]), ((unsigned char)211))))));
            arr_5 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)8405)) - (8375))))))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))) - (136)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)8405)) - (8375))))))))) >> (((((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))) - (136))) + (112))))));
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                var_16 = max((arr_1 [i_0] [i_0]), ((unsigned char)99));
                arr_8 [(unsigned char)4] [(unsigned char)4] [i_0] [i_1] |= ((/* implicit */unsigned short) (~(((((/* implicit */int) max(((unsigned char)108), ((unsigned char)255)))) + (((/* implicit */int) ((short) (unsigned char)248)))))));
                var_17 = ((/* implicit */short) max((min((((/* implicit */int) ((short) (unsigned short)39742))), ((~(((/* implicit */int) var_2)))))), ((-(((/* implicit */int) arr_2 [i_0] [i_2 - 1]))))));
            }
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_18 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_1)))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0])))))) ? (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_1]), (var_6)))) : (((/* implicit */int) ((short) var_1)))));
                var_20 = ((/* implicit */short) (((+((-(((/* implicit */int) var_8)))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)5] [(unsigned short)5]))))) & (((/* implicit */int) arr_0 [i_3]))))));
            }
            for (short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) || (((/* implicit */_Bool) (unsigned char)0))))) & ((((((~(((/* implicit */int) var_0)))) + (2147483647))) << ((((~(((/* implicit */int) var_5)))) - (3854)))))));
                arr_15 [i_0] = ((/* implicit */short) max((max((((((/* implicit */int) arr_7 [(short)12] [(short)13] [i_4])) * (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) var_12))))), (((((((/* implicit */int) min((arr_14 [i_1] [i_1] [(short)3]), ((short)-19922)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)8405)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) - (36884)))))));
            }
            var_22 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)25794))));
            var_23 -= ((/* implicit */short) max((((/* implicit */int) ((unsigned short) ((short) var_8)))), ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1]))))));
        }
        var_24 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((short) var_11))))));
        var_25 |= ((unsigned short) (+(((/* implicit */int) (unsigned short)7574))));
        var_26 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)2061))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34352
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
    var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97)))))) ? (((8709685723453059956ULL) ^ (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((min((arr_2 [i_0 - 3]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (unsigned short)12629))))))), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)52907)))) || (((/* implicit */_Bool) (unsigned short)65535))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) >= (((/* implicit */int) arr_2 [i_0 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)58719)))) > (((/* implicit */int) arr_2 [i_0]))));
        var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]))) : (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((-503340463) < (((/* implicit */int) (unsigned char)157))));
                    var_24 = (unsigned char)127;
                    var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_5 [i_2])) * (((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) var_5))))))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]);
        arr_13 [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_11 [i_1] [i_1] [i_1])), (var_16))) ^ (((/* implicit */int) ((short) arr_11 [i_1] [i_1] [i_1])))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (((unsigned int) arr_10 [(short)5] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (((((/* implicit */int) ((unsigned short) arr_2 [i_1]))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)12629)) : (((/* implicit */int) (unsigned short)27677)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) var_11);
        var_28 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)144))))) ? ((-(arr_1 [i_4] [(short)18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31749))))), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)9]))));
    }
    var_29 |= ((/* implicit */unsigned long long int) (~((~(max((((/* implicit */int) var_15)), (1462911458)))))));
    var_30 = ((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (short)-9612)) + (9618)))));
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6659)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152)))))) ? (var_8) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))) : ((~(((/* implicit */int) var_3))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43638
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_1)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) -1988226834)) ? (((/* implicit */int) (short)-25439)) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((unsigned int) min((-3708125498031922640LL), (((/* implicit */long long int) (unsigned char)210)))))));
            arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [9LL] [9LL] [9LL]), (((/* implicit */int) var_14))))) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_1])))) + (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (arr_0 [i_0] [i_1])))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((-273995448) - (((/* implicit */int) (unsigned short)46314))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
                        var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_6 [3U] [3U] [3U])))) ? (arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)155)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_0])), (arr_11 [i_4] [4LL] [i_0 + 1] [i_0 + 1])))))) : (((/* implicit */int) ((_Bool) ((var_1) << (((((/* implicit */int) arr_13 [i_2])) - (3872)))))))));
                    }
                } 
            } 
            arr_15 [i_0] = arr_7 [i_0] [i_2];
            var_21 = ((/* implicit */unsigned short) ((unsigned int) min((min((arr_3 [(_Bool)1]), (((/* implicit */long long int) var_9)))), (arr_1 [i_2]))));
            arr_16 [i_0 + 1] &= ((/* implicit */unsigned int) min((arr_1 [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19281)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_7))))) != (((((/* implicit */_Bool) arr_2 [6ULL] [i_2] [(_Bool)1])) ? (4975899605845803388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13171))))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_19 [3LL] = arr_10 [i_0 - 1] [i_0 + 1] [i_0];
            arr_20 [i_5] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_7 [7U] [i_5]))))))), (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_10 [i_5] [i_5] [i_0])), (arr_1 [i_0])))))));
            arr_21 [i_0] [i_5] [i_0] = ((/* implicit */signed char) arr_12 [(_Bool)1] [(_Bool)1] [i_0] [i_5] [11LL] [i_5]);
            var_22 = ((/* implicit */_Bool) max((max((arr_1 [i_0 - 1]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((short) arr_1 [i_0 - 1])))));
        }
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_9 [i_0 + 1] [11ULL] [i_0] [(unsigned short)12])))));
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_13 [i_0])), (((((/* implicit */_Bool) 268369920LL)) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) arr_13 [i_6])))))))))));
            arr_24 [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) ((short) (~(((((/* implicit */_Bool) (unsigned short)31988)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2736369533U))))));
            arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) arr_12 [(_Bool)0] [i_0] [i_6 - 1] [11U] [i_6] [i_6])) : (2031616))))))) : (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_6 + 1])))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_6] [i_6]))))))));
            var_25 = ((/* implicit */signed char) ((max((arr_7 [i_6 - 1] [i_0 - 1]), (arr_7 [i_6 + 2] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-18375))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_6 - 1])) ? (arr_0 [(signed char)7] [10]) : (arr_22 [i_6])))), (((((/* implicit */long long int) 2031601)) ^ (arr_1 [i_6])))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_23 [i_7] [i_7 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_7]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_23 [i_7] [i_7])))) ? (arr_23 [i_7] [i_7]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
            var_27 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (arr_26 [i_7] [i_7] [i_7 - 1]) : (arr_26 [i_7] [i_7 - 1] [i_7 - 1]))), (((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7 - 1])) ? (arr_26 [i_7] [i_7] [i_7 - 1]) : (arr_26 [i_7] [i_7] [i_7 - 1])))));
        }
        arr_30 [i_0] = max((((/* implicit */unsigned int) arr_18 [i_0 - 1] [i_0] [i_0])), (4002239436U));
    }
    var_28 = ((/* implicit */int) var_14);
}

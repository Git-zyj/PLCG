/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215443
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (3006087936U)))) ? ((+(4294967285U))) : (((/* implicit */unsigned int) min((1570981383), (-1570981384))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((-1898382266) + (((/* implicit */int) var_4)))) == (((/* implicit */int) var_8)))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_9)))), (min((var_1), (((/* implicit */long long int) var_9))))))));
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (unsigned short)31459)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) > (((((/* implicit */_Bool) var_6)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned char) max((5295354951986085493LL), (((/* implicit */long long int) var_0))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((~((~(arr_1 [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((+(var_5))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)2590)) > (((/* implicit */int) arr_0 [i_0])))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4))))), (2197950205U)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1734042315)))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13973642295428474743ULL)))) ? (((/* implicit */int) (signed char)-126)) : (var_7)))) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)50)), (max(((-2147483647 - 1)), (((/* implicit */int) var_8))))))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [i_0] [i_0])) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) - (62))))), (((((/* implicit */_Bool) 6187435023843632630ULL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)32156)), (var_7))) - (((/* implicit */int) arr_2 [(short)14]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((2197950205U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)3] [14] [i_0] [14])))))) : (arr_1 [i_0])))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_18 -= ((/* implicit */unsigned char) (+(var_0)));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((-5361405662252508868LL) == (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_3] [(unsigned char)8]), (((/* implicit */signed char) (_Bool)1)))))))))));
        var_20 *= ((/* implicit */short) arr_9 [i_3]);
    }
}

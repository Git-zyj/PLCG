/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229327
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_3 [10LL] |= ((/* implicit */signed char) ((short) arr_2 [i_0 - 1]));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 4; i_1 < 24; i_1 += 3) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) (short)-19881)) : (((/* implicit */int) (short)32054))))) : (min((16050539799587961787ULL), (((/* implicit */unsigned long long int) var_0))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7338702131945069171LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-19881)))))) ? (((/* implicit */long long int) arr_6 [i_1 - 4])) : (var_2))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_10 [i_3] [i_2 + 1] [i_1]))))) : (var_9)));
                arr_11 [(short)4] [(short)6] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19888))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423487ULL))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-19883))))));
            }
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                arr_14 [i_1] [i_2 - 1] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                arr_15 [i_1] [i_1] [i_4] = ((/* implicit */short) ((arr_12 [i_2] [i_2] [i_2 + 1]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)32054)))));
            }
            arr_16 [i_1] = ((/* implicit */unsigned int) ((long long int) 3U));
            var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)27270)) ? (((/* implicit */unsigned long long int) 573184347)) : (17429250925190407971ULL))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
        {
            var_17 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((short)-32765), (((/* implicit */short) (_Bool)1))))), (arr_18 [i_5])));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_1]))));
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3132416514862764049ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 1] [i_5]))) : (var_9)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-32766)))) || (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)90)), ((short)-19881))))))) : (((/* implicit */int) ((short) (_Bool)1)))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12832704832135423213ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 4] [i_5 + 2] [i_1 - 2]))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) arr_8 [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (18U)));
        }
        /* LoopSeq 2 */
        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 4) 
        {
            var_21 = ((/* implicit */short) var_8);
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)27181)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) -2147483645)) && ((_Bool)1)))))))));
        }
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_9 = 3; i_9 < 24; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 ^= ((/* implicit */short) arr_17 [22ULL]);
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_1] [i_7])) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)8] [i_8] [i_9] [(unsigned char)8]))))) + (((/* implicit */long long int) min((1814645535U), (((/* implicit */unsigned int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2877605488U)))) ^ (var_10)))));
                        var_25 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (arr_6 [(_Bool)1])))) ? (((/* implicit */int) arr_24 [i_9 - 2] [i_9 - 2])) : ((+(arr_30 [i_10] [i_8] [i_7]))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) arr_32 [i_8 + 4] [i_1] [i_1 - 4]));
                        arr_37 [i_1] [0U] [i_1] [i_1] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1]))));
                        var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 16530325232000920682ULL)))) ? ((~(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32054)))));
                    }
                    arr_38 [i_1] [i_8] [i_7 + 1] [i_1] = ((/* implicit */_Bool) var_10);
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    arr_41 [22] [22] |= ((/* implicit */unsigned long long int) var_5);
                    arr_42 [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_27 [i_1] [i_7 + 3] [i_8 - 2]))) ? (((arr_27 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_27 [i_7 - 1] [i_8 - 2] [6ULL])) : (((/* implicit */int) arr_27 [(unsigned char)4] [i_8 + 1] [i_8 + 1])))) : (((((/* implicit */_Bool) (short)-3559)) ? (((/* implicit */int) arr_27 [i_12 - 1] [i_8 + 2] [i_7])) : (((/* implicit */int) arr_27 [i_1] [i_7 + 1] [i_7]))))));
                }
                arr_43 [i_8] [i_1] [i_8] [i_8 + 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((unsigned int) (short)19618)))) >> (((var_5) >> (((max((var_10), (var_10))) + (5308529497514961884LL)))))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((arr_8 [(short)10]), ((+(((/* implicit */int) arr_32 [i_8 + 1] [(_Bool)1] [i_7 - 2])))))))));
                arr_44 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-30086)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (-890701464) : (1491997354)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 - 3] [i_1 - 4] [i_1]))) : (6626098038015780042ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)13925), ((short)-32766)))))));
            }
            var_29 = var_8;
            var_30 = min((max((((/* implicit */long long int) (~(arr_39 [i_1] [i_7] [i_1] [i_7])))), (((((/* implicit */_Bool) 1144813083U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */long long int) var_7)), ((~(var_2))))));
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 10906534565105508203ULL);
        }
    }
}

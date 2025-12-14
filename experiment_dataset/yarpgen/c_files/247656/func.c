/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247656
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
    var_11 = ((/* implicit */int) ((long long int) ((unsigned short) var_5)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [12])) && (((/* implicit */_Bool) arr_2 [i_0 + 2] [(short)15])))));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)104)))) : ((~(var_8))))) == (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)91))))) / (1068852064067521827LL)))));
                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) -1068852064067521817LL)))));
                var_14 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) (-(var_9)))) ? (-1068852064067521832LL) : (min((6135596117194790529LL), (((/* implicit */long long int) -429751757))))))));
            }
            var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 8488805436895559876LL)))) && (((/* implicit */_Bool) arr_6 [i_0 + 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)14336))) * (arr_3 [i_0] [i_0 + 2] [i_0 + 2])))));
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13895406004997296202ULL)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) : (2147483644)));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-14337))))) == (((6135596117194790529LL) & (((/* implicit */long long int) 0))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_14 [i_0] [i_3] [2U] = ((/* implicit */int) ((((1027448436U) * (((/* implicit */unsigned int) 310654069)))) % ((-(((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                var_17 = (~(((-1425962124) % (arr_8 [i_0]))));
                var_18 = ((/* implicit */signed char) var_6);
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)37)), (-1068852064067521817LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (18374686479671623681ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) ((signed char) var_10)))))) : (((13478357886483580945ULL) + (((/* implicit */unsigned long long int) min((var_9), (-310654054))))))));
            }
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((((unsigned int) (!(((/* implicit */_Bool) var_3))))) % (((/* implicit */unsigned int) ((int) arr_15 [i_0 - 2] [i_0 - 1])))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_23 [i_0 - 3] [i_0 - 3] [i_0] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (arr_13 [i_0] [i_5] [i_7]) : (((/* implicit */int) (short)-14336)))) | (((/* implicit */int) var_6))))) != ((~(max((4294967295U), (((/* implicit */unsigned int) var_0))))))));
                        var_21 = ((/* implicit */int) max((var_21), ((((+(((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 - 1] [i_0])))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2] [i_6]))))))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4530914864135895209ULL)))) ? ((-(((int) arr_8 [i_0])))) : (((/* implicit */int) ((arr_0 [i_0] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13106))))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197618
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
    var_11 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
        arr_5 [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) ((var_10) != (((((-1215812996) + (2147483647))) << (((arr_0 [i_0]) - (3684298561278577608ULL)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) * (((unsigned long long int) var_1))));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1]))) : ((+(((/* implicit */int) arr_7 [i_0]))))));
        }
        var_13 = (~((-(var_6))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_16 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_11 [i_3 - 1] [i_2])), ((+(((/* implicit */int) var_8))))));
                    var_14 = arr_15 [i_3] [21] [i_3 + 2] [(unsigned char)8];
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((min((arr_18 [14] [i_5 + 1]), (((/* implicit */unsigned long long int) 2147483638)))) ^ (((/* implicit */unsigned long long int) var_2)))))));
            var_16 = ((/* implicit */int) ((((arr_19 [i_4] [i_5 - 1] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((491520ULL) + (((/* implicit */unsigned long long int) -2147483630))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5 - 3] [i_4])) : (var_5))) : (((/* implicit */unsigned long long int) arr_6 [i_5 - 4] [i_5]))))))))));
        }
        var_18 = ((/* implicit */int) var_8);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) * ((-(arr_19 [i_4] [i_4] [i_4])))));
            arr_23 [i_4] [i_6] = ((/* implicit */int) ((2147483605) < (2147483647)));
        }
        for (int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 646674932)) ? (7) : (((/* implicit */int) (unsigned char)97))));
            arr_26 [i_4] [i_4] = ((/* implicit */unsigned char) var_6);
            var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)160)) ? (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9614)))))))))));
            arr_27 [i_4] [(unsigned char)20] [i_4] |= ((/* implicit */unsigned char) 2147483647);
        }
        arr_28 [i_4] [i_4] = min((((/* implicit */unsigned long long int) 2147483643)), (((arr_20 [i_4] [i_4] [i_4]) | (arr_20 [i_4] [i_4] [i_4]))));
    }
    var_22 = ((/* implicit */unsigned short) var_0);
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) | (9ULL));
}
